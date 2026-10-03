//! RT-950 / RT-950 Pro codeplug types and serial programming protocol.
//!
//! Codeplug block read/write is still the OEM `DoIt` path (`RadtelDat.exe`).
//! Boot-picture upload is implemented here from the captured Import Image
//! sequence. See `docs/captures/PROTOCOL_FROM_CAPTURE.md`.

mod boot;
mod codeplug;
mod error;
mod serial;

pub use boot::{bmp_file_to_rgb565, upload_boot_picture, BOOT_PIXELS};
pub use codeplug::{
    empty_codeplug, AprsData, Channel, ChannelData, Codeplug, DtmfData, FreqModeData,
    FunConfigData, ModulationData,
};
pub use error::ProtocolError;
pub use serial::{
    list_ports, probe_handshake, PortInfo, ProgrammingSession, DEFAULT_BAUD, HANDSHAKE_ASCII,
    MODEL_ASCII,
};
