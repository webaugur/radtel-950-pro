//! `.950pro` document codec.
//!
//! The window edits the OEM JSON names (`channelData`, `funConfigData`, …).
//! This module turns that document into the plaintext image the radio stores,
//! and back. Payload encryption stays in `crypt`. The serial transfer stays
//! in `image`. Nothing here opens a port.
//!
//! Layout is taken from `KDH.RWDataOperation` in BT-RT950PRO CPS 1.3.3.
//! A channel whose RX frequency bytes are all `0x00` or all `0xFF` is the
//! OEM default channel. The editor spells that blank frequency `000.00000`.

use serde_json::{json, Map, Value};

use crate::dcs::DCS_TABLE;
use crate::error::ProtocolError;
use crate::image::IMAGE_SIZE;

const CHANNELS: usize = 990;
const CHANNEL_BYTES: usize = 32;
const CHANNEL_AREA: usize = CHANNELS * CHANNEL_BYTES;
const ZONES: usize = 16;
const MOD_CHANNELS: usize = 16;
const DTMF_GROUPS: usize = 22;
const DTMF_ID_LEN: usize = 5;
const DTMF_CODE_LEN: usize = 6;
const NAME_LEN: usize = 12;
const DTMF_ALPHABET: &[u8] = b"0123456789ABCD*#";

const VFO_BASE: usize = 0x8000;
const FUN_BASE: usize = 0x9000;
const DTMF_BASE: usize = 0xA000;
const MOD_BASE: usize = 0xB000;
const ZONE_BASE: usize = 0xC000;
const MOD_NAME_BASE: usize = 0xD000;

/// Decode a plaintext image plus the 128-byte APRS block into a `.950pro` document.
pub fn decode_codeplug(image: &[u8], aprs: &[u8]) -> Result<Value, ProtocolError> {
    if image.len() < IMAGE_SIZE {
        return Err(ProtocolError::Message(format!(
            "codeplug image is {} bytes, wanted {IMAGE_SIZE}",
            image.len()
        )));
    }
    if aprs.len() < 128 {
        return Err(ProtocolError::Message(format!(
            "APRS block is {} bytes, wanted 128",
            aprs.len()
        )));
    }
    let mut channels = Vec::with_capacity(CHANNELS);
    for index in 0..CHANNELS {
        let rec = &image[index * CHANNEL_BYTES..(index + 1) * CHANNEL_BYTES];
        channels.push(decode_channel(rec));
    }
    let mut zones = Vec::new();
    for index in 0..ZONES {
        let name = gbk_name(&image[ZONE_BASE + index * 16..], NAME_LEN);
        if name.is_empty() && index >= 10 {
            break;
        }
        zones.push(Value::String(name));
    }
    while zones.len() > 10 && zones.last().and_then(|v| v.as_str()) == Some("") {
        zones.pop();
    }
    Ok(json!({
        "channelData": {
            "channelList": channels,
            "arrayZoneName": zones,
        },
        "freqModeData": {
            "vfoA": decode_vfo(&image[VFO_BASE..VFO_BASE + 32]),
            "vfoB": decode_vfo(&image[VFO_BASE + 32..VFO_BASE + 64]),
            "vfoC": decode_vfo(&image[VFO_BASE + 64..VFO_BASE + 96]),
        },
        "funConfigData": decode_fun(&image[FUN_BASE..FUN_BASE + 128]),
        "dtmfData": decode_dtmf(&image[DTMF_BASE..DTMF_BASE + 384]),
        "modulationData": decode_modulation(
            &image[MOD_BASE..MOD_BASE + 256],
            &image[MOD_NAME_BASE..MOD_NAME_BASE + 768],
        ),
        "aprsData": decode_aprs(aprs),
    }))
}

/// Encode a `.950pro` document. The image is 54016 bytes. APRS is 128 bytes.
pub fn encode_codeplug(doc: &Value) -> Result<(Vec<u8>, Vec<u8>), ProtocolError> {
    let mut image = vec![0xFFu8; IMAGE_SIZE];
    let list = doc
        .pointer("/channelData/channelList")
        .and_then(|v| v.as_array())
        .ok_or_else(|| ProtocolError::Message("codeplug has no channelData.channelList".into()))?;
    for (index, channel) in list.iter().take(CHANNELS).enumerate() {
        let rec = encode_channel(channel)?;
        let at = index * CHANNEL_BYTES;
        image[at..at + CHANNEL_BYTES].copy_from_slice(&rec);
    }
    if let Some(zones) = doc
        .pointer("/channelData/arrayZoneName")
        .and_then(|v| v.as_array())
    {
        for (index, name) in zones.iter().take(ZONES).enumerate() {
            put_gbk(
                &mut image[ZONE_BASE + index * 16..],
                text_of(name),
                NAME_LEN,
            )?;
        }
    }
    for (index, key) in ["vfoA", "vfoB", "vfoC"].iter().enumerate() {
        if let Some(vfo) = doc.pointer(&format!("/freqModeData/{key}")) {
            let rec = encode_vfo(vfo)?;
            let at = VFO_BASE + index * 32;
            image[at..at + 32].copy_from_slice(&rec);
        }
    }
    if let Some(fun) = doc.get("funConfigData") {
        image[FUN_BASE..FUN_BASE + 128].copy_from_slice(&encode_fun(fun));
    }
    if let Some(dtmf) = doc.get("dtmfData") {
        let bytes = encode_dtmf(dtmf)?;
        image[DTMF_BASE..DTMF_BASE + bytes.len()].copy_from_slice(&bytes);
    }
    if let Some(modulation) = doc.get("modulationData") {
        let (info, names) = encode_modulation(modulation)?;
        image[MOD_BASE..MOD_BASE + info.len()].copy_from_slice(&info);
        image[MOD_NAME_BASE..MOD_NAME_BASE + names.len()].copy_from_slice(&names);
    }
    let aprs = encode_aprs(doc.get("aprsData").unwrap_or(&Value::Null))?;
    debug_assert_eq!(CHANNEL_AREA, 31_680);
    Ok((image, aprs))
}

fn decode_channel(rec: &[u8]) -> Value {
    if rec[..4].iter().all(|b| *b == 0x00) || rec[..4].iter().all(|b| *b == 0xFF) {
        return blank_channel();
    }
    let flags = rec[0x0F];
    json!({
        "rxFreq": freq_text(&rec[0..4]),
        "txFreq": freq_text(&rec[4..8]),
        "rxQT": qt_text(&rec[8..10]),
        "txQT": qt_text(&rec[10..12]),
        "signallingGroup": (rec[0x0C] & 0x0F) % 15,
        "pttId": (rec[0x0D] & 0x0F) % 4,
        "txPower": (rec[0x0E] & 0x0F) % 3,
        "scram": ((rec[0x0E] & 0xF0) >> 4) % 9,
        "learnCDCSS": ((flags & 0x80) >> 7) % 2,
        "bandWide": ((flags & 0x40) >> 6) % 2,
        "encrypt": ((flags & 0x30) >> 4) % 4,
        "busyLockout": ((flags & 0x08) >> 3) % 2,
        "scanAdd": ((flags & 0x04) >> 2) % 2,
        "rxModulation": (flags & 0x03) % 2,
        "CDCSSCode": CDCSS_text(&rec[0x10..0x14]),
        "chName": gbk_name(&rec[0x14..], NAME_LEN),
    })
}

fn blank_channel() -> Value {
    json!({
        "rxFreq": "000.00000",
        "txFreq": "000.00000",
        "rxQT": "OFF",
        "txQT": "OFF",
        "signallingGroup": 0,
        "pttId": 0,
        "txPower": 0,
        "scram": 0,
        "learnCDCSS": 0,
        "bandWide": 0,
        "encrypt": 0,
        "busyLockout": 0,
        "scanAdd": 1,
        "rxModulation": 0,
        "CDCSSCode": "",
        "chName": "",
    })
}

fn encode_channel(channel: &Value) -> Result<[u8; 32], ProtocolError> {
    let mut rec = [0xFFu8; 32];
    let rx = text(channel, "rxFreq");
    if rx.is_empty() {
        return Ok(rec);
    }
    rec[..4].copy_from_slice(&freq_bytes(&rx)?);
    rec[4..8].copy_from_slice(&freq_bytes(&text(channel, "txFreq"))?);
    let rx_qt = qt_bytes(&text(channel, "rxQT"))?;
    let tx_qt = qt_bytes(&text(channel, "txQT"))?;
    rec[8] = rx_qt[0];
    rec[9] = rx_qt[1];
    rec[10] = tx_qt[0];
    rec[11] = tx_qt[1];
    rec[0x0C] = num(channel, "signallingGroup") as u8;
    rec[0x0D] = num(channel, "pttId") as u8;
    rec[0x0E] = ((num(channel, "scram") as u8) << 4) | (num(channel, "txPower") as u8);
    rec[0x0F] = ((num(channel, "learnCDCSS") as u8) << 7)
        | ((num(channel, "bandWide") as u8) << 6)
        | ((num(channel, "encrypt") as u8) << 4)
        | ((num(channel, "busyLockout") as u8) << 3)
        | ((num(channel, "scanAdd") as u8) << 2)
        | (num(channel, "rxModulation") as u8);
    encode_CDCSS(&mut rec[0x10..0x14], &text(channel, "CDCSSCode"))?;
    put_gbk(&mut rec[0x14..], &text(channel, "chName"), NAME_LEN)?;
    Ok(rec)
}

fn freq_text(bytes: &[u8]) -> String {
    if bytes.iter().all(|b| *b == 0x00) || bytes.iter().all(|b| *b == 0xFF) {
        return "000.00000".into();
    }
    let mut acc: i64 = 0;
    for index in (0..4).rev() {
        let byte = bytes[index];
        let pair = i64::from((byte >> 4) & 0x0F) * 10 + i64::from(byte & 0x0F);
        acc = acc * 100 + pair;
    }
    format_decimals(acc, 5)
}

fn freq_bytes(text: &str) -> Result<[u8; 4], ProtocolError> {
    let mut out = [0xFFu8; 4];
    if text.is_empty() {
        return Ok(out);
    }
    let rounded = round_decimals(text, 5).map_err(|e| {
        ProtocolError::Message(format!("frequency {text:?} is not a number: {e}"))
    })?;
    let digits: String = rounded.chars().filter(|c| *c != '.').collect();
    let mut value: i64 = digits.parse().map_err(|_| {
        ProtocolError::Message(format!("frequency {text:?} is not a number"))
    })?;
    for slot in &mut out {
        let pair = value % 100;
        value /= 100;
        *slot = (((pair / 10) as u8) << 4) | ((pair % 10) as u8);
    }
    if value != 0 {
        return Err(ProtocolError::Message(format!(
            "frequency {text:?} does not fit in four bytes"
        )));
    }
    Ok(out)
}

fn qt_text(bytes: &[u8]) -> String {
    // The type bit is the second byte. Zero selects DCS. Anything else is CTCSS.
    if bytes[1] == 0 {
        if bytes[0] == 0 || usize::from(bytes[0]) > DCS_TABLE.len() {
            return "OFF".into();
        }
        return DCS_TABLE[usize::from(bytes[0]) - 1].to_string();
    }
    if bytes[0] == 0 || bytes[0] == 0xFF {
        return "OFF".into();
    }
    let value = (u32::from(bytes[1]) << 8) | u32::from(bytes[0]);
    let raw = value.to_string();
    let at = raw.len() - 1;
    let mut out = raw;
    out.insert(at, '.');
    out
}

fn qt_bytes(text: &str) -> Result<[u8; 2], ProtocolError> {
    if text.is_empty() || text.eq_ignore_ascii_case("OFF") {
        return Ok([0, 0]);
    }
    if text.as_bytes().first() == Some(&b'D') {
        let index = DCS_TABLE.iter().position(|code| *code == text);
        let stored = index.map(|i| i + 1).unwrap_or(210);
        return Ok([stored as u8, 0]);
    }
    let dot = text.find('.').ok_or_else(|| {
        ProtocolError::Message(format!("tone {text:?} is not CTCSS or DCS"))
    })?;
    if dot + 1 >= text.len() {
        return Err(ProtocolError::Message(format!(
            "tone {text:?} is not CTCSS or DCS"
        )));
    }
    let mut digits = text.to_string();
    digits.remove(dot);
    let value: u32 = digits.parse().map_err(|_| {
        ProtocolError::Message(format!("tone {text:?} is not CTCSS or DCS"))
    })?;
    Ok([(value & 0xFF) as u8, ((value >> 8) & 0xFF) as u8])
}

fn CDCSS_text(bytes: &[u8]) -> String {
    if bytes[3] != 0xA0 {
        return String::new();
    }
    const HEX: &[u8] = b"0123456789ABCDEF";
    let nibbles = [
        (bytes[2] & 0xF0) >> 4,
        bytes[2] & 0x0F,
        (bytes[1] & 0xF0) >> 4,
        bytes[1] & 0x0F,
        (bytes[0] & 0xF0) >> 4,
        bytes[0] & 0x0F,
    ];
    nibbles
        .into_iter()
        .map(|n| char::from(HEX[n as usize]))
        .collect()
}

fn encode_CDCSS(slot: &mut [u8], text: &str) -> Result<(), ProtocolError> {
    slot.fill(0xFF);
    if text.is_empty() {
        return Ok(());
    }
    if text.len() != 6 || !text.chars().all(|c| c.is_ascii_hexdigit()) {
        return Err(ProtocolError::Message(format!(
            "CDCSS code {text:?} is not 6 hex digits"
        )));
    }
    let nib = |index: usize| -> u8 {
        u8::from_str_radix(&text[index..index + 1], 16).unwrap_or(0)
    };
    slot[0] = (nib(4) << 4) | nib(5);
    slot[1] = (nib(2) << 4) | nib(3);
    slot[2] = (nib(0) << 4) | nib(1);
    slot[3] = 0xA0;
    Ok(())
}

fn decode_vfo(rec: &[u8]) -> Value {
    let other = rec[0x11];
    json!({
        "tB_RxFreq": vfo_freq_text(&rec[0..8]),
        "cbB_RxQT": qt_text(&rec[8..10]),
        "cbB_TxQT": qt_text(&rec[10..12]),
        "cbB_FrVFOByte12": 0,
        "cbB_BusyLockout": (rec[0x0D] & 0x0F) % 2,
        "cbB_OffsetDir": ((rec[0x0E] & 0x30) >> 4) % 3,
        "cbB_SignallingGroup": (rec[0x0E] & 0x0F) % 15,
        "cbB_FrVFOByte15": 0,
        "cbB_TxPower": (rec[0x10] & 0x0F) % 3,
        "cbB_Scram": ((rec[0x10] & 0xF0) >> 4) % 9,
        // The OEM getter masks bit 7 and then takes it modulo 1, so the field is always 0.
        "cbB_LearnCDCSS": 0,
        "cbB_BandWide": ((other & 0x40) >> 6) % 2,
        "cbB_Encrypt": ((other & 0x30) >> 4) % 4,
        "cbB_RxModulation": (other & 0x03) % 2,
        "cbB_FreqBand": (rec[0x12] & 0x0F) % 2,
        "cbB_StepFreq": (rec[0x13] & 0x0F) % 10,
        "tB_OffsetFreq": vfo_offset_text(&rec[0x14..0x1B]),
        "cbB_FrVFOByte27to31": 0,
    })
}

fn encode_vfo(vfo: &Value) -> Result<[u8; 32], ProtocolError> {
    let mut rec = [0xFFu8; 32];
    let freq = text(vfo, "tB_RxFreq");
    if !freq.is_empty() {
        rec[..8].copy_from_slice(&digit_bytes(&freq, 5, 8)?);
    }
    let rx_qt = qt_bytes(&text(vfo, "cbB_RxQT"))?;
    let tx_qt = qt_bytes(&text(vfo, "cbB_TxQT"))?;
    rec[8] = rx_qt[0];
    rec[9] = rx_qt[1];
    rec[10] = tx_qt[0];
    rec[11] = tx_qt[1];
    rec[0x0D] = num(vfo, "cbB_BusyLockout") as u8;
    rec[0x0E] = ((num(vfo, "cbB_OffsetDir") as u8) << 4) | (num(vfo, "cbB_SignallingGroup") as u8);
    rec[0x10] = ((num(vfo, "cbB_Scram") as u8) << 4) | (num(vfo, "cbB_TxPower") as u8);
    rec[0x11] = ((num(vfo, "cbB_LearnCDCSS") as u8) << 7)
        | ((num(vfo, "cbB_BandWide") as u8) << 6)
        | ((num(vfo, "cbB_Encrypt") as u8) << 4)
        | (num(vfo, "cbB_RxModulation") as u8);
    rec[0x12] = num(vfo, "cbB_FreqBand") as u8;
    rec[0x13] = num(vfo, "cbB_StepFreq") as u8;
    let offset = text(vfo, "tB_OffsetFreq");
    if !offset.is_empty() {
        let digits = digit_bytes(&offset, 4, 7)?;
        rec[0x14..0x1B].copy_from_slice(&digits);
    }
    Ok(rec)
}

fn vfo_freq_text(bytes: &[u8]) -> String {
    if bytes.iter().all(|b| *b == 0x00) || bytes.iter().all(|b| *b == 0xFF) {
        return "400.12500".into();
    }
    let joined = digit_join(bytes);
    let Ok(value) = joined.parse::<i64>() else {
        return "400.12500".into();
    };
    format_decimals(value, 5)
}

fn vfo_offset_text(bytes: &[u8]) -> String {
    let joined = digit_join(bytes);
    if joined.len() < 4 {
        return "000.0000".into();
    }
    let at = joined.len() - 4;
    let mut out = joined;
    out.insert(at, '.');
    out
}

fn digit_join(bytes: &[u8]) -> String {
    bytes.iter().map(|b| b.to_string()).collect()
}

fn digit_bytes(text: &str, places: u32, width: usize) -> Result<Vec<u8>, ProtocolError> {
    let rounded = round_decimals(text, places).map_err(|e| {
        ProtocolError::Message(format!("frequency {text:?} is not a number: {e}"))
    })?;
    let mut digits: String = rounded.chars().filter(|c| *c != '.').collect();
    if digits.len() > width {
        return Err(ProtocolError::Message(format!(
            "frequency {text:?} does not fit in {width} digits"
        )));
    }
    while digits.len() < width {
        digits.insert(0, '0');
    }
    Ok(digits
        .bytes()
        .map(|b| b.saturating_sub(b'0'))
        .collect())
}

fn decode_fun(block: &[u8]) -> Value {
    let p1 = &block[0..32];
    let p2 = &block[32..64];
    let p3 = &block[64..96];
    let modes = p1[0x1A];
    let mut map = Map::new();
    let put = |map: &mut Map<String, Value>, key: &str, value: i64| {
        map.insert(key.into(), json!(value));
    };
    put(&mut map, "cbB_SQL", masked(p1[0], 0x0F, 10));
    put(&mut map, "cbB_SaveMode", masked(p1[1], 0x0F, 4));
    put(&mut map, "cbB_VOX", masked(p1[2], 0x0F, 9));
    put(&mut map, "cbB_AutoBacklight", masked(p1[3], 0x0F, 9));
    put(&mut map, "cbB_TDR", masked(p1[4], 0x0F, 2));
    put(&mut map, "cbB_TOT", masked(p1[5], 0x0F, 9));
    put(&mut map, "cbB_BeepPrompt", masked(p1[6], 0x0F, 2));
    put(&mut map, "cbB_VoicePrompt", masked(p1[7], 0x0F, 2));
    put(&mut map, "cbB_Language", masked(p1[8], 0x0F, 2));
    put(&mut map, "cbB_DTMF", masked(p1[9], 0x0F, 4));
    put(&mut map, "cbB_Scan", masked(p1[10], 0x0F, 3));
    put(&mut map, "cbB_PTTID", masked(p1[11], 0x0F, 4));
    put(&mut map, "cbB_SendIDDelay", masked(p1[12], 0x0F, 7));
    put(&mut map, "cbB_DisplayModeA", masked(p1[13], 0x0F, 3));
    put(&mut map, "cbB_DisplayModeB", masked(p1[14], 0x0F, 3));
    put(&mut map, "cbB_DisplayModeC", masked(p1[15], 0x0F, 3));
    put(&mut map, "cbB_AutoKeyLock", masked(p1[16], 0x0F, 4));
    put(&mut map, "cbB_AlarmMode", masked(p1[17], 0x0F, 3));
    put(&mut map, "cbB_AlarmSound", masked(p1[18], 0x0F, 2));
    put(&mut map, "cbB_FrOneByte19", 0);
    put(&mut map, "cbB_TailNoiseClear", masked(p1[20], 0x0F, 2));
    put(&mut map, "cbB_PassRepetNoiseClear", masked(p1[21], 0x0F, 11));
    put(&mut map, "cbB_PassRepetNoiseDetect", masked(p1[22], 0x0F, 11));
    put(&mut map, "cbB_SoundTxEnd", masked(p1[23], 0x0F, 3));
    put(&mut map, "cbB_CurWorkMode", masked(p1[24], 0x0F, 3));
    put(&mut map, "cbB_FMRadio", masked(p1[25], 0x0F, 2));
    put(&mut map, "cbB_WorkModeA", i64::from(modes & 0x03) % 2);
    put(&mut map, "cbB_WorkModeB", i64::from((modes & 0x0C) >> 2) % 2);
    put(&mut map, "cbB_WorkModeC", i64::from((modes & 0x30) >> 4) % 2);
    put(&mut map, "cbB_LockKeyBoard", masked(p1[27], 0x0F, 2));
    put(&mut map, "cbB_PowerMsg", masked(p1[28], 0x0F, 2));
    put(&mut map, "cbB_BTWriteSwitch", masked(p1[29], 0x0F, 2));
    put(&mut map, "cbB_RTone", masked(p1[30], 0x0F, 4));
    put(&mut map, "cbB_FrOneByte31", 0);
    put(&mut map, "cbB_VoxDelay", masked(p2[0], 0x0F, 16));
    put(&mut map, "cbB_MenuExitTime", masked(p2[1], 0x0F, 11));
    put(&mut map, "cbB_FrTwoByte2to3", 0);
    put(&mut map, "cbB_PowerOnDelayTime", masked(p2[4], 0x0F, 15));
    put(&mut map, "cbB_WeatherCH", masked(p2[5], 0x0F, 10));
    put(&mut map, "cbB_DivideCH", masked(p2[6], 0x0F, 2));
    put(&mut map, "cbB_SubaudioScanSave", masked(p2[7], 0x0F, 3));
    put(&mut map, "cbB_VOXSwitch", masked(p2[8], 0x0F, 2));
    put(&mut map, "cbB_KeySide1", masked(p2[9], 0x0F, 8));
    put(&mut map, "cbB_KeySide1L", masked(p2[10], 0x0F, 8));
    put(&mut map, "cbB_KeySide2", masked(p2[11], 0x0F, 7));
    put(&mut map, "cbB_KeySide2L", masked(p2[12], 0x0F, 7));
    put(&mut map, "cbB_CurWorkZoneA", masked(p2[13], 0x0F, 15));
    put(&mut map, "cbB_CurWorkZoneB", masked(p2[14], 0x0F, 15));
    put(&mut map, "cbB_CurWorkZoneC", masked(p2[15], 0x0F, 15));
    put(&mut map, "cbB_FrTwoByte16to24", 0);
    put(&mut map, "cbB_ABUVTransfer", masked(p2[25], 0x0F, 2));
    put(&mut map, "cbB_SoundTransfer", masked(p2[26], 0x0F, 2));
    put(&mut map, "cbB_Key0L", masked(p2[27], 0x1F, 23));
    put(&mut map, "cbB_Key1L", masked(p2[28], 0x1F, 23));
    put(&mut map, "cbB_Key2L", masked(p2[29], 0x1F, 23));
    put(&mut map, "cbB_Key3L", masked(p2[30], 0x1F, 23));
    put(&mut map, "cbB_Key4L", masked(p2[31], 0x1F, 23));
    put(&mut map, "cbB_Key5L", masked(p3[0], 0x1F, 23));
    put(&mut map, "cbB_Key6L", masked(p3[1], 0x1F, 23));
    put(&mut map, "cbB_Key7L", masked(p3[2], 0x1F, 23));
    put(&mut map, "cbB_Key8L", masked(p3[3], 0x1F, 23));
    put(&mut map, "cbB_Key9L", masked(p3[4], 0x1F, 23));
    put(&mut map, "cbB_RadioRxInterruption", masked(p3[5], 0x0F, 2));
    put(&mut map, "cbB_BreathingLight", masked(p3[6], 0x0F, 2));
    put(&mut map, "cbB_NoaaAlarm", masked(p3[7], 0x0F, 2));
    put(&mut map, "cbB_RadioBacklight", masked(p3[8], 0x0F, 2));
    put(
        &mut map,
        "nUD_VfoScanRangeLow",
        clamp_scan((u16::from(p3[10]) << 8) | u16::from(p3[9])),
    );
    put(
        &mut map,
        "nUD_VfoScanRangeHigh",
        clamp_scan((u16::from(p3[12]) << 8) | u16::from(p3[11])),
    );
    put(&mut map, "cbB_FrThreeByte13to15", 0);
    put(&mut map, "cbB_FrThreeByte16to31", 0);
    Value::Object(map)
}

fn encode_fun(fun: &Value) -> [u8; 128] {
    let mut block = [0xFFu8; 128];
    let set = |block: &mut [u8], at: usize, key: &str| {
        block[at] = num(fun, key) as u8;
    };
    set(&mut block, 0, "cbB_SQL");
    set(&mut block, 1, "cbB_SaveMode");
    set(&mut block, 2, "cbB_VOX");
    set(&mut block, 3, "cbB_AutoBacklight");
    set(&mut block, 4, "cbB_TDR");
    set(&mut block, 5, "cbB_TOT");
    set(&mut block, 6, "cbB_BeepPrompt");
    set(&mut block, 7, "cbB_VoicePrompt");
    set(&mut block, 8, "cbB_Language");
    set(&mut block, 9, "cbB_DTMF");
    set(&mut block, 10, "cbB_Scan");
    set(&mut block, 11, "cbB_PTTID");
    set(&mut block, 12, "cbB_SendIDDelay");
    set(&mut block, 13, "cbB_DisplayModeA");
    set(&mut block, 14, "cbB_DisplayModeB");
    set(&mut block, 15, "cbB_DisplayModeC");
    set(&mut block, 16, "cbB_AutoKeyLock");
    set(&mut block, 17, "cbB_AlarmMode");
    set(&mut block, 18, "cbB_AlarmSound");
    set(&mut block, 20, "cbB_TailNoiseClear");
    set(&mut block, 21, "cbB_PassRepetNoiseClear");
    set(&mut block, 22, "cbB_PassRepetNoiseDetect");
    set(&mut block, 23, "cbB_SoundTxEnd");
    set(&mut block, 24, "cbB_CurWorkMode");
    set(&mut block, 25, "cbB_FMRadio");
    block[0x1A] = ((num(fun, "cbB_WorkModeC") as u8) << 4)
        | ((num(fun, "cbB_WorkModeB") as u8) << 2)
        | (num(fun, "cbB_WorkModeA") as u8);
    set(&mut block, 27, "cbB_LockKeyBoard");
    set(&mut block, 28, "cbB_PowerMsg");
    set(&mut block, 29, "cbB_BTWriteSwitch");
    set(&mut block, 30, "cbB_RTone");
    set(&mut block, 32, "cbB_VoxDelay");
    set(&mut block, 33, "cbB_MenuExitTime");
    set(&mut block, 36, "cbB_PowerOnDelayTime");
    set(&mut block, 37, "cbB_WeatherCH");
    set(&mut block, 38, "cbB_DivideCH");
    set(&mut block, 39, "cbB_SubaudioScanSave");
    set(&mut block, 40, "cbB_VOXSwitch");
    set(&mut block, 41, "cbB_KeySide1");
    set(&mut block, 42, "cbB_KeySide1L");
    set(&mut block, 43, "cbB_KeySide2");
    set(&mut block, 44, "cbB_KeySide2L");
    set(&mut block, 45, "cbB_CurWorkZoneA");
    set(&mut block, 46, "cbB_CurWorkZoneB");
    set(&mut block, 47, "cbB_CurWorkZoneC");
    set(&mut block, 57, "cbB_ABUVTransfer");
    set(&mut block, 58, "cbB_SoundTransfer");
    set(&mut block, 59, "cbB_Key0L");
    set(&mut block, 60, "cbB_Key1L");
    set(&mut block, 61, "cbB_Key2L");
    set(&mut block, 62, "cbB_Key3L");
    set(&mut block, 63, "cbB_Key4L");
    set(&mut block, 64, "cbB_Key5L");
    set(&mut block, 65, "cbB_Key6L");
    set(&mut block, 66, "cbB_Key7L");
    set(&mut block, 67, "cbB_Key8L");
    set(&mut block, 68, "cbB_Key9L");
    set(&mut block, 69, "cbB_RadioRxInterruption");
    set(&mut block, 70, "cbB_BreathingLight");
    set(&mut block, 71, "cbB_NoaaAlarm");
    set(&mut block, 72, "cbB_RadioBacklight");
    let low = num(fun, "nUD_VfoScanRangeLow") as u16;
    let high = num(fun, "nUD_VfoScanRangeHigh") as u16;
    block[64 + 9] = low as u8;
    block[64 + 10] = (low >> 8) as u8;
    block[64 + 11] = high as u8;
    block[64 + 12] = (high >> 8) as u8;
    block
}

fn decode_dtmf(block: &[u8]) -> Value {
    let mut groups = Vec::with_capacity(DTMF_GROUPS);
    for index in 0..DTMF_GROUPS {
        groups.push(Value::String(dtmf_text(
            &block[0x20 + index * 16..],
            DTMF_CODE_LEN,
        )));
    }
    json!({
        "tB_DTMFCurId": dtmf_text(block, DTMF_ID_LEN),
        "cbB_FrByte5": 0,
        "cbB_PTTID": (block[6] & 0x0F) % 4,
        "cbB_LastTimeSend": (block[7] & 0x0F) % 5,
        "cbB_LastTimeStop": (block[8] & 0x0F) % 5,
        "cbB_FrByte9to15": 0,
        "cbB_FrByte16to23": 0,
        "cbB_FrByte24to31": 0,
        "dtmfCodeGroup": groups,
    })
}

fn encode_dtmf(dtmf: &Value) -> Result<Vec<u8>, ProtocolError> {
    let mut block = vec![0xFFu8; 32 + DTMF_GROUPS * 16];
    put_dtmf(&mut block, 0, &text(dtmf, "tB_DTMFCurId"), DTMF_ID_LEN)?;
    block[6] = num(dtmf, "cbB_PTTID") as u8;
    block[7] = num(dtmf, "cbB_LastTimeSend") as u8;
    block[8] = num(dtmf, "cbB_LastTimeStop") as u8;
    if let Some(groups) = dtmf.get("dtmfCodeGroup").and_then(|v| v.as_array()) {
        for (index, group) in groups.iter().take(DTMF_GROUPS).enumerate() {
            put_dtmf(
                &mut block[0x20 + index * 16..],
                0,
                text_of(group),
                DTMF_CODE_LEN,
            )?;
        }
    }
    Ok(block)
}

fn dtmf_text(bytes: &[u8], limit: usize) -> String {
    if bytes.first() == Some(&0xFF) {
        return String::new();
    }
    let mut out = String::new();
    for byte in bytes.iter().take(limit) {
        if *byte == 0xFF || usize::from(*byte) >= DTMF_ALPHABET.len() {
            break;
        }
        out.push(char::from(DTMF_ALPHABET[usize::from(*byte)]));
    }
    out
}

fn put_dtmf(buf: &mut [u8], at: usize, text: &str, limit: usize) -> Result<(), ProtocolError> {
    if text.chars().count() > limit {
        return Err(ProtocolError::Message(format!(
            "DTMF {text:?} is longer than {limit}"
        )));
    }
    for (index, ch) in text.chars().enumerate() {
        let Some(pos) = DTMF_ALPHABET.iter().position(|c| char::from(*c) == ch) else {
            return Err(ProtocolError::Message(format!(
                "DTMF {text:?} has a character outside 0-9 A-D * #"
            )));
        };
        buf[at + index] = pos as u8;
    }
    Ok(())
}

fn decode_modulation(info: &[u8], names: &[u8]) -> Value {
    let mut channels = Vec::with_capacity(MOD_CHANNELS);
    for index in 0..MOD_CHANNELS {
        let fm = mod_freq(info, index * 2);
        let am = mod_freq(info, 0x22 + index * 2);
        let ssb_at = 0x45 + index * 5;
        let beat = beat_offset(&info[ssb_at + 3..]);
        channels.push(json!({
            "fmFreq": if index == 0 && fm == 0 { 6400 } else { fm },
            "fmName": gbk_name(&names[index * 16..], NAME_LEN),
            "amFreq": if index == 0 && am == 0 { 153 } else { am },
            "amName": gbk_name(&names[256 + index * 16..], NAME_LEN),
            "ssbFreq": if index == 0 && mod_freq(info, ssb_at) == 0 { 150 } else { mod_freq(info, ssb_at) },
            "ssbBandwidth": i64::from(info[ssb_at + 2]) % 6,
            "ssbBeatFreqOffset": beat,
            "ssbName": gbk_name(&names[512 + index * 16..], NAME_LEN),
        }));
    }
    json!({
        "modulationChannels": channels,
        "cbB_FMCurChID": i64::from(info[0x20]) % 15,
        "cbB_AMCurChID": i64::from(info[0x42]) % 15,
        "cbB_AMStepFreq": i64::from(info[151]) % 4,
        "cbB_AMRxGain": i64::from(info[0x44]) % 37,
        "cbB_SSBCurChID": i64::from(info[149]) % 15,
        "cbB_SSBStepFreq": i64::from(info[150]) % 6,
        "cbB_SSBRxGain": i64::from(info[152]) % 37,
        "cbB_WorkMode": i64::from(info[0x21]) % 2,
        "cbB_ModulationMode": i64::from(info[0x43]) % 5,
    })
}

fn encode_modulation(modulation: &Value) -> Result<(Vec<u8>, Vec<u8>), ProtocolError> {
    let mut info = vec![0xFFu8; 256];
    let mut names = vec![0xFFu8; 768];
    let channels = modulation
        .get("modulationChannels")
        .and_then(|v| v.as_array());
    if let Some(channels) = channels {
        let mut fm0 = channels.first().map(|c| num(c, "fmFreq")).unwrap_or(0);
        let mut am0 = channels.first().map(|c| num(c, "amFreq")).unwrap_or(0);
        let mut ssb0 = channels.first().map(|c| num(c, "ssbFreq")).unwrap_or(0);
        if fm0 == 0 {
            fm0 = 6400;
        }
        if am0 == 0 {
            am0 = 153;
        }
        if ssb0 == 0 {
            ssb0 = 150;
        }
        for (index, channel) in channels.iter().take(MOD_CHANNELS).enumerate() {
            let fm = if index == 0 { fm0 } else { num(channel, "fmFreq") };
            let am = if index == 0 { am0 } else { num(channel, "amFreq") };
            let ssb = if index == 0 { ssb0 } else { num(channel, "ssbFreq") };
            put_le(&mut info[index * 2..], fm as u16);
            put_le(&mut info[0x22 + index * 2..], am as u16);
            let ssb_at = 0x45 + index * 5;
            put_le(&mut info[ssb_at..], ssb as u16);
            info[ssb_at + 2] = num(channel, "ssbBandwidth") as u8;
            put_le(&mut info[ssb_at + 3..], beat_store(num(channel, "ssbBeatFreqOffset")));
            put_gbk(&mut names[index * 16..], &text(channel, "fmName"), NAME_LEN)?;
            put_gbk(
                &mut names[256 + index * 16..],
                &text(channel, "amName"),
                NAME_LEN,
            )?;
            put_gbk(
                &mut names[512 + index * 16..],
                &text(channel, "ssbName"),
                NAME_LEN,
            )?;
        }
    }
    info[0x20] = num(modulation, "cbB_FMCurChID") as u8;
    info[0x21] = num(modulation, "cbB_WorkMode") as u8;
    info[0x42] = num(modulation, "cbB_AMCurChID") as u8;
    info[0x43] = num(modulation, "cbB_ModulationMode") as u8;
    info[0x44] = num(modulation, "cbB_AMRxGain") as u8;
    info[149] = num(modulation, "cbB_SSBCurChID") as u8;
    info[150] = num(modulation, "cbB_SSBStepFreq") as u8;
    info[151] = num(modulation, "cbB_AMStepFreq") as u8;
    info[152] = num(modulation, "cbB_SSBRxGain") as u8;
    Ok((info, names))
}

fn mod_freq(info: &[u8], offset: usize) -> i64 {
    let low = info[offset];
    let high = info[offset + 1];
    if (low == 0 && high == 0) || (low == 0xFF && high == 0xFF) {
        0
    } else {
        i64::from(u16::from(high) << 8 | u16::from(low))
    }
}

fn beat_offset(bytes: &[u8]) -> i64 {
    let value = i16::from_le_bytes([bytes[0], bytes[1]]) as i64;
    if value < -32760 || value > 27240 {
        0
    } else {
        value
    }
}

fn beat_store(value: i64) -> u16 {
    if value < -32760 || value > 27240 {
        0
    } else {
        value as i16 as u16
    }
}

fn put_le(buf: &mut [u8], value: u16) {
    buf[0] = value as u8;
    buf[1] = (value >> 8) as u8;
}

fn decode_aprs(block: &[u8]) -> Value {
    let altitude = clamp_i64(
        i16::from_be_bytes([block[0x10], block[0x0F]]) as i64,
        -10_000,
        10_000,
    );
    // Two objects: one `json!` with every APRS field overflows the macro recursion limit.
    let mut doc = json!({
        "cbB_AprsSwitch": masked(block[0], 0x0F, 2),
        "cbB_GpsSwitch": masked(block[1], 0x0F, 2),
        "cbB_LatitudeLongitudeUnit": masked(block[2], 0x0F, 3),
        "cbB_SpeedUnit": masked(block[3], 0x0F, 3),
        "cbB_DistanceUnit": masked(block[4], 0x0F, 3),
        "cbB_AltitudeUnit": masked(block[5], 0x0F, 2),
        "cbB_TimeZone": masked(block[6], 0x1F, 27),
        "cbB_NorthSouthLatitude": if block[7] == b'N' { 0 } else { 1 },
        "nUD_LatitudeMinute": clamp_i64(i64::from(block[8]), 0, 59),
        "nUD_LatitudeDegree": clamp_i64(i64::from(block[9]), 0, 90),
        "nUD_LatitudeSecond": clamp_i64(i64::from(block[10]), 0, 59),
        "cbB_EastWestLongitude": if block[11] == b'W' { 0 } else { 1 },
        "nUD_LongitudeMinute": clamp_i64(i64::from(block[12]), 0, 59),
        "nUD_LongitudeDegree": clamp_i64(i64::from(block[13]), 0, 180),
        "nUD_LongitudeSecond": clamp_i64(i64::from(block[14]), 0, 59),
        "nUD_Altitude": altitude,
        "tB_CallSign": ascii_field(&block[0x11..], 6),
        "cbB_SSID": masked(block[0x17], 0x0F, 16),
        "cbB_RoutingSelect": masked(block[0x18], 0x0F, 5),
        "cbB_SiteType": masked(block[0x19], 0x0F, 2),
    });
    let rest = json!({
        "cbB_RadioSymbol": masked(block[0x1A], 0x0F, 5),
        "cbB_UserDefinedIcon": masked(block[0x1B], 0x7F, 90),
        "cbB_AprsWorkingCH": masked(block[0x1C], 0x0F, 3),
        "cbB_AprsPriority": masked(block[0x1D], 0x0F, 2),
        "cbB_DataTxDelay": masked(block[0x1E], 0x0F, 9),
        "cbB_AprsCHMute": masked(block[0x1F], 0x0F, 2),
        "cbB_AprsDecodePromptTone": masked(block[0x20], 0x0F, 2),
        "cbB_AprsRxAutoPopUp": masked(block[0x21], 0x0F, 2),
        "cbB_BeaconTxType": masked(block[0x22], 0x0F, 2),
        "cbB_TimedBeaconTime": masked(block[0x24], 0x0F, 10),
        "cbB_MicEType": masked(block[0x26], 0x0F, 8),
        "cbB_TncDataType": masked(block[0x27], 0x0F, 2),
        "cbB_AprsForwardChannel": masked(block[0x28], 0x0F, 3),
        "cbB_AprsForwardRouting": masked(block[0x29], 0x0F, 5),
        "cbB_AprsWaitForward": masked(block[0x2A], 0x0F, 10),
        "tB_CustomRoutingOne": ascii_field(&block[0x2B..], 6),
        "cbB_CustomRoutingOneSSID": masked(block[0x31], 0x0F, 16),
        "tB_CustomRoutingTwo": ascii_field(&block[0x32..], 6),
        "cbB_CustomRoutingTwoSSID": masked(block[0x38], 0x0F, 16),
        "cbB_SendCustomMessages": masked(block[0x4E], 0x0F, 2),
        "tB_CustomMessages": gbk_name(&block[0x4F..], 0x28),
        "cbB_AprsTxDataReporting": masked(block[0x77], 0x0F, 2),
        "cbB_BeaconPopUpTime": masked(block[0x78], 0x0F, 6),
    });
    let dst = doc.as_object_mut().expect("APRS json is an object");
    let src = rest.as_object().expect("APRS json is an object");
    for (key, value) in src {
        dst.insert(key.clone(), value.clone());
    }
    doc
}

fn encode_aprs(aprs: &Value) -> Result<Vec<u8>, ProtocolError> {
    let mut block = vec![0xFFu8; 128];
    let byte = |block: &mut [u8], at: usize, key: &str| {
        block[at] = num(aprs, key) as u8;
    };
    byte(&mut block, 0, "cbB_AprsSwitch");
    byte(&mut block, 1, "cbB_GpsSwitch");
    byte(&mut block, 2, "cbB_LatitudeLongitudeUnit");
    byte(&mut block, 3, "cbB_SpeedUnit");
    byte(&mut block, 4, "cbB_DistanceUnit");
    byte(&mut block, 5, "cbB_AltitudeUnit");
    byte(&mut block, 6, "cbB_TimeZone");
    block[7] = if num(aprs, "cbB_NorthSouthLatitude") == 0 {
        b'N'
    } else {
        b'S'
    };
    block[8] = num(aprs, "nUD_LatitudeMinute") as u8;
    block[9] = num(aprs, "nUD_LatitudeDegree") as u8;
    block[10] = num(aprs, "nUD_LatitudeSecond") as u8;
    block[11] = if num(aprs, "cbB_EastWestLongitude") == 0 {
        b'W'
    } else {
        b'E'
    };
    block[12] = num(aprs, "nUD_LongitudeMinute") as u8;
    block[13] = num(aprs, "nUD_LongitudeDegree") as u8;
    block[14] = num(aprs, "nUD_LongitudeSecond") as u8;
    let altitude = num(aprs, "nUD_Altitude") as i16;
    block[15] = altitude as u8;
    block[16] = (altitude as u16 >> 8) as u8;
    put_ascii(&mut block[0x11..], &text(aprs, "tB_CallSign"), 6);
    byte(&mut block, 0x17, "cbB_SSID");
    byte(&mut block, 0x18, "cbB_RoutingSelect");
    byte(&mut block, 0x19, "cbB_SiteType");
    byte(&mut block, 0x1A, "cbB_RadioSymbol");
    byte(&mut block, 0x1B, "cbB_UserDefinedIcon");
    byte(&mut block, 0x1C, "cbB_AprsWorkingCH");
    byte(&mut block, 0x1D, "cbB_AprsPriority");
    byte(&mut block, 0x1E, "cbB_DataTxDelay");
    byte(&mut block, 0x1F, "cbB_AprsCHMute");
    byte(&mut block, 0x20, "cbB_AprsDecodePromptTone");
    byte(&mut block, 0x21, "cbB_AprsRxAutoPopUp");
    byte(&mut block, 0x22, "cbB_BeaconTxType");
    byte(&mut block, 0x24, "cbB_TimedBeaconTime");
    byte(&mut block, 0x26, "cbB_MicEType");
    byte(&mut block, 0x27, "cbB_TncDataType");
    byte(&mut block, 0x28, "cbB_AprsForwardChannel");
    byte(&mut block, 0x29, "cbB_AprsForwardRouting");
    byte(&mut block, 0x2A, "cbB_AprsWaitForward");
    put_ascii(&mut block[0x2B..], &text(aprs, "tB_CustomRoutingOne"), 6);
    byte(&mut block, 0x31, "cbB_CustomRoutingOneSSID");
    put_ascii(&mut block[0x32..], &text(aprs, "tB_CustomRoutingTwo"), 6);
    byte(&mut block, 0x38, "cbB_CustomRoutingTwoSSID");
    byte(&mut block, 0x4E, "cbB_SendCustomMessages");
    put_gbk(&mut block[0x4F..], &text(aprs, "tB_CustomMessages"), 0x28)?;
    byte(&mut block, 0x77, "cbB_AprsTxDataReporting");
    byte(&mut block, 0x78, "cbB_BeaconPopUpTime");
    Ok(block)
}

fn masked(byte: u8, mask: u8, rem: u8) -> i64 {
    i64::from((byte & mask) % rem)
}

fn clamp_scan(value: u16) -> i64 {
    clamp_i64(i64::from(value), 18, 999)
}

fn clamp_i64(value: i64, low: i64, high: i64) -> i64 {
    value.clamp(low, high)
}

fn format_decimals(value: i64, places: u32) -> String {
    let scale = 10i64.pow(places);
    let negative = value < 0;
    let value = value.abs();
    let whole = value / scale;
    let frac = value % scale;
    let text = format!("{whole}.{frac:0width$}", width = places as usize);
    if negative {
        format!("-{text}")
    } else {
        text
    }
}

fn round_decimals(text: &str, places: u32) -> Result<String, std::num::ParseFloatError> {
    let value: f64 = text.trim().parse()?;
    let scale = 10f64.powi(places as i32);
    let rounded = (value * scale).round() / scale;
    Ok(format!("{:.*}", places as usize, rounded))
}

fn gbk_name(bytes: &[u8], limit: usize) -> String {
    let mut len = 0;
    for byte in bytes.iter().take(limit) {
        if *byte == 0 || *byte == 0xFF {
            break;
        }
        len += 1;
    }
    let (text, _, _) = encoding_rs::GBK.decode(&bytes[..len]);
    text.replace('\u{0000}', "").trim().to_string()
}

fn put_gbk(buf: &mut [u8], text: &str, limit: usize) -> Result<(), ProtocolError> {
    if text.is_empty() {
        return Ok(());
    }
    let (encoded, _, unmappable) = encoding_rs::GBK.encode(text);
    if unmappable {
        return Err(ProtocolError::Message(format!(
            "name {text:?} does not fit GB2312"
        )));
    }
    let n = encoded.len().min(limit);
    buf[..n].copy_from_slice(&encoded[..n]);
    Ok(())
}

fn ascii_field(bytes: &[u8], limit: usize) -> String {
    let mut len = 0;
    for byte in bytes.iter().take(limit) {
        if *byte == 0xFF {
            break;
        }
        len += 1;
    }
    bytes[..len]
        .iter()
        .map(|b| {
            if b.is_ascii() && *b != 0 {
                char::from(*b)
            } else {
                '\u{0000}'
            }
        })
        .collect::<String>()
        .replace('\u{0000}', "")
        .trim()
        .to_string()
}

fn put_ascii(buf: &mut [u8], text: &str, limit: usize) {
    let bytes = text.as_bytes();
    let n = bytes.len().min(limit);
    buf[..n].copy_from_slice(&bytes[..n]);
}

fn text(value: &Value, key: &str) -> String {
    value
        .get(key)
        .map(text_of)
        .unwrap_or_default()
        .to_string()
}

fn text_of(value: &Value) -> &str {
    value.as_str().unwrap_or("")
}

fn num(value: &Value, key: &str) -> i64 {
    value.get(key).and_then(|v| v.as_i64()).unwrap_or(0)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn channel_frequency_bcd_matches_the_il() {
        assert_eq!(freq_text(&[0x00, 0x00, 0x52, 0x14]), "145.20000");
        assert_eq!(freq_bytes("26.96500").unwrap(), [0x00, 0x65, 0x69, 0x02]);
        assert_eq!(freq_bytes("145.21250").unwrap(), [0x50, 0x12, 0x52, 0x14]);
        assert_eq!(qt_text(&[0x55, 0x04]), "110.9");
        assert_eq!(qt_bytes("110.9").unwrap(), [0x55, 0x04]);
        assert_eq!(qt_bytes("D023N").unwrap(), [0x01, 0x00]);
        assert_eq!(qt_text(&[0x01, 0x00]), "D023N");
        assert_eq!(qt_bytes("OFF").unwrap(), [0, 0]);
    }

    #[test]
    fn florida_simplex_record_decodes_name_and_frequency() {
        let rec = hex("00005214000052140000000000000044ffffffff3134352e3230302053696d70");
        let channel = decode_channel(&rec);
        assert_eq!(channel["rxFreq"], "145.20000");
        assert_eq!(channel["txFreq"], "145.20000");
        assert_eq!(channel["chName"], "145.200 Simp");
        assert_eq!(channel["rxQT"], "OFF");
        assert_eq!(channel["bandWide"], 1);
        assert_eq!(channel["scanAdd"], 1);
        assert_eq!(channel["rxModulation"], 0);
        let again = encode_channel(&channel).unwrap();
        assert_eq!(again[..8], rec[..8]);
        assert_eq!(&again[0x14..0x14 + 12], &rec[0x14..0x14 + 12]);
    }

    #[test]
    fn blank_rx_frequency_becomes_the_default_channel() {
        let channel = decode_channel(&[0xFF; 32]);
        assert_eq!(channel["rxFreq"], "000.00000");
        assert_eq!(channel["chName"], "");
        assert_eq!(channel["scanAdd"], 1);
        assert_eq!(channel["rxModulation"], 0);
    }

    #[test]
    fn vfo_frequency_is_eight_decimal_digits() {
        let bytes = digit_bytes("400.12500", 5, 8).unwrap();
        assert_eq!(bytes, vec![4, 0, 0, 1, 2, 5, 0, 0]);
        assert_eq!(vfo_freq_text(&bytes), "400.12500");
        assert_eq!(vfo_freq_text(&[0xFF; 8]), "400.12500");
        let offset = digit_bytes("000.0000", 4, 7).unwrap();
        assert_eq!(vfo_offset_text(&offset), "000.0000");
    }

    #[test]
    fn indydhs_round_trip_keeps_channels_zones_and_aprs() {
        let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("../../../codeplugs/indydhs-2026-10-03.950pro");
        let text = std::fs::read_to_string(&path).unwrap_or_else(|e| panic!("{}: {e}", path.display()));
        let doc: Value = serde_json::from_str(&text).unwrap();
        let (image, aprs) = encode_codeplug(&doc).unwrap();
        assert_eq!(image.len(), IMAGE_SIZE);
        assert_eq!(aprs.len(), 128);
        assert_eq!(&image[0..4], &[0x00, 0x65, 0x69, 0x02]);
        assert_eq!(image[0x0F] & 0x03, 2);
        let back = decode_codeplug(&image, &aprs).unwrap();
        let original = doc["channelData"]["channelList"].as_array().unwrap();
        let decoded = back["channelData"]["channelList"].as_array().unwrap();
        assert_eq!(decoded.len(), CHANNELS);
        assert_eq!(decoded[0]["chName"], "CB 01");
        assert_eq!(decoded[0]["rxFreq"], "26.96500");
        assert_eq!(decoded[0]["rxModulation"], 0);
        for (index, (left, right)) in original.iter().zip(decoded.iter()).enumerate() {
            let freq = left["rxFreq"].as_str().unwrap_or("");
            let blank = !freq.chars().any(|c| c.is_ascii_digit() && c != '0');
            if blank {
                assert_eq!(right["chName"], "", "blank channel {index} kept a name");
                assert_eq!(right["rxFreq"], "000.00000");
                continue;
            }
            // The OEM name reader trims. A trailing space in the file does not survive the radio.
            assert_eq!(
                right["chName"].as_str().unwrap_or("").trim(),
                left["chName"].as_str().unwrap_or("").trim(),
                "channel {index} name"
            );
            assert_eq!(right["rxFreq"], left["rxFreq"], "channel {index} rx");
            assert_eq!(right["txFreq"], left["txFreq"], "channel {index} tx");
            assert_eq!(right["rxQT"], left["rxQT"], "channel {index} rx tone");
            assert_eq!(right["txQT"], left["txQT"], "channel {index} tx tone");
            assert_eq!(right["txPower"], left["txPower"]);
            assert_eq!(right["bandWide"], left["bandWide"]);
            assert_eq!(right["scanAdd"], left["scanAdd"]);
            assert_eq!(
                right["rxModulation"].as_i64().unwrap(),
                left["rxModulation"].as_i64().unwrap() & 1
            );
        }
        assert_eq!(back["channelData"]["arrayZoneName"][0], "CB MURS FRS");
        assert_eq!(back["freqModeData"]["vfoA"]["tB_RxFreq"], "400.12500");
        assert_eq!(back["freqModeData"]["vfoB"]["tB_RxFreq"], "435.12500");
        assert_eq!(back["aprsData"]["tB_CallSign"], "N0CALL");
        assert_eq!(back["aprsData"]["cbB_SSID"], 5);
        assert_eq!(back["aprsData"]["tB_CustomRoutingOne"], "IRISS");
        assert_eq!(back["dtmfData"]["tB_DTMFCurId"], "12345");
        assert_eq!(back["dtmfData"]["dtmfCodeGroup"][0], "101010");
        // The FM page labels index 0 "Now" and shows the array index. WNAP is slot 13.
        assert_eq!(back["modulationData"]["modulationChannels"][12]["fmName"], "WNTR");
        assert_eq!(back["modulationData"]["modulationChannels"][13]["fmName"], "WNAP");
        assert_eq!(back["modulationData"]["modulationChannels"][13]["fmFreq"], 8810);
        assert_eq!(back["modulationData"]["cbB_ModulationMode"], 2);
        assert_eq!(back["funConfigData"]["cbB_SQL"], 1);
        assert_eq!(back["funConfigData"]["cbB_KeySide2L"], 6);
        assert_eq!(back["funConfigData"]["nUD_VfoScanRangeLow"], 18);
        assert_eq!(back["funConfigData"]["cbB_WorkModeA"], 1);
        assert_eq!(back["funConfigData"]["cbB_WorkModeC"], 1);
    }

    fn hex(text: &str) -> Vec<u8> {
        (0..text.len())
            .step_by(2)
            .map(|i| u8::from_str_radix(&text[i..i + 2], 16).unwrap())
            .collect()
    }
}
