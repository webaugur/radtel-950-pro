//! Boot-picture upload, ported from `upload_boot_picture` in `radtel_cps.py`.
//!
//! OEM Import Image (usbmon-bootpic-20261003-050924): `PROGRAMBT9000U`, one
//! `D`, close and reopen the port, three setup frames, 150 pages of 1024-byte
//! RGB565, then `Over`. Each page is answered with a 9-byte status frame.
//! This module does not read the image back.

use std::path::Path;
use std::time::{Duration, Instant};

use serialport::{ClearBuffer, SerialPort};

use crate::error::ProtocolError;
use crate::serial::HANDSHAKE_ASCII;

pub const BOOT_WIDTH: usize = 240;
pub const BOOT_HEIGHT: usize = 320;
pub const BOOT_PAGES: usize = 150;
pub const BOOT_PAGE_BYTES: usize = 1024;
pub const BOOT_PIXELS: usize = BOOT_WIDTH * BOOT_HEIGHT * 2;

const ACK_TIMEOUT: Duration = Duration::from_secs(2);
const STATUS_TIMEOUT: Duration = Duration::from_secs(3);

/// CRC-16/XMODEM. The radio covers every byte after the leading 0xA5.
pub fn crc16_xmodem(data: &[u8]) -> u16 {
    let mut crc: u16 = 0;
    for &byte in data {
        crc ^= u16::from(byte) << 8;
        for _ in 0..8 {
            if crc & 0x8000 != 0 {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    crc
}

fn a5_frame(after_a5: &[u8]) -> Vec<u8> {
    let crc = crc16_xmodem(after_a5);
    let mut frame = Vec::with_capacity(1 + after_a5.len() + 2);
    frame.push(0xA5);
    frame.extend_from_slice(after_a5);
    frame.extend_from_slice(&crc.to_be_bytes());
    frame
}

/// Setup frames the CPS sent before page 0. The 0x4504 field and the
/// `00 00 09 00` / `00 03` payloads were constant in the capture.
fn boot_setup() -> [Vec<u8>; 3] {
    [
        a5_frame(b"\x02\x00\x00\x00\x07PROGRAM"),
        a5_frame(b"\x03\x00\x00\x00\x04\x00\x00\x09\x00"),
        a5_frame(&[
            0x04, 0x45, 0x04, 0x00, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x03,
        ]),
    ]
}

fn boot_over() -> Vec<u8> {
    a5_frame(b"\x06\x00\x00\x00\x04Over")
}

pub fn boot_page_frame(index: usize, payload: &[u8]) -> Result<Vec<u8>, ProtocolError> {
    if index >= BOOT_PAGES {
        return Err(ProtocolError::Message(format!(
            "boot page out of range: {index}"
        )));
    }
    if payload.len() != BOOT_PAGE_BYTES {
        return Err(ProtocolError::Message(format!(
            "boot page must be {BOOT_PAGE_BYTES} bytes, got {}",
            payload.len()
        )));
    }
    let mut after = Vec::with_capacity(5 + BOOT_PAGE_BYTES);
    after.push(0x57);
    after.extend_from_slice(&(index as u16).to_be_bytes());
    after.extend_from_slice(&(BOOT_PAGE_BYTES as u16).to_be_bytes());
    after.extend_from_slice(payload);
    Ok(a5_frame(&after))
}

fn bmp_error(msg: impl Into<String>) -> ProtocolError {
    ProtocolError::Message(msg.into())
}

/// 24-bit 240×320 BMP → little-endian RGB565, top row first.
///
/// A positive BMP height is stored bottom-up. The radio wants the top row first.
pub fn bmp_to_rgb565(data: &[u8]) -> Result<Vec<u8>, ProtocolError> {
    if data.len() < 54 || &data[..2] != b"BM" {
        return Err(bmp_error("not a BMP"));
    }
    let pixel_off = u32::from_le_bytes(data[10..14].try_into().unwrap()) as usize;
    let dib = u32::from_le_bytes(data[14..18].try_into().unwrap());
    if dib != 40 {
        return Err(bmp_error("boot picture needs a 40-byte BMP info header"));
    }
    let width = i32::from_le_bytes(data[18..22].try_into().unwrap());
    let height = i32::from_le_bytes(data[22..26].try_into().unwrap());
    let planes = u16::from_le_bytes(data[26..28].try_into().unwrap());
    let bpp = u16::from_le_bytes(data[28..30].try_into().unwrap());
    let compression = u32::from_le_bytes(data[30..34].try_into().unwrap());
    if width != BOOT_WIDTH as i32
        || height.unsigned_abs() != BOOT_HEIGHT as u32
        || planes != 1
        || bpp != 24
        || compression != 0
    {
        return Err(bmp_error(format!(
            "boot picture must be an uncompressed 24-bit {BOOT_WIDTH}x{BOOT_HEIGHT} BMP, got {width}x{height} {bpp}bpp"
        )));
    }
    let stride = (BOOT_WIDTH * 3 + 3) & !3;
    let need = pixel_off
        .checked_add(stride * BOOT_HEIGHT)
        .ok_or_else(|| bmp_error("BMP is truncated"))?;
    if pixel_off < 54 || data.len() < need {
        return Err(bmp_error("BMP is truncated"));
    }
    let bottom_up = height > 0;
    let mut pixels = Vec::with_capacity(BOOT_PIXELS);
    let row_order: Box<dyn Iterator<Item = usize>> = if bottom_up {
        Box::new((0..BOOT_HEIGHT).rev())
    } else {
        Box::new(0..BOOT_HEIGHT)
    };
    for row_index in row_order {
        let start = pixel_off + row_index * stride;
        let row = &data[start..start + BOOT_WIDTH * 3];
        for i in (0..BOOT_WIDTH * 3).step_by(3) {
            let blue = row[i];
            let green = row[i + 1];
            let red = row[i + 2];
            let value = ((u16::from(red) & 0xF8) << 8)
                | ((u16::from(green) & 0xFC) << 3)
                | (u16::from(blue) >> 3);
            pixels.push((value & 0xFF) as u8);
            pixels.push((value >> 8) as u8);
        }
    }
    if pixels.len() != BOOT_PIXELS {
        return Err(bmp_error(format!(
            "internal: RGB565 length {}",
            pixels.len()
        )));
    }
    Ok(pixels)
}

pub fn bmp_file_to_rgb565(path: &Path) -> Result<Vec<u8>, ProtocolError> {
    let data = std::fs::read(path).map_err(|e| bmp_error(format!("read file failed: {e}")))?;
    bmp_to_rgb565(&data).map_err(|err| match err {
        ProtocolError::Message(msg) if msg == "not a BMP" => {
            bmp_error(format!("not a BMP: {}", path.display()))
        }
        ProtocolError::Message(msg) if msg == "BMP is truncated" => {
            bmp_error(format!("BMP is truncated: {}", path.display()))
        }
        other => other,
    })
}

fn hex_line(data: &[u8]) -> String {
    data.iter()
        .map(|byte| format!("{byte:02X}"))
        .collect::<Vec<_>>()
        .join(" ")
}

fn open_port(port_name: &str) -> Result<Box<dyn SerialPort>, ProtocolError> {
    let mut port = serialport::new(port_name, crate::serial::DEFAULT_BAUD)
        .timeout(Duration::from_millis(200))
        .dtr_on_open(true)
        .open()
        .map_err(|e| ProtocolError::Message(format!("open {port_name} failed: {e}")))?;
    // pyserial asserts DTR and RTS on open. upload_boot_picture used that default.
    port.write_request_to_send(true)
        .map_err(|e| ProtocolError::Message(format!("open {port_name} failed: {e}")))?;
    port.clear(ClearBuffer::Input)
        .and_then(|_| port.clear(ClearBuffer::Output))
        .map_err(|e| ProtocolError::Message(format!("flush failed: {e}")))?;
    Ok(port)
}

fn write_all(port: &mut dyn SerialPort, data: &[u8]) -> Result<(), ProtocolError> {
    port.write_all(data)
        .map_err(|e| ProtocolError::Message(format!("write failed: {e}")))?;
    port.flush()
        .map_err(|e| ProtocolError::Message(format!("write failed: {e}")))?;
    Ok(())
}

/// Read `n` bytes. The deadline is the radio's reply bound from the Python
/// helper (2 s for ACK, 3 s for a boot status frame). The port timeout is
/// what wakes each read; there is no other completion signal.
fn read_exact(
    port: &mut dyn SerialPort,
    n: usize,
    timeout: Duration,
) -> Result<Vec<u8>, ProtocolError> {
    let deadline = Instant::now() + timeout;
    let mut buf = vec![0u8; n];
    let mut got = 0;
    while got < n {
        let remain = deadline.saturating_duration_since(Instant::now());
        if remain.is_zero() {
            break;
        }
        port.set_timeout(remain.min(Duration::from_millis(200)))?;
        match port.read(&mut buf[got..]) {
            Ok(0) => {}
            Ok(k) => got += k,
            Err(e) if e.kind() == std::io::ErrorKind::TimedOut => {}
            Err(e) => return Err(ProtocolError::Message(format!("read failed: {e}"))),
        }
    }
    if got != n {
        let shown = if got == 0 {
            String::new()
        } else {
            format!(" ({})", hex_line(&buf[..got]))
        };
        return Err(ProtocolError::Message(format!(
            "timeout: wanted {n} bytes, got {got}{shown}"
        )));
    }
    Ok(buf)
}

fn expect_ack(port: &mut dyn SerialPort) -> Result<(), ProtocolError> {
    let ack = read_exact(port, 1, ACK_TIMEOUT)?;
    if ack != [0x06] {
        return Err(ProtocolError::Message(format!(
            "expected ACK 0x06, got {}",
            hex_line(&ack)
        )));
    }
    Ok(())
}

fn expect_boot_status(
    port: &mut dyn SerialPort,
    command: u8,
    field: u16,
) -> Result<(), ProtocolError> {
    let resp = read_exact(port, 9, STATUS_TIMEOUT)?;
    if resp[0] != 0xA5
        || crc16_xmodem(&resp[1..resp.len() - 2])
            != u16::from_be_bytes([resp[resp.len() - 2], resp[resp.len() - 1]])
    {
        return Err(ProtocolError::Message(format!(
            "bad boot-picture reply: {}",
            hex_line(&resp)
        )));
    }
    let body = &resp[1..resp.len() - 2];
    let got_field = u16::from_be_bytes([body[1], body[2]]);
    if body[0] != command || got_field != field || body[3..6] != [0x00, 0x01, 0x59] {
        return Err(ProtocolError::Message(format!(
            "boot picture rejected: {}",
            hex_line(&resp)
        )));
    }
    Ok(())
}

/// Send one 240×320 picture. `progress` receives the same page marks the
/// Python helper printed (`boot picture 1/150`, and at 50, 100, and 150).
pub fn upload_boot_picture(
    port_name: &str,
    pixels: &[u8],
    mut progress: impl FnMut(&str),
) -> Result<(), ProtocolError> {
    if pixels.len() != BOOT_PIXELS {
        return Err(ProtocolError::Message(format!(
            "boot pixels must be {BOOT_PIXELS} bytes, got {}",
            pixels.len()
        )));
    }
    let mut port = open_port(port_name)?;
    write_all(port.as_mut(), HANDSHAKE_ASCII)?;
    expect_ack(port.as_mut())?;
    write_all(port.as_mut(), b"D")?;
    // CPS drops the COM handle after 'D' and opens the port again for the A5 session.
    drop(port);
    let mut port = open_port(port_name)?;
    for (index, frame) in boot_setup().into_iter().enumerate() {
        let command = frame[1];
        let field = if index < 2 { 0 } else { 0x4504 };
        write_all(port.as_mut(), &frame)?;
        expect_boot_status(port.as_mut(), command, field)?;
    }
    for page in 0..BOOT_PAGES {
        let start = page * BOOT_PAGE_BYTES;
        let frame = boot_page_frame(page, &pixels[start..start + BOOT_PAGE_BYTES])?;
        write_all(port.as_mut(), &frame)?;
        expect_boot_status(port.as_mut(), 0x57, page as u16)?;
        if matches!(page + 1, 1 | 50 | 100 | BOOT_PAGES) {
            progress(&format!("boot picture {}/{BOOT_PAGES}", page + 1));
        }
    }
    write_all(port.as_mut(), &boot_over())?;
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn page_zero_header_and_crc_match_the_capture_helper() {
        let frame = boot_page_frame(0, &[0u8; BOOT_PAGE_BYTES]).unwrap();
        assert_eq!(frame.len(), 1 + 5 + BOOT_PAGE_BYTES + 2);
        assert_eq!(
            &frame[..8],
            &[0xA5, 0x57, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00]
        );
        assert_eq!(&frame[frame.len() - 2..], &[0x26, 0x6E]);
        assert_eq!(BOOT_PIXELS, 153_600);
        assert_eq!(BOOT_PAGES * BOOT_PAGE_BYTES, BOOT_PIXELS);
    }

    #[test]
    fn rgb565_is_153600_bytes_top_row_first() {
        let stride = (BOOT_WIDTH * 3 + 3) & !3;
        let mut bmp = vec![0u8; 54 + stride * BOOT_HEIGHT];
        bmp[0] = b'B';
        bmp[1] = b'M';
        bmp[10..14].copy_from_slice(&54u32.to_le_bytes());
        bmp[14..18].copy_from_slice(&40u32.to_le_bytes());
        bmp[18..22].copy_from_slice(&(BOOT_WIDTH as i32).to_le_bytes());
        bmp[22..26].copy_from_slice(&(BOOT_HEIGHT as i32).to_le_bytes());
        bmp[26..28].copy_from_slice(&1u16.to_le_bytes());
        bmp[28..30].copy_from_slice(&24u16.to_le_bytes());
        // Bottom-up file: row 0 in the file is the bottom of the picture.
        // Paint the last file row (the top of the picture) pure red, BGR.
        let top = 54 + (BOOT_HEIGHT - 1) * stride;
        bmp[top] = 0;
        bmp[top + 1] = 0;
        bmp[top + 2] = 255;
        let pixels = bmp_to_rgb565(&bmp).unwrap();
        assert_eq!(pixels.len(), 153_600);
        assert_eq!(&pixels[..2], &[0x00, 0xF8]);
        assert_eq!(&pixels[2..4], &[0x00, 0x00]);
    }
}
