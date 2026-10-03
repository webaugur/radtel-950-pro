//! Codeplug payload cipher from `KDH.RWDataOperation` in the OEM CPS.
//!
//! After `SEND`, byte 4 of that packet picks an entry in a 20-string table.
//! Each 128-byte read or write payload is XORed with those four ASCII bytes,
//! restarting at the first key byte. A key byte of 0x20 is skipped. A payload
//! byte is left as-is when it is 0x00, 0xFF, equal to the key byte, or equal
//! to the key byte XOR 0xFF.

use crate::error::ProtocolError;

/// `tblEncrySymbol` from the OEM constructor. Each entry is four ASCII bytes.
pub const SYMBOLS: [[u8; 4]; 20] = [
    *b"BHT ", *b"CO 7", *b"A ES", *b" EIY", *b"M PQ", *b"XN Y", *b"RVB ", *b" HQP", *b"W RC",
    *b"MS N", *b" SAT", *b"K DH", *b"ZO R", *b"C SL", *b"6RB ", *b" JCG", *b"PN V", *b"J PK",
    *b"EK L", *b"I LZ",
];

/// The 4-byte XOR key selected by one captured `SEND` packet (25 bytes).
pub fn session_key(send: &[u8]) -> Result<[u8; 4], ProtocolError> {
    if send.len() < 25 || &send[..4] != b"SEND" {
        return Err(ProtocolError::Message(
            "SEND packet must be 25 bytes starting with SEND".into(),
        ));
    }
    let marker = u16::from(send[4]);
    let index = if marker & 0x20 != 0 {
        (marker - 0x20) * 2 + 1
    } else {
        (marker - 0x10) * 2
    } + 1;
    let sel = send[4 + index as usize] as usize;
    SYMBOLS.get(sel).copied().ok_or_else(|| {
        ProtocolError::Message(format!("encryption symbol {sel} is outside the table"))
    })
}

/// Decrypt one payload in place. The same function encrypts, because the
/// operation is XOR and the skip rules are symmetric for these keys.
pub fn crypt_payload(buf: &mut [u8], key: &[u8; 4]) {
    for (i, byte) in buf.iter_mut().enumerate() {
        let symbol = key[i % 4];
        let value = *byte;
        if symbol == 0x20
            || value == 0x00
            || value == 0xFF
            || value == symbol
            || value == symbol ^ 0xFF
        {
            continue;
        }
        *byte ^= symbol;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn captured_send_packets_select_the_symbols_from_the_il() {
        let first = hex("53454E4412060A020E030D0C0809000D09100C090600020E00");
        let florida = hex("53454E442013060803070A06030A1202090501010B010D0800");
        assert_eq!(session_key(&first).unwrap(), *b" EIY");
        assert_eq!(session_key(&florida).unwrap(), *b"RVB ");
    }

    #[test]
    fn first_read_block_decrypts_to_the_cb_frequency() {
        // Address 0 of codeplug-read.bin. SEND selected " EIY".
        let mut block = hex(
            "0020205bffffffff000000000000005fffffffff3273676036707969ffffffff0030205bffffffff000000000000005fffffffff3273676037707969ffffffff00c0205bffffffff000000000000005fffffffff3273676038707969ffffffff0040395bffffffff000000000000005fffffffff3272676930707969ffffffff",
        );
        crypt_payload(&mut block, b" EIY");
        assert_eq!(&block[20..28], b"26.96500");
    }

    fn hex(text: &str) -> Vec<u8> {
        (0..text.len())
            .step_by(2)
            .map(|i| u8::from_str_radix(&text[i..i + 2], 16).unwrap())
            .collect()
    }
}
