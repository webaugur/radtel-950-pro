# FHSS in V0.29

Image: `re/firmware/decrypted_v0.29.bin`, loaded at `0x08000000`. Addresses below are from that image. Instruction behavior is from the Thumb disassembly. Ghidra names (`FUN_0800xxxx`) are labels only.

The CPS and the menu call this field FHSS. The firmware path that carries the field does not step a synthesizer through a hop set. It stores a 23-bit code, marks the word with `0xA0000000`, and later hands that word to an indirect call as four (register number, 16-bit value) pairs. Those pairs match the published Beken BK4819 CDCSS load (register `0x51`, the 134.4 Hz word in register `0x07`, then register `0x08` twice). The on-disk BK4829 sheet does not document those registers, and the indirect callee is not an SPI driver. See the last section.

## Menu string

| Address | Bytes | Text |
| --- | --- | --- |
| `0x0805C16A` | `46 48 53 53 20 43 4F 44 45 00` | `FHSS CODE` |
| `0x0805C176` | `D1 A7 CF B0 CC F8 C6 B5 00` | GBK `学习跳频` (learn frequency-hop) |

`firmware/docs/strings.md` lists the first string at `0x0805C169` because that address is the `0x20` prefix byte in front of `FHSS`. The same `07 20` prefix sits in front of the neighboring entries `TX CTCSS`, `Encryption`, `DCS`, and `CTCSS`.

A scan of every 32-bit little-endian word in the image found no pointer into `0x0805C100`–`0x0805C200`. A scan of every Thumb `BL` and `B.W` found no branch to `FUN_0801fdfc`. Both the menu string and the save function are present as bytes. Their callers are not an absolute address in this image.

## Codeplug word

The Rust CPS stores one channel in 32 bytes (`cps/crates/rt950-protocol/src/layout.rs`).

| Offset | CPS name | Firmware use on this path |
| --- | --- | --- |
| `0x0E` high nibble | scrambler | not read by `FUN_0800ab8c` |
| `0x0F` bit 7 | Learn FHSS | set by `FUN_0801fdfc` when it saves a marked code |
| `0x0F` bits 1:0 | receive mode | cleared by that same save |
| `0x10`–`0x13` | FHSS code | little-endian word. CPS writes six hex digits in the low three bytes and `0xA0` in byte 3. Empty CPS value is `FF FF FF FF` |

Six hex digits are 24 bits. `FUN_0801fdfc` keeps only the low 23 bits (`UBFX` of width 23) and then ORs `0xA0000000`. Bit 23 of a CPS code is cleared if it passes through that save. The apply path does not repeat that clear: `FUN_0800ab8c` stores the word it was given, and the register `0x08` split below uses bits 23:0. Bits 31:24 stay out of those two writes.

The CPS treats byte 3 as a code only when it is `0xA0`. The firmware test is wider. `FUN_08007bf0` and `FUN_08007c50` take the marked path when `(~word & 0xA0000000) == 0`, which means bits 31 and 29 are both set. `0xA0000000` matches. So does `0xFFFFFFFF`, the erased CPS value. The test is reached only when the type byte for that slot is greater than 1.

## Saving a learned code

`FUN_0801fdfc` (`0x0801FDFC`) builds a 32-byte record at `sp+0x10`.

The channel index is `word(struct + 3) + byte(other_struct + 1) * 99`. The byte is multiplied by 33 and then by 3.

The type byte is at `struct+0x14` and the raw word is at `struct+0x10`.

- Type `1` and the word `>= 0x258` (`600`): the low 16 bits are stored at record offsets `0x08` and `0x0A` (the tone slots).
- Type `2` and the byte at `struct+0x0C` is not `1`: the record word at offset `0x10` becomes `(raw & 0x7FFFFF) | 0xA0000000`, and bit 7 of record byte `0x0F` is set.
- Record byte `0x0F` is then masked with `~3`, so bits 1:0 end clear. Bit 7 survives.

`FUN_0800f3c0` copies those 32 bytes into the channel slot `(index & 0x7F) * 32` of a block selected by `index >> 7`. The copy goes out through `FUN_08021824`, which clocks address bytes through `FUN_080218d8`. It then writes the two words at `sp+4` over record offsets `0x14` and `0x18`. This function does not store anything at `sp+4` before that call. The function returns 5. No branch in the image targets `FUN_0801fdfc`.

## Learn scan

`FUN_0800a77c` case 9 calls `FUN_0801f910` (`BL` at `0x0800A75C`). `FUN_0801f910` returns immediately unless a mode byte is 4. The decompiler shows a state byte:

- State 1 reads pairs from `FUN_0801b9f0`. Two samples within `0x32` of each other are averaged and then scaled or rejected from constants in that function’s pool. A rejected sample sets the state back to 0.
- State 2 quantizes the saved word with `((value + 0x0D) / 0x19) * 0x19`, calls `FUN_0801baf4`, and moves to state 3. `FUN_0801baf4` issues the indirect call `(0x51, 0x300)`.
- State 4 calls `FUN_0801bd68`. A classifier result of 1 goes to `FUN_08007984` (the tone path). Any other non-zero classifier calls `FUN_0800ab8c(word, classifier, 1, 0)` and waits in `FUN_0800ad06(200)`.
- State 5, when the classifier was not 1 and byte `0x0C` is not 1, stores `(word & 0x7FFFFF) | 0xA0000000` through the pointer at `struct+0x18`, offset 8. That is the same marker the save function writes at record offset `0x10`.

`FUN_0801e498` is the other writer of that marker. `FUN_0801b244` reads a command word at argument+4.

- Command `0x11` and the byte at its pool base equal to 3: call `FUN_0801e498`, call `FUN_0800ea60(1)`, then tail-call `FUN_08023510` with `r0 = 0x47` and `r1 = 6`.
- Command `0x11` and that byte not 3: tail-call `FUN_080073a4(7)`.

Inside `FUN_0801e498`, type byte `2` and the byte at `+0x0C` not `1` store `(source_word & 0x7FFFFF) | 0xA0000000` into the current slot and set bit 0 of a nearby flag. The slot stride is `0x20` when the byte at `slot*0x58+0x130` is `1`, and `0x24` otherwise. The word lands at offset `0x280` or `0x2EC` from the slot base. This is not the 32-byte CPS record; it is the live per-slot copy.

## Applying the code

Two readers share the test. Both require the type byte to be greater than 1.

| Function | Type byte | Word | Flag passed through when the marker does not match |
| --- | --- | --- | --- |
| `FUN_08007bf0` | `0x20000C7C+8` | `0x20000C7C+4` | byte at `0x20000C7C+0x18` |
| `FUN_08007c50` | `0x20000C7C+0x14` | `0x20000C7C+0x10` | byte at `0x20000C7C+0x19` |

`FUN_0801c60c` fills the first slot and tail-calls `FUN_08007bf0`. `FUN_0801c6a8` calls `FUN_08007c50` while programming the live channel. `FUN_0801c448` is the writer that fills both slots. If its value is below `0xFB`, not zero, and the marker bits are clear, it replaces the value from a halfword table before storing it. A marked word is stored unchanged.

When the marker matches, the reader stores `word & 0x7FFFFF` at `0x200000E0` and tail-calls `FUN_0800ab8c(word, type, 1, 0)`. The callee immediately stores the original word, including `0xA0000000`, over that masked copy. The mask in the reader does not reach the register writes.

When the marker does not match, the call is `FUN_0800ab8c(word, type, 0, flag)`. That branch keeps the low 15 bits, runs one of the three transforms below, and only then falls into the same four calls. `flag == 2` calls `FUN_08021b60` on those 15 bits. `flag == 1` computes `(ram & 0x7AFD76) ^ 0x0FACDB + 0x181818`. `flag == 3` computes `(0x7FFFFF & ~ram | 0xE00) ^ 0xF`. Each of those then forces bit 11 set, via mask `0xFFF1FF | 0x800`, when bits 11:9 of the low 12 are not `4`. On this branch, a second argument of `3` changes the `0x51` OR constant from `0xA000` to `0x8000`. The marked branch does not.

Type `0` in `FUN_08007bf0` calls `FUN_08007984` with `0x227` or, when the flag byte is non-zero, `0x1F5`. Type `1` calls `FUN_08007984` with no extra arguments. `FUN_08007c50` type `0` either calls `FUN_08007984(0x1F5, 1)` or the indirect call `(0x51, 0)`. `FUN_08007984` is the tone programmer. Its `0x51` constants on the non-zero second argument are `0xA080`, and on a zero second argument `0x9400` or `0x9000`, not the marked-code `0xA000` plus the register `0x08` split.

## The four calls

`FUN_0800ab8c` (`0x0800AB8C`) on the marked path:

1. Store the full word at `0x200000D4+0x0C` (`0x200000E0`).
2. Read the byte at `0x200000D4+0x4C`. If the byte at `0x20000C7C+0x1A` is non-zero, add `0x14` and keep the low 8 bits.
3. Call the function pointer at `0x20000C78` four times:

| Call | r0 | r1 |
| --- | --- | --- |
| 1 | `0x51` | `(byte & 0x7F) \| 0xA000` |
| 2 | `7` | `0x0AD7` |
| 3 | `8` | bits 11:0 of the word at `0x200000E0` |
| 4 | `8` | bits 23:12 of that word, then OR `0x8000`. This call is a `BX`, not a `BL` |

`0xA000` sets bits 15 and 13 of the 16-bit value. The low 7 bits come from the RAM byte, so they are not a fixed part of the constant.

The same pointer is how the image loads a channel frequency. `FUN_0801b910` calls it as `(0x38, low 16 bits)`, `(0x39, high 16 bits)`, then `(0x43, 0x4008)` or `(0x43, 0x3028)`. `FUN_08007428` calls it with the long init list that starts `(0, 0x8000)`, `(0x37, 0x9D1F)`, `(0x13, 0x03DF)`.

## What those numbers are in the public BK4819 list

`re/datasheets/DS-BK4829-E01_V1.0.pdf` (Beken, 26 May 2023, 28 pages) names a frequency-inversion scrambler and has no register map. A text extract of that file has no `FHSS`, no register `0x51`, and no `0x0AD7`. The register meanings below are from the public BK4819 list (the Beken application-note pages reproduced on the eevblog thread and the register list dated 2020-12-18), not from the sheet in this repo and not from a measurement of this radio.

| Value in this image | Published BK4819 meaning |
| --- | --- |
| Register `0x08`, bit 15 clear, then bit 15 set | low 12 bits of a CDCSS code, then high 12 bits |
| Register `0x07` = `0x0AD7` | `134.4 * 20.64888 = 2775.2`, and `0x0AD7` is `2775`. That factor is the 13 MHz / 26 MHz CTCSS/CDCSS clock formula. `0x0AD7 / 20.64888 = 134.39` |
| Register `0x51` bit 15 | enable TX CTCSS/CDCSS |
| Register `0x51` bit 13 | TX negative CDCSS when set |
| Register `0x51` bit 12 clear | CDCSS rather than CTCSS |
| Register `0x51` bit 11 clear | 23-bit CDCSS rather than 24-bit |

`0xA000` is bits 15 and 13 set, with bits 12 and 11 clear: enable TX, negative CDCSS, CDCSS mode, 23-bit code. The published inversion-scrambler controls are registers `0x31` and `0x71`. This path does not write them. The CPS scrambler nibble is byte `0x0E` bits 7:4 and is not an input of `FUN_0800ab8c`.

`FUN_08007428`’s constant `0x9D1F` in register `0x37` is the same constant used by public BK4819 init tables. That is a comparison of the immediate, not a trace to a pin.

## Where the function pointer points

The pointer word is `0x20000C78`. `FUN_0800ab8c` loads `0x20000C7C`, subtracts `0x0C`, and reads offset 8. `FUN_0800ad30` is the only function in the image that stores that word. Its argument selects one of two pairs. The base it writes is `0x20000C70`.

| Argument | Word stored at `0x20000C74` (the read slot) | Word stored at `0x20000C78` (the write slot) |
| --- | --- | --- |
| `0` | `0x0801F375` | `0x0801F441` |
| non-zero | `0x0801EC8D` | `0x0801F495` |

`0x0801F441` is Thumb for `0x0801F440`: `MOVS r0, #7` / `B.W FUN_080073a4`. The register number and the 16-bit value are discarded. `FUN_080073a4` writes a six-byte status record. For argument 7 the record is byte0 `1`, byte1 `0`, byte2 `1`, byte3 `0x98` (`7 + 0x91`). It does not shift a bit on a GPIO or SPI register.

`0x0801F495` is Thumb for `0x0801F494`. That address is the second halfword of the `BL FUN_0801f2f8` at `0x0801F492`, inside `FUN_0801f458`. It is not a function entry.

`FUN_0801a7c0` calls `FUN_08007428(0)` and then `FUN_08007428(1)`. `FUN_08021ef8` calls `FUN_0801a7c0` twice, and `FUN_08027380` calls `FUN_08021ef8`. Each `FUN_08007428` call installs the pair above and then uses the write slot for the init list. Callers that pass 0 or 1 from a live byte are `FUN_0801ad0c` (byte at `+0x10C`), `FUN_0801b880` (byte at `+0x10D`), `FUN_0801b8a8`, and `FUN_0801acde`.

SPI2 is used by `FUN_08014568`, `FUN_080217d0`, and `FUN_080218d8`. None of those addresses is stored at `0x20000C78`. The older pin notes in `re/docs/pinout.md` name two BK4829 parts and use `FUN_8000xxxx` addresses from a different export. Those names are not evidence for this pointer.

## What this path does not contain

- No dwell time, hop count, channel spacing, or PN sequence is computed from the 23-bit code on this path.
- No absolute pointer to the `FHSS CODE` string was found.
- No direct branch to `FUN_0801fdfc` was found.
- The indirect callee was not identified as a transceiver write. The four calls pass register-shaped arguments. The only stored targets do not clock those arguments onto a bus.
- `FUN_0802819c`, `FUN_0802841c`, `FUN_08027ed8`, `FUN_08028a98`, `FUN_08028fa0`, and `FUN_080291f8` add `0xA0000000` while doing arithmetic. `FUN_0802819c` reads `FPSCR`. They do not call `FUN_0800ab8c`.
- `FUN_0801c448` uses the same bit test to decide whether a value is a table index. A marked word skips the table.

## Functions

| Address | Role on this path |
| --- | --- |
| `0x08007BF0` | Apply the word at `0x20000C7C+4` |
| `0x08007C50` | Apply the word at `0x20000C7C+0x10` |
| `0x08007984` | Tone path used when the type is 0 or 1 |
| `0x0800AB8C` | Transform or marker split, then four indirect calls |
| `0x0800AD30` | Install the two function pointers |
| `0x080073A4` | Status record reached by the argument-0 write pointer |
| `0x0801B244` | Command `0x11` enters `FUN_0801e498` |
| `0x0801E498` | Copy a marked word into the live slot |
| `0x0801F910` | Learn state machine, called from `FUN_0800a77c` case 9 |
| `0x0801FDFC` | Build the 32-byte record and set bit 7 plus the `0xA0` word |
| `0x0800F3C0` | Store that 32-byte record |
| `0x0801C448` | Fill the two apply slots |
| `0x0801C60C` | Fill slot 0 and call `FUN_08007bf0` |
| `0x0801C6A8` | Live-channel program, calls `FUN_08007c50` |
| `0x0801B910` | Frequency split through the same write pointer (`0x38` / `0x39`) |
