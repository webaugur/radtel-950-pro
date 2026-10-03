# USB / COM captures

Drop OEM CPS (Wine) or community-editor serial traces here for protocol work.

## 2026-10-03 — full CPS Read (CH340 / ttyUSB0)

| File | Role |
|------|------|
| `usbmon-read-20261003-074920.user.log` | Raw usbmon bus 2 text |
| `serial-decoded-dev011.log` | Decoded HOST↔RADIO bytes (CPS session) |
| `codeplug-read.bin` | Reassembled EEPROM/codeplug image from `R` reads |
| `PROTOCOL_FROM_CAPTURE.md` | Protocol notes derived from this capture |
| `serial_snoop.py` | PTY proxy (Wine rejects PTYs — prefer usbmon) |

See `PROTOCOL_FROM_CAPTURE.md` for the wire format.
