//! Codeplug image transfer, from the captured CPS read and write.
//!
//! `PROGRAMBT9000U`, `F`, `M`, `SEND`, then 271 blocks of 128 bytes. A read
//! ends with `T` (the APRS block) and `E`. A write sends the same addresses
//! as `W` frames, then one `X` frame for APRS, then `E`. Payloads are
//! encrypted with the session key from `SEND`. This does not call the OEM
//! program.

use std::time::{Duration, Instant};

use serde_json::Value;
use serialport::{ClearBuffer, SerialPort};

use crate::crypt::{crypt_payload, session_key};
use crate::error::ProtocolError;
use crate::layout::{decode_codeplug, encode_codeplug};
use crate::serial::{DEFAULT_BAUD, HANDSHAKE_ASCII};

pub const BLOCK: usize = 0x80;
pub const IMAGE_SIZE: usize = 0xD300;

const ACK_TIMEOUT: Duration = Duration::from_secs(2);
const BLOCK_TIMEOUT: Duration = Duration::from_secs(3);

/// SEND trailer the radio ACKs. Captured sessions vary these bytes; this
/// constant is the one `radtel_cps.py` uses.
const SEND_PARAMS: &[u8] = &[
    0x12, 0x06, 0x0A, 0x02, 0x0E, 0x03, 0x0D, 0x0C, 0x08, 0x09, 0x00, 0x0D, 0x09, 0x10, 0x0C, 0x09,
    0x06, 0x00, 0x02, 0x0E, 0x00,
];

pub fn read_command(addr: u16) -> [u8; 4] {
    [0x52, (addr >> 8) as u8, addr as u8, BLOCK as u8]
}

/// Addresses the CPS reads. 256 blocks cover `0x0000..0x8000`, then the
/// extra regions from the capture.
pub fn read_addrs() -> Vec<u16> {
    let mut addrs: Vec<u16> = (0u16..0x8000).step_by(BLOCK).collect();
    addrs.extend([
        0x8000, 0x9000, 0xA000, 0xA080, 0xA100, 0xB000, 0xB080, 0xC000, 0xC080, 0xD000, 0xD080,
        0xD100, 0xD180, 0xD200, 0xD280,
    ]);
    addrs
}

fn open_port(port_name: &str) -> Result<Box<dyn SerialPort>, ProtocolError> {
    let mut port = serialport::new(port_name, DEFAULT_BAUD)
        .timeout(Duration::from_millis(200))
        .dtr_on_open(false)
        .open()
        .map_err(|e| ProtocolError::Message(format!("open {port_name} failed: {e}")))?;
    // An asserted DTR and RTS yields no ACK on this handshake. The captured
    // CPS read clears both before PROGRAMBT9000U.
    port.write_request_to_send(false)
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

/// The deadline is the radio's reply bound. Each `read` waits on the port
/// timeout; there is no other completion signal.
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
        return Err(ProtocolError::Message(format!(
            "timeout: wanted {n} bytes, got {got}"
        )));
    }
    Ok(buf)
}

fn expect_ack(port: &mut dyn SerialPort) -> Result<(), ProtocolError> {
    let ack = read_exact(port, 1, ACK_TIMEOUT)?;
    if ack != [0x06] {
        return Err(ProtocolError::Message(format!(
            "expected ACK 0x06, got {:02X}",
            ack[0]
        )));
    }
    Ok(())
}

struct Session {
    port: Box<dyn SerialPort>,
    key: [u8; 4],
}

fn send_packet() -> Vec<u8> {
    let mut send = b"SEND".to_vec();
    send.extend_from_slice(SEND_PARAMS);
    send
}

fn begin_session(
    port_name: &str,
    progress: &mut impl FnMut(&str),
) -> Result<Session, ProtocolError> {
    let mut port = open_port(port_name)?;
    write_all(port.as_mut(), HANDSHAKE_ASCII)?;
    expect_ack(port.as_mut())?;
    write_all(port.as_mut(), b"F")?;
    let _firmware = read_exact(port.as_mut(), 16, ACK_TIMEOUT)?;
    write_all(port.as_mut(), b"M")?;
    let model = read_exact(port.as_mut(), 12, ACK_TIMEOUT)?;
    let model_text = String::from_utf8_lossy(&model)
        .trim_matches(char::from(0))
        .trim()
        .to_string();
    if !model_text.is_empty() {
        progress(&format!("model {model_text}"));
    }
    let send = send_packet();
    write_all(port.as_mut(), &send)?;
    expect_ack(port.as_mut())?;
    let key = session_key(&send)?;
    Ok(Session { port, key })
}

fn read_block(port: &mut dyn SerialPort, cmd: [u8; 4]) -> Result<Vec<u8>, ProtocolError> {
    write_all(port, &cmd)?;
    let resp = read_exact(port, 4 + BLOCK, BLOCK_TIMEOUT)?;
    if resp[..4] != cmd {
        return Err(ProtocolError::Message(format!(
            "bad echo {:02X} {:02X} {:02X} {:02X}",
            resp[0], resp[1], resp[2], resp[3]
        )));
    }
    Ok(resp[4..].to_vec())
}

/// One 132-byte program frame. The 4-byte header stays plaintext. The 128-byte
/// payload is encrypted with the session key.
pub fn program_frame(
    cmd: u8,
    addr: u16,
    plain: &[u8],
    key: &[u8; 4],
) -> Result<[u8; 132], ProtocolError> {
    if plain.len() != BLOCK {
        return Err(ProtocolError::Message(format!(
            "program frame payload is {} bytes, wanted {BLOCK}",
            plain.len()
        )));
    }
    let mut frame = [0u8; 4 + BLOCK];
    frame[0] = cmd;
    frame[1] = (addr >> 8) as u8;
    frame[2] = addr as u8;
    frame[3] = BLOCK as u8;
    frame[4..].copy_from_slice(plain);
    crypt_payload(&mut frame[4..], key);
    Ok(frame)
}

/// Read one ciphertext codeplug image. `progress` gets lines such as `read 32/271`.
/// This does not read the APRS block and does not decrypt.
pub fn read_image(
    port_name: &str,
    mut progress: impl FnMut(&str),
) -> Result<Vec<u8>, ProtocolError> {
    let mut session = begin_session(port_name, &mut progress)?;
    let addrs = read_addrs();
    let total = addrs.len();
    let mut image = vec![0xFFu8; IMAGE_SIZE];
    for (index, addr) in addrs.into_iter().enumerate() {
        let payload = read_block(session.port.as_mut(), read_command(addr))?;
        let start = addr as usize;
        if start + BLOCK > image.len() {
            return Err(ProtocolError::Message(format!(
                "address 0x{addr:04X} is past the image"
            )));
        }
        image[start..start + BLOCK].copy_from_slice(&payload);
        if (index + 1) % 32 == 0 || index + 1 == total {
            progress(&format!("read {}/{total}", index + 1));
        }
    }
    Ok(image)
}

/// Read the radio and return a `.950pro` document. The image and the APRS
/// block are decrypted here. `E` is sent after the document is in hand; a
/// failure of that last byte is reported and does not discard the document.
pub fn read_codeplug(
    port_name: &str,
    mut progress: impl FnMut(&str),
) -> Result<Value, ProtocolError> {
    let mut session = begin_session(port_name, &mut progress)?;
    let addrs = read_addrs();
    let total = addrs.len() + 1;
    let mut image = vec![0xFFu8; IMAGE_SIZE];
    for (index, addr) in addrs.into_iter().enumerate() {
        let mut payload = read_block(session.port.as_mut(), read_command(addr))?;
        crypt_payload(&mut payload, &session.key);
        let start = addr as usize;
        if start + BLOCK > image.len() {
            return Err(ProtocolError::Message(format!(
                "address 0x{addr:04X} is past the image"
            )));
        }
        image[start..start + BLOCK].copy_from_slice(&payload);
        if (index + 1) % 32 == 0 || index + 1 == total {
            progress(&format!("read {}/{total}", index + 1));
        }
    }
    let mut aprs = read_block(session.port.as_mut(), [b'T', 0x00, 0x00, BLOCK as u8])?;
    crypt_payload(&mut aprs, &session.key);
    progress(&format!("read {total}/{total}"));
    if let Err(e) = write_all(session.port.as_mut(), b"E") {
        progress(&format!("warning: end command failed: {e}"));
    }
    decode_codeplug(&image, &aprs)
}

/// Write a `.950pro` document. Each block is one 132-byte frame. The radio
/// ACKs `0x06` after every frame, including the APRS `X` frame. `E` must
/// leave the port; a failure there is an error.
pub fn write_codeplug(
    port_name: &str,
    doc: &Value,
    mut progress: impl FnMut(&str),
) -> Result<(), ProtocolError> {
    let (image, aprs) = encode_codeplug(doc)?;
    let mut session = begin_session(port_name, &mut progress)?;
    let addrs = read_addrs();
    let total = addrs.len() + 1;
    for (index, addr) in addrs.into_iter().enumerate() {
        let start = addr as usize;
        if start + BLOCK > image.len() {
            return Err(ProtocolError::Message(format!(
                "address 0x{addr:04X} is past the image"
            )));
        }
        let frame = program_frame(b'W', addr, &image[start..start + BLOCK], &session.key)?;
        write_all(session.port.as_mut(), &frame)?;
        expect_ack(session.port.as_mut())?;
        if (index + 1) % 32 == 0 {
            progress(&format!("write {}/{total}", index + 1));
        }
    }
    let frame = program_frame(b'X', 0, &aprs, &session.key)?;
    write_all(session.port.as_mut(), &frame)?;
    expect_ack(session.port.as_mut())?;
    progress(&format!("write {total}/{total}"));
    write_all(session.port.as_mut(), b"E")?;
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn read_map_is_271_blocks_and_54016_bytes() {
        let addrs = read_addrs();
        assert_eq!(addrs.len(), 271);
        assert_eq!(addrs[0], 0);
        assert_eq!(addrs[1], 0x80);
        assert_eq!(*addrs.last().unwrap(), 0xD280);
        assert_eq!(IMAGE_SIZE, 54_016);
        assert_eq!(
            *addrs.iter().max().unwrap() as usize + BLOCK,
            IMAGE_SIZE
        );
        assert_eq!(read_command(0x80), [0x52, 0x00, 0x80, 0x80]);
        assert_eq!(SEND_PARAMS.len(), 21);
    }

    #[test]
    fn fixed_send_selects_eiy() {
        assert_eq!(session_key(&send_packet()).unwrap(), *b" EIY");
    }

    #[test]
    fn program_frame_keeps_the_header_and_encrypts_the_payload() {
        let plain = [0x11u8; BLOCK];
        let key = *b" EIY";
        let frame = program_frame(b'W', 0, &plain, &key).unwrap();
        assert_eq!(frame.len(), 132);
        assert_eq!(frame[0], b'W');
        assert_eq!(&frame[..4], &[b'W', 0x00, 0x00, 0x80]);
        let mut expect = plain;
        crypt_payload(&mut expect, &key);
        assert_eq!(&frame[4..], &expect[..]);
        assert_ne!(&frame[4..], &plain[..]);
    }
}
