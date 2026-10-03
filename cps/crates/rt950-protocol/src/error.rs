use thiserror::Error;

#[derive(Debug, Error)]
pub enum ProtocolError {
    #[error("serial port error: {0}")]
    Serial(#[from] serialport::Error),

    #[error("I/O error: {0}")]
    Io(#[from] std::io::Error),

    #[error("handshake failed: {0}")]
    Handshake(String),

    #[error("protocol not yet implemented: {0}")]
    NotImplemented(&'static str),

    #[error("{0}")]
    Message(String),
}
