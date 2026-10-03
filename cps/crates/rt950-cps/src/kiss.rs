//! KISS receive and APRS position decode for the map.
//!
//! The GPS module's NMEA stream stays on the radio's internal UART. This
//! module reads the USB KISS feed. Beacon writes one position frame on that
//! same port. The radio's own beacon is still the side key.

use std::collections::HashMap;
use std::io::{Read, Write};
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::mpsc::{self, Receiver, Sender};
use std::sync::Arc;
use std::thread::{self, JoinHandle};
use std::time::Duration;

use eframe::egui;
use serde_json::Value;

const FEND: u8 = 0xC0;
const FESC: u8 = 0xDB;
const TFEND: u8 = 0xDC;
const TFESC: u8 = 0xDD;
const EARTH_MILES: f64 = 3958.7613;

#[derive(Clone, Debug, PartialEq)]
pub struct Station {
    pub call: String,
    pub lat: f64,
    pub lon: f64,
    pub comment: String,
}

pub enum FeedEvent {
    Listening,
    Station(Station),
    Error(String),
}

pub struct Feed {
    stop: Arc<AtomicBool>,
    rx: Receiver<FeedEvent>,
    outbound: Sender<Vec<u8>>,
    thread: Option<JoinHandle<()>>,
}

impl Feed {
    pub fn start(port: &str, ctx: egui::Context) -> Self {
        let (tx, rx) = mpsc::channel();
        let (outbound, outbound_rx) = mpsc::channel();
        let stop = Arc::new(AtomicBool::new(false));
        let stop_thread = Arc::clone(&stop);
        let port = port.to_string();
        let thread = thread::spawn(move || listen(port, stop_thread, tx, outbound_rx, ctx));
        Self {
            stop,
            rx,
            outbound,
            thread: Some(thread),
        }
    }

    pub fn send_kiss(&self, frame: Vec<u8>) -> bool {
        self.outbound.send(frame).is_ok()
    }

    pub fn poll(&self) -> Vec<FeedEvent> {
        let mut out = Vec::new();
        while let Ok(event) = self.rx.try_recv() {
            out.push(event);
        }
        out
    }
}

impl Drop for Feed {
    fn drop(&mut self) {
        self.stop.store(true, Ordering::Relaxed);
        if let Some(thread) = self.thread.take() {
            // The serial read timeout is what wakes the thread. Join waits
            // for that read to return so the port is closed before a
            // codeplug transfer opens it.
            let _ = thread.join();
        }
    }
}

fn listen(
    port: String,
    stop: Arc<AtomicBool>,
    tx: mpsc::Sender<FeedEvent>,
    outbound: Receiver<Vec<u8>>,
    ctx: egui::Context,
) {
    let mut serial = match serialport::new(&port, 115_200)
        .timeout(Duration::from_millis(200))
        .open()
    {
        Ok(port) => port,
        Err(e) => {
            let _ = tx.send(FeedEvent::Error(format!("{port}: {e}")));
            ctx.request_repaint();
            return;
        }
    };
    let _ = tx.send(FeedEvent::Listening);
    ctx.request_repaint();
    let mut buf = Vec::new();
    let mut chunk = [0u8; 512];
    while !stop.load(Ordering::Relaxed) {
        while let Ok(frame) = outbound.try_recv() {
            if serial.write_all(&frame).and_then(|()| serial.flush()).is_err() {
                let _ = tx.send(FeedEvent::Error(format!("{port}: beacon write failed")));
                ctx.request_repaint();
                return;
            }
        }
        match serial.read(&mut chunk) {
            Ok(0) => {}
            Ok(n) => {
                for frame in push_kiss(&mut buf, &chunk[..n]) {
                    if let Some(station) = position_from_ax25(&frame) {
                        let _ = tx.send(FeedEvent::Station(station));
                        ctx.request_repaint();
                    }
                }
            }
            Err(e) if e.kind() == std::io::ErrorKind::TimedOut => {}
            Err(e) => {
                let _ = tx.send(FeedEvent::Error(format!("{port}: {e}")));
                ctx.request_repaint();
                return;
            }
        }
        if buf.len() > 65_536 {
            buf.clear();
        }
    }
}

pub fn push_kiss(buf: &mut Vec<u8>, incoming: &[u8]) -> Vec<Vec<u8>> {
    buf.extend_from_slice(incoming);
    let mut frames = Vec::new();
    loop {
        let Some(start) = buf.iter().position(|byte| *byte == FEND) else {
            buf.clear();
            break;
        };
        if start > 0 {
            buf.drain(..start);
        }
        let Some(end) = buf[1..].iter().position(|byte| *byte == FEND) else {
            break;
        };
        let end = end + 1;
        let raw = buf[1..end].to_vec();
        buf.drain(..=end);
        if raw.is_empty() {
            continue;
        }
        let Some(unescaped) = unescape(&raw) else {
            continue;
        };
        // Low nibble 0 is a data frame. The high nibble is the KISS port.
        if unescaped.first().is_some_and(|cmd| cmd & 0x0F == 0) && unescaped.len() > 1 {
            frames.push(unescaped[1..].to_vec());
        }
    }
    frames
}

fn unescape(raw: &[u8]) -> Option<Vec<u8>> {
    let mut out = Vec::with_capacity(raw.len());
    let mut i = 0;
    while i < raw.len() {
        if raw[i] == FESC {
            i += 1;
            match raw.get(i).copied() {
                Some(TFEND) => out.push(FEND),
                Some(TFESC) => out.push(FESC),
                _ => return None,
            }
        } else {
            out.push(raw[i]);
        }
        i += 1;
    }
    Some(out)
}

pub fn position_from_ax25(frame: &[u8]) -> Option<Station> {
    let (source, dest, info) = split_ui(frame)?;
    parse_position(&source, &dest, info)
}

fn split_ui(frame: &[u8]) -> Option<(String, String, &[u8])> {
    if frame.len() < 16 {
        return None;
    }
    let dest = callsign(&frame[0..7])?;
    let source = callsign(&frame[7..14])?;
    let mut last = frame[13] & 1 == 1;
    let mut i = 14;
    let mut hops = 0;
    while !last {
        if hops == 8 || i + 7 > frame.len() {
            return None;
        }
        last = frame[i + 6] & 1 == 1;
        i += 7;
        hops += 1;
    }
    if i + 2 > frame.len() {
        return None;
    }
    let control = frame[i] & 0xEF;
    let pid = frame[i + 1];
    if control != 0x03 || pid != 0xF0 {
        return None;
    }
    Some((source, dest, &frame[i + 2..]))
}

fn callsign(addr: &[u8]) -> Option<String> {
    if addr.len() < 7 {
        return None;
    }
    let mut call = String::new();
    for byte in &addr[..6] {
        let ch = byte >> 1;
        if ch != b' ' {
            if !ch.is_ascii_graphic() {
                return None;
            }
            call.push(ch as char);
        }
    }
    if call.is_empty() {
        return None;
    }
    let ssid = (addr[6] >> 1) & 0x0F;
    if ssid != 0 {
        call.push('-');
        call.push_str(&ssid.to_string());
    }
    Some(call)
}

fn parse_position(source: &str, dest: &str, info: &[u8]) -> Option<Station> {
    if info.is_empty() {
        return None;
    }
    match info[0] {
        b'!' | b'=' => uncompressed(source, &info[1..]),
        b'/' | b'@' if info.len() > 8 => uncompressed(source, &info[8..]),
        b'`' | b'\'' | 0x1C | 0x1D => mic_e(source, dest, info),
        _ => None,
    }
}

fn uncompressed(source: &str, body: &[u8]) -> Option<Station> {
    // lat 8, symbol table 1, lon 9, symbol code 1, then the comment.
    // `!4903.50N/07201.75W-Test` puts '-' at index 18; the text starts at 19.
    if body.len() < 19 {
        return None;
    }
    let lat = parse_lat(std::str::from_utf8(&body[0..8]).ok()?)?;
    let lon = parse_lon(std::str::from_utf8(&body[9..18]).ok()?)?;
    let comment = String::from_utf8_lossy(&body[19..]).trim().to_string();
    Some(Station {
        call: source.to_string(),
        lat,
        lon,
        comment,
    })
}

fn parse_lat(text: &str) -> Option<f64> {
    if text.len() != 8 {
        return None;
    }
    let deg: f64 = text[0..2].parse().ok()?;
    let min: f64 = text[2..7].parse().ok()?;
    if !(0.0..60.0).contains(&min) || !(0.0..=90.0).contains(&deg) {
        return None;
    }
    let mut value = deg + min / 60.0;
    match text.as_bytes()[7] {
        b'N' => Some(value),
        b'S' => {
            value = -value;
            Some(value)
        }
        _ => None,
    }
}

fn parse_lon(text: &str) -> Option<f64> {
    if text.len() != 9 {
        return None;
    }
    let deg: f64 = text[0..3].parse().ok()?;
    let min: f64 = text[3..8].parse().ok()?;
    if !(0.0..60.0).contains(&min) || !(0.0..=180.0).contains(&deg) {
        return None;
    }
    let mut value = deg + min / 60.0;
    match text.as_bytes()[8] {
        b'E' => Some(value),
        b'W' => {
            value = -value;
            Some(value)
        }
        _ => None,
    }
}

fn mic_e(source: &str, dest: &str, info: &[u8]) -> Option<Station> {
    let dest = dest.split('-').next().unwrap_or(dest);
    if dest.len() < 6 || info.len() < 9 {
        return None;
    }
    let mut digit = [0u8; 6];
    let mut flag = [false; 6];
    for (i, byte) in dest.as_bytes()[..6].iter().copied().enumerate() {
        let (value, set) = mic_digit(byte)?;
        digit[i] = value;
        flag[i] = set;
    }
    let mut lat = (digit[0] * 10 + digit[1]) as f64
        + ((digit[2] * 10 + digit[3]) as f64 + (digit[4] * 10 + digit[5]) as f64 / 100.0) / 60.0;
    if flag[3] {
        lat = -lat;
    }
    let mut deg = info[1] as i32 - 28;
    let mut min = info[2] as i32 - 28;
    let hund = info[3] as i32 - 28;
    if flag[4] {
        deg += 100;
    }
    if (180..=189).contains(&deg) {
        deg -= 80;
    }
    if (190..=199).contains(&deg) {
        deg -= 190;
    }
    if min >= 60 {
        min -= 60;
    }
    if !(0..=179).contains(&deg) || !(0..=59).contains(&min) || !(0..=99).contains(&hund) {
        return None;
    }
    let mut lon = deg as f64 + (min as f64 + hund as f64 / 100.0) / 60.0;
    if flag[5] {
        lon = -lon;
    }
    let comment = String::from_utf8_lossy(&info[9..]).trim().to_string();
    Some(Station {
        call: source.to_string(),
        lat,
        lon,
        comment,
    })
}

fn mic_digit(byte: u8) -> Option<(u8, bool)> {
    match byte {
        b'0'..=b'9' => Some((byte - b'0', false)),
        b'A'..=b'J' => Some((byte - b'A', true)),
        b'P'..=b'Y' => Some((byte - b'P', true)),
        b'K' | b'L' | b'Z' => Some((0, true)),
        _ => None,
    }
}

pub fn haversine_miles(a: (f64, f64), b: (f64, f64)) -> f64 {
    let lat1 = a.0.to_radians();
    let lat2 = b.0.to_radians();
    let dlat = (b.0 - a.0).to_radians();
    let dlon = (b.1 - a.1).to_radians();
    let h = (dlat / 2.0).sin().powi(2) + lat1.cos() * lat2.cos() * (dlon / 2.0).sin().powi(2);
    2.0 * EARTH_MILES * h.sqrt().asin()
}

pub fn offset_miles(center: (f64, f64), point: (f64, f64)) -> (f64, f64) {
    let mean = ((center.0 + point.0) / 2.0).to_radians();
    let north = (point.0 - center.0).to_radians() * EARTH_MILES;
    let east = (point.1 - center.1).to_radians() * mean.cos() * EARTH_MILES;
    (north, east)
}

pub fn fixed_position(aprs: &Value) -> Option<(f64, f64)> {
    // A new codeplug stores 0° 0' 0" for both axes. That is unset, not a fix
    // on the equator. A real position on one axis still counts.
    let blank = [
        "nUD_LatitudeDegree",
        "nUD_LatitudeMinute",
        "nUD_LatitudeSecond",
        "nUD_LongitudeDegree",
        "nUD_LongitudeMinute",
        "nUD_LongitudeSecond",
    ]
    .iter()
    .all(|key| number(aprs, key) == 0.0);
    if blank {
        return None;
    }
    let lat = dms(
        number(aprs, "nUD_LatitudeDegree"),
        number(aprs, "nUD_LatitudeMinute"),
        number(aprs, "nUD_LatitudeSecond"),
        number(aprs, "cbB_NorthSouthLatitude") > 0.0,
    )?;
    let lon = dms(
        number(aprs, "nUD_LongitudeDegree"),
        number(aprs, "nUD_LongitudeMinute"),
        number(aprs, "nUD_LongitudeSecond"),
        number(aprs, "cbB_EastWestLongitude") <= 0.0,
    )?;
    Some((lat, lon))
}

fn dms(deg: f64, min: f64, sec: f64, negative: bool) -> Option<f64> {
    if !deg.is_finite() || !min.is_finite() || !sec.is_finite() {
        return None;
    }
    let mut value = deg.abs() + min.abs() / 60.0 + sec.abs() / 3600.0;
    if negative {
        value = -value;
    }
    Some(value)
}

fn number(aprs: &Value, key: &str) -> f64 {
    aprs.get(key).and_then(Value::as_f64).unwrap_or(0.0)
}

pub fn own_call(aprs: &Value) -> String {
    let mut call = aprs
        .get("tB_CallSign")
        .and_then(Value::as_str)
        .unwrap_or("")
        .trim()
        .to_ascii_uppercase();
    let ssid = aprs.get("cbB_SSID").and_then(Value::as_i64).unwrap_or(0);
    if ssid > 0 {
        call.push('-');
        call.push_str(&ssid.to_string());
    }
    call
}

/// Fixed coordinates, or this station's newest GPS packet. Nothing is invented.
pub fn map_center(aprs: &Value, stations: &HashMap<String, Station>) -> Option<(f64, f64)> {
    let site = aprs
        .get("cbB_SiteType")
        .and_then(Value::as_i64)
        .unwrap_or(0);
    if site == 0 {
        return fixed_position(aprs);
    }
    let call = own_call(aprs);
    stations.get(&call).map(|station| (station.lat, station.lon))
}

/// One uncompressed APRS position, wrapped as a KISS data frame.
/// The center is the same point the map uses. There is no separate
/// "beacon now" command on the programming cable.
pub fn beacon_kiss(aprs: &Value, stations: &HashMap<String, Station>) -> Result<Vec<u8>, String> {
    let (lat, lon) = map_center(aprs, stations).ok_or_else(|| {
        "No position to send. Fixed coordinates are empty, or this callsign has not reported a GPS position.".to_string()
    })?;
    let (base, ssid) = station_address(aprs)?;
    let hops = path_hops(aprs)?;
    let (table, symbol) = symbol_bytes(aprs);
    let comment = comment_bytes(aprs);
    let info = format!(
        "!{}{}{}{}{}",
        aprs_coord(lat, true)?,
        table as char,
        aprs_coord(lon, false)?,
        symbol as char,
        comment
    );
    let mut ax25 = Vec::new();
    ax25.extend(ax25_address("APRS", 0, false)?);
    ax25.extend(ax25_address(&base, ssid, hops.is_empty())?);
    for (i, (call, hop_ssid)) in hops.iter().enumerate() {
        ax25.extend(ax25_address(call, *hop_ssid, i + 1 == hops.len())?);
    }
    ax25.push(0x03);
    ax25.push(0xF0);
    ax25.extend(info.into_bytes());
    Ok(kiss_wrap(&ax25))
}

fn station_address(aprs: &Value) -> Result<(String, u8), String> {
    let call = aprs
        .get("tB_CallSign")
        .and_then(Value::as_str)
        .unwrap_or("")
        .trim()
        .to_ascii_uppercase();
    let ssid = aprs.get("cbB_SSID").and_then(Value::as_i64).unwrap_or(0);
    if !(0..=15).contains(&ssid) {
        return Err("SSID must be 0 to 15.".to_string());
    }
    if !valid_ax25_call(&call) {
        return Err("Callsign must be 1 to 6 letters or digits.".to_string());
    }
    Ok((call, ssid as u8))
}

fn valid_ax25_call(call: &str) -> bool {
    (1..=6).contains(&call.len()) && call.bytes().all(|byte| byte.is_ascii_alphanumeric())
}

fn path_hops(aprs: &Value) -> Result<Vec<(String, u8)>, String> {
    let which = aprs
        .get("cbB_RoutingSelect")
        .and_then(Value::as_i64)
        .unwrap_or(0);
    let mut hops = Vec::new();
    match which {
        1 => hops.push(("WIDE1".to_string(), 1)),
        2 => {
            hops.push(("WIDE1".to_string(), 1));
            hops.push(("WIDE2".to_string(), 1));
        }
        3 => hops.extend(custom_hop(aprs, "tB_CustomRoutingOne", "cbB_CustomRoutingOneSSID")?),
        4 => {
            hops.extend(custom_hop(aprs, "tB_CustomRoutingOne", "cbB_CustomRoutingOneSSID")?);
            hops.extend(custom_hop(aprs, "tB_CustomRoutingTwo", "cbB_CustomRoutingTwoSSID")?);
        }
        _ => {}
    }
    if hops.len() > 8 {
        return Err("Beacon path has more than 8 hops.".to_string());
    }
    Ok(hops)
}

fn custom_hop(aprs: &Value, call_key: &str, ssid_key: &str) -> Result<Option<(String, u8)>, String> {
    let call = aprs
        .get(call_key)
        .and_then(Value::as_str)
        .unwrap_or("")
        .trim()
        .to_ascii_uppercase();
    if call.is_empty() {
        return Ok(None);
    }
    let ssid = aprs.get(ssid_key).and_then(Value::as_i64).unwrap_or(0);
    if !(0..=15).contains(&ssid) || !valid_ax25_call(&call) {
        return Err(format!("Path {call} is not a valid AX.25 address."));
    }
    Ok(Some((call, ssid as u8)))
}

fn symbol_bytes(aprs: &Value) -> (u8, u8) {
    // CPS symbols match the radio manual: /L /b /> /R. User-defined icons
    // have no published character map here, so they go out as a house.
    match aprs.get("cbB_RadioSymbol").and_then(Value::as_i64).unwrap_or(0) {
        1 => (b'/', b'b'),
        2 => (b'/', b'>'),
        3 => (b'/', b'R'),
        4 => (b'/', b'-'),
        _ => (b'/', b'L'),
    }
}

fn comment_bytes(aprs: &Value) -> String {
    aprs.get("tB_CustomMessages")
        .and_then(Value::as_str)
        .unwrap_or("")
        .chars()
        .filter(|ch| ch.is_ascii_graphic() || *ch == ' ')
        .take(36)
        .collect::<String>()
        .trim()
        .to_string()
}

fn aprs_coord(value: f64, latitude: bool) -> Result<String, String> {
    if !value.is_finite() {
        return Err("Position is not a number.".to_string());
    }
    let hemisphere = if latitude {
        if value < 0.0 { 'S' } else { 'N' }
    } else if value < 0.0 {
        'W'
    } else {
        'E'
    };
    let abs = value.abs();
    let mut degrees = abs.floor() as u32;
    let mut minutes = (abs - f64::from(degrees)) * 60.0;
    if minutes >= 59.995 {
        minutes = 0.0;
        degrees += 1;
    }
    let limit = if latitude { 90 } else { 180 };
    if degrees > limit {
        return Err("Position is out of range.".to_string());
    }
    let width = if latitude { 2 } else { 3 };
    Ok(format!("{degrees:0width$}{minutes:05.2}{hemisphere}"))
}

fn ax25_address(call: &str, ssid: u8, last: bool) -> Result<[u8; 7], String> {
    if !valid_ax25_call(call) || ssid > 15 {
        return Err(format!("Path {call} is not a valid AX.25 address."));
    }
    let mut out = [b' ' << 1; 7];
    for (i, byte) in call.bytes().enumerate() {
        out[i] = byte << 1;
    }
    // Bits 6 and 5 are the AX.25 reserved bits. Bit 0 marks the last address.
    out[6] = 0x60 | (ssid << 1) | u8::from(last);
    Ok(out)
}

fn kiss_wrap(payload: &[u8]) -> Vec<u8> {
    let mut out = Vec::with_capacity(payload.len() + 3);
    out.push(FEND);
    out.push(0x00);
    for byte in payload {
        match *byte {
            FEND => {
                out.push(FESC);
                out.push(TFEND);
            }
            FESC => {
                out.push(FESC);
                out.push(TFESC);
            }
            other => out.push(other),
        }
    }
    out.push(FEND);
    out
}

pub fn stations_in_range<'a>(
    center: (f64, f64),
    stations: &'a HashMap<String, Station>,
    miles: f64,
) -> Vec<(&'a Station, f64)> {
    let mut rows: Vec<_> = stations
        .values()
        .filter_map(|station| {
            let distance = haversine_miles(center, (station.lat, station.lon));
            (distance <= miles).then_some((station, distance))
        })
        .collect();
    rows.sort_by(|a, b| a.1.partial_cmp(&b.1).unwrap_or(std::cmp::Ordering::Equal));
    rows
}

#[cfg(test)]
mod tests {
    use super::*;

    fn ax25(dest: &str, source: &str, info: &[u8]) -> Vec<u8> {
        let mut frame = Vec::new();
        frame.extend(addr(dest, false));
        frame.extend(addr(source, true));
        frame.push(0x03);
        frame.push(0xF0);
        frame.extend(info);
        frame
    }

    fn addr(call: &str, last: bool) -> [u8; 7] {
        let (base, ssid) = call.split_once('-').unwrap_or((call, "0"));
        let mut out = [b' ' << 1; 7];
        for (i, byte) in base.bytes().take(6).enumerate() {
            out[i] = byte << 1;
        }
        let ssid: u8 = ssid.parse().unwrap_or(0);
        out[6] = (ssid << 1) | u8::from(last);
        out
    }

    #[test]
    fn kiss_unescape_restores_frame_markers() {
        let mut buf = Vec::new();
        let frames = push_kiss(&mut buf, &[FEND, 0x00, FESC, TFEND, FESC, TFESC, 0x41, FEND]);
        assert_eq!(frames, vec![vec![FEND, FESC, 0x41]]);
        assert!(buf.is_empty());
    }

    #[test]
    fn uncompressed_position_from_the_spec_example() {
        let info = b"!4903.50N/07201.75W-Test";
        let station = position_from_ax25(&ax25("APRS", "VE2XXX", info)).unwrap();
        assert_eq!(station.call, "VE2XXX");
        assert!((station.lat - (49.0 + 3.50 / 60.0)).abs() < 1e-9);
        assert!((station.lon - -(72.0 + 1.75 / 60.0)).abs() < 1e-9);
        assert_eq!(station.comment, "Test");
    }

    #[test]
    fn mic_e_round_trip_for_a_known_point() {
        // 40 00.00 N, 86 10.00 W. Destination flags: north, no +100, west.
        // West makes the last latitude digit 'P' (digit 0 with the flag set).
        let info = [
            b'`', 86 + 28, 10 + 28, 0 + 28, 28, 28, 28, b'>', b'/', b'G', b'P', b'S',
        ];
        let station = position_from_ax25(&ax25("40000P", "N0CALL-1", &info)).unwrap();
        assert_eq!(station.call, "N0CALL-1");
        assert!((station.lat - 40.0).abs() < 1e-9);
        assert!((station.lon - -(86.0 + 10.0 / 60.0)).abs() < 1e-9);
        assert_eq!(station.comment, "GPS");
    }

    #[test]
    fn hundred_mile_cutoff() {
        let center = (40.0, -86.0);
        let one_degree = (41.0, -86.0);
        let two_degrees = (42.0, -86.0);
        let near = haversine_miles(center, one_degree);
        let far = haversine_miles(center, two_degrees);
        assert!((68.0..=70.0).contains(&near), "{near}");
        assert!(far > 100.0, "{far}");
        let mut stations = HashMap::new();
        stations.insert(
            "NEAR".into(),
            Station {
                call: "NEAR".into(),
                lat: one_degree.0,
                lon: one_degree.1,
                comment: String::new(),
            },
        );
        stations.insert(
            "FAR".into(),
            Station {
                call: "FAR".into(),
                lat: two_degrees.0,
                lon: two_degrees.1,
                comment: String::new(),
            },
        );
        let rows = stations_in_range(center, &stations, 100.0);
        assert_eq!(rows.len(), 1);
        assert_eq!(rows[0].0.call, "NEAR");
    }

    #[test]
    fn blank_fixed_coordinates_are_not_a_center() {
        let aprs = serde_json::json!({
            "cbB_SiteType": 0,
            "nUD_LatitudeDegree": 0,
            "nUD_LongitudeDegree": 0
        });
        assert!(map_center(&aprs, &HashMap::new()).is_none());
    }

    #[test]
    fn stored_fixed_coordinates_center_the_map() {
        let aprs = serde_json::json!({
            "cbB_SiteType": 0,
            "nUD_LatitudeDegree": 39,
            "nUD_LatitudeMinute": 46,
            "nUD_LatitudeSecond": 0,
            "cbB_NorthSouthLatitude": 0,
            "nUD_LongitudeDegree": 86,
            "nUD_LongitudeMinute": 9,
            "nUD_LongitudeSecond": 0,
            "cbB_EastWestLongitude": 0
        });
        let center = map_center(&aprs, &HashMap::new()).unwrap();
        assert!((center.0 - (39.0 + 46.0 / 60.0)).abs() < 1e-9);
        assert!((center.1 - -(86.0 + 9.0 / 60.0)).abs() < 1e-9);
    }

    #[test]
    fn beacon_frame_round_trips_the_stored_position() {
        let aprs = serde_json::json!({
            "cbB_SiteType": 0,
            "tB_CallSign": "n0call",
            "cbB_SSID": 1,
            "cbB_RadioSymbol": 2,
            "cbB_RoutingSelect": 1,
            "tB_CustomMessages": "CPS",
            "nUD_LatitudeDegree": 39,
            "nUD_LatitudeMinute": 46,
            "nUD_LatitudeSecond": 0,
            "cbB_NorthSouthLatitude": 0,
            "nUD_LongitudeDegree": 86,
            "nUD_LongitudeMinute": 9,
            "nUD_LongitudeSecond": 0,
            "cbB_EastWestLongitude": 0
        });
        let wrapped = beacon_kiss(&aprs, &HashMap::new()).unwrap();
        assert_eq!(*wrapped.first().unwrap(), FEND);
        assert_eq!(wrapped[1], 0x00);
        assert_eq!(*wrapped.last().unwrap(), FEND);
        let mut buf = Vec::new();
        let frames = push_kiss(&mut buf, &wrapped);
        let station = position_from_ax25(&frames[0]).unwrap();
        assert_eq!(station.call, "N0CALL-1");
        assert!((station.lat - (39.0 + 46.0 / 60.0)).abs() < 1e-6);
        assert!((station.lon - -(86.0 + 9.0 / 60.0)).abs() < 1e-6);
        assert_eq!(station.comment, "CPS");
        assert!(frames[0].windows(6).any(|w| w == &{
            let mut wide = [b' ' << 1; 6];
            for (i, byte) in b"WIDE1".iter().enumerate() {
                wide[i] = byte << 1;
            }
            wide
        }));
    }
}
