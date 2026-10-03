//! Codeplug image read, from the captured CPS read.
//!
//! `PROGRAMBT9000U`, `F`, `M`, `SEND`, then 271 reads of 128 bytes. Addresses
//! step by 0x80. The rebuilt image is 54016 bytes. This does not call the
//! OEM program.

use std::time::{Duration, Instant};

use serialport::{ClearBuffer, SerialPort};

use crate::error::ProtocolError;
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

/// Read one codeplug image. `progress` gets lines such as `read 32/271`.
pub fn read_image(
    port_name: &str,
    mut progress: impl FnMut(&str),
) -> Result<Vec<u8>, ProtocolError> {
    let addrs = read_addrs();
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
    let mut send = b"SEND".to_vec();
    send.extend_from_slice(SEND_PARAMS);
    write_all(port.as_mut(), &send)?;
    expect_ack(port.as_mut())?;

    let mut image = vec![0xFFu8; IMAGE_SIZE];
    for (index, addr) in addrs.iter().copied().enumerate() {
        let cmd = read_command(addr);
        write_all(port.as_mut(), &cmd)?;
        let resp = read_exact(port.as_mut(), 4 + BLOCK, BLOCK_TIMEOUT)?;
        if resp[..4] != cmd {
            return Err(ProtocolError::Message(format!(
                "bad echo at 0x{addr:04X}"
            )));
        }
        let start = addr as usize;
        image[start..start + BLOCK].copy_from_slice(&resp[4..]);
        if (index + 1) % 32 == 0 || index + 1 == addrs.len() {
            progress(&format!("read {}/{}", index + 1, addrs.len()));
        }
    }
    Ok(image)
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
}
