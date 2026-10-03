# USB / COM captures

OEM CPS (Wine) serial traces for RT-950 Pro protocol work. Prefer **usbmon** (Wine rejects PTY proxies).

## Sessions

| Session | Artifacts |
|---------|-----------|
| First Read | `usbmon-read-20261003-074920.user.log`, `serial-decoded-dev011.log`, `codeplug-read.bin`, OEM `.dat` |
| First Write | `usbmon-write-20261003-075558.user.log`, `serial-decoded-write-dev011.log` |
| Florida Write | `usbmon-write-florida-20261003-075848.user.log`, `serial-decoded-write-florida-dev011.log` |
| Florida Read | `usbmon-read-florida-20261003-075947.user.log`, `serial-decoded-read-florida-dev011.log`, `codeplug-read-florida.bin` |

Protocol summary: **`PROTOCOL_FROM_CAPTURE.md`**
