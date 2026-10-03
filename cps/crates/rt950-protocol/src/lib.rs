//! RT-950 / RT-950 Pro codeplug types and serial programming protocol.
//!
//! The codeplug image read and the boot-picture upload are in this crate.
//! See `re/cps/captures/PROTOCOL_FROM_CAPTURE.md`.

mod boot;
mod codeplug;
mod crypt;
mod dcs;
mod error;
mod image;
mod layout;
mod serial;

pub use boot::{bmp_file_to_rgb565, upload_boot_picture, BOOT_PIXELS};
pub use crypt::{crypt_payload, session_key, SYMBOLS};
pub use image::{program_frame, read_codeplug, read_image, write_codeplug, IMAGE_SIZE};
pub use layout::{decode_codeplug, encode_codeplug};
pub use codeplug::{
    empty_codeplug, AprsData, Channel, ChannelData, Codeplug, DtmfData, FreqModeData,
    FunConfigData, ModulationData,
};
pub use error::ProtocolError;
pub use serial::{
    list_ports, probe_handshake, PortInfo, ProgrammingSession, DEFAULT_BAUD, HANDSHAKE_ASCII,
    MODEL_ASCII,
};
