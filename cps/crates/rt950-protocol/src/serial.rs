//! Serial programming (CPS path — not the EnUPDATE `0xAA`…`0x55` flash protocol).

use std::io::{Read, Write};
use std::time::Duration;

use serialport::SerialPort;

use crate::codeplug::Codeplug;
use crate::error::ProtocolError;

/// Observed in OEM CPS IL and community editor protocol notes.
pub const DEFAULT_BAUD: u32 = 115_200;
pub const HANDSHAKE_ASCII: &[u8] = b"PROGRAMBT9000U";
pub const MODEL_ASCII: &[u8] = b"RT-950";

/// Frame marker from OEM `COMMAND_TYPE.Fram_Header` (payload layout TBD).
#[allow(dead_code)]
pub const FRAME_HEADER: u8 = 0xA5;
#[allow(dead_code)]
pub const CMD_HANDSHAKE: u8 = 0x02;
#[allow(dead_code)]
pub const CMD_SET_ADDRESS: u8 = 0x03;
#[allow(dead_code)]
pub const CMD_ERASE: u8 = 0x04;
#[allow(dead_code)]
pub const CMD_WRITE_DATA: u8 = 0x57; // 'W'
#[allow(dead_code)]
pub const CMD_OVER: u8 = 0x06;

#[derive(Debug, Clone)]
pub struct PortInfo {
    pub name: String,
    pub description: String,
}

pub fn list_ports() -> Result<Vec<PortInfo>, ProtocolError> {
    let ports = serialport::available_ports()?;
    Ok(ports
        .into_iter()
        .map(|p| {
            let description = match p.port_type {
                serialport::SerialPortType::UsbPort(info) => {
                    let mut parts = Vec::new();
                    if let Some(m) = info.manufacturer {
                        parts.push(m);
                    }
                    if let Some(prod) = info.product {
                        parts.push(prod);
                    }
                    if parts.is_empty() {
                        format!("USB {:04x}:{:04x}", info.vid, info.pid)
                    } else {
                        parts.join(" ")
                    }
                }
                serialport::SerialPortType::BluetoothPort => "Bluetooth".into(),
                serialport::SerialPortType::PciPort => "PCI".into(),
                serialport::SerialPortType::Unknown => "unknown".into(),
            };
            PortInfo {
                name: p.port_name,
                description,
            }
        })
        .collect())
}

/// Open port and attempt the known ASCII handshake. Full codeplug R/W comes after capture.
pub fn probe_handshake(port_name: &str, baud: u32) -> Result<String, ProtocolError> {
    let mut port = serialport::new(port_name, baud)
        .timeout(Duration::from_millis(800))
        .open()?;

    // Flush any stale bytes.
    let mut sink = [0u8; 256];
    let _ = port.read(&mut sink);

    port.write_all(HANDSHAKE_ASCII)?;
    port.flush()?;

    let mut buf = [0u8; 64];
    let n = port.read(&mut buf).unwrap_or(0);
    let reply = &buf[..n];

    // Community notes: radio replies with 0x06 (single ACK byte) or ASCII "06".
    let ok = reply.contains(&0x06)
        || reply.windows(2).any(|w| w == b"06")
        || std::str::from_utf8(reply)
            .map(|s| s.contains('6'))
            .unwrap_or(false);

    if ok {
        Ok(format!(
            "handshake OK ({} reply bytes: {:02x?})",
            n,
            &reply[..n.min(16)]
        ))
    } else if n == 0 {
        Err(ProtocolError::Handshake(
            "no reply — check cable, radio power, and that OEM CPS is not holding the port".into(),
        ))
    } else {
        Err(ProtocolError::Handshake(format!(
            "unexpected reply ({n} bytes): {:02x?}",
            &reply[..n.min(32)]
        )))
    }
}

/// Session handle for future block read/write once the memory map is known.
pub struct ProgrammingSession {
    port: Box<dyn SerialPort>,
    pub port_name: String,
}

impl ProgrammingSession {
    pub fn open(port_name: &str, baud: u32) -> Result<Self, ProtocolError> {
        let port = serialport::new(port_name, baud)
            .timeout(Duration::from_millis(1000))
            .open()?;
        Ok(Self {
            port,
            port_name: port_name.to_string(),
        })
    }

    pub fn handshake(&mut self) -> Result<(), ProtocolError> {
        let mut sink = [0u8; 256];
        let _ = self.port.read(&mut sink);
        self.port.write_all(HANDSHAKE_ASCII)?;
        self.port.flush()?;
        let mut buf = [0u8; 64];
        let n = self.port.read(&mut buf).unwrap_or(0);
        let reply = &buf[..n];
        let ok = reply.contains(&0x06) || reply.windows(2).any(|w| w == b"06");
        if ok {
            Ok(())
        } else {
            Err(ProtocolError::Handshake(format!(
                "unexpected reply: {:02x?}",
                reply
            )))
        }
    }

    pub fn read_codeplug(&mut self) -> Result<Codeplug, ProtocolError> {
        let _ = self;
        Err(ProtocolError::NotImplemented(
            "block read map — awaiting USB/COM capture against OEM CPS",
        ))
    }

    pub fn write_codeplug(&mut self, _plug: &Codeplug) -> Result<(), ProtocolError> {
        Err(ProtocolError::NotImplemented(
            "block write map — awaiting USB/COM capture against OEM CPS",
        ))
    }
}
