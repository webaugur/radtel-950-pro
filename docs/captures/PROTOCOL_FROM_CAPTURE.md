# RT-950 Pro CPS serial protocol (from live Read capture)

**Source:** Wine OEM CPS full **Read** over CH340 (`1a86:7523`) on `/dev/ttyUSB0`  
**Capture:** `usbmon-read-20261003-074920` → decoded `serial-decoded-dev011.log`  
**Rebuilt image:** `codeplug-read.bin` (sparse; gaps filled with `0xFF`)

Baud: **115200 8N1**. This is the **codeplug** path (not EnUPDATE `0xAA`…`0x55` flash).

## Session setup

| Host → radio | Radio → host |
|--------------|--------------|
| `PROGRAMBT9000U` (14 ASCII) | `0x06` |
| `F` | 16-byte firmware/feature blob |
| `M` | `RT-950` + trailing spaces (12 bytes) |
| `SEND` + 21 parameter bytes | `0x06` |

Observed `F` reply (this radio):

```text
01 36 01 74 04 00 05 20 02 00 02 60 01 03 30 04
```

Observed `SEND` body (21 bytes after `SEND`):

```text
12 06 0A 02 0E 03 0D 0C 08 09 00 0D 09 10 0C 09 06 00 02 0E 00
```

(Exact meaning TBD — likely region/limits/feature bits from CPS.)

## Block read

Host command (4 bytes):

```text
52 <addr_hi> <addr_lo> <len>     # 'R' + big-endian address + length
```

- During a full CPS Read, **`len` is always `0x80` (128)**.
- Address steps by **`0x80`** through the main image (`0x0000` … `0x7F80`), then additional regions at `0x8000`, `0x9000`, `0xA000`, `0xB000`, `0xC000`, `0xD000`… (see decode log).

Radio reply:

```text
52 <addr_hi> <addr_lo> <len>   ||  <len bytes of payload>
```

- Reply **echoes the 4-byte command**, then **exactly `len` data bytes**.
- USB bulk framing delivered data in ~32-byte chunks; reassemble by concatenation.

**271** successful `R` reads in this capture → **`codeplug-read.bin`**.

## Not yet observed (need a Write capture)

- `W` / erase / “over” / set-address forms from OEM IL (`0xA5` framed commands may be CPS-internal only; wire appears ASCII/`R`-centric here)
- Boot-picture transfer (`A5 57` / 150×1024) — not part of this Read

## Wine COM note

Wine may remap `dosdevices/com1` → `/dev/ttyS0`. The launcher  
`~/Applications/Radtel950Pro/run-cps.sh` re-pins **COM1/COM33 → `/dev/ttyUSB0`** each start. Stop ModemManager if it claims the CH340.

## Next engineering steps

1. Map `codeplug-read.bin` offsets → `Channel` / zones / FunConfig (use CPS UI values + IL).
2. Capture a **Write** (small change) to confirm host→radio block format.
3. Implement `ProgrammingSession::read_codeplug` in `cps/crates/rt950-protocol`.
