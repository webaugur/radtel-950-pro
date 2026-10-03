//! RT-950 / RT-950 Pro codeplug types and serial programming protocol.
//!
//! The wire format beyond the known handshake is filled in after USB/COM
//! capture against OEM CPS or the community editor. See:
//! - `docs/cps_teardown.md`
//! - `docs/RT-950-950Pro-Editor/docs/PROTOCOL_NOTES.md`

mod codeplug;
mod error;
mod serial;

pub use codeplug::{
    AprsData, Channel, ChannelData, Codeplug, DtmfData, FreqModeData, FunConfigData,
    ModulationData, empty_codeplug,
};
pub use error::ProtocolError;
pub use serial::{
    HANDSHAKE_ASCII, MODEL_ASCII, PortInfo, DEFAULT_BAUD, list_ports, probe_handshake,
    ProgrammingSession,
};
