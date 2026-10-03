# CPS teardown (RT-950 Pro / BT-9000 family)

_Last updated: 2026-07-11_

## Community alternative (linked)

Day-to-day codeplug editing without OEM CPS:  
**[cruzerdlc/RT-950-950Pro-Editor](https://github.com/cruzerdlc/RT-950-950Pro-Editor)** — vendored here as submodule [`RT-950-950Pro-Editor/`](RT-950-950Pro-Editor/).  
Overview: [`community-cps-editor.md`](community-cps-editor.md).

This teardown still documents **OEM** CPS for protocol RE (frame layout / EEPROM map for Linux automation).

## What CPS is (and is not)

| Software | Role |
|----------|------|
| **RT-950PRO CPS** (v1.0.5, v1.3.3) | Channel / config programming UI over **serial** |
| **RT-950 EnCPS** (v1.2.2) | Same family (`BT-9000_CPS.exe`) — English packaging |
| **RT-950 EnUPDATE** | Separate flasher for **MCU firmware `.BTF`** (not CPS) |
| **RT-950/950Pro Editor** (community) | Open alternative CPS — see submodule above |

**CPS does not contain MCU firmware images.** No `.BTF` / Cortex-M vector table is embedded. High-entropy blobs inside the EXEs are **Costura-compressed UI DLLs** (`devcomponents.dotnetbar2`), not radio flash.

Firmware lives only in the update packages (e.g. `RT_950Pro_V0.29_*.BTF`).

## Package anatomy

### Installers (Inno Setup 5.5.x / 5.6.0)

```bash
sudo apt-get install -y innoextract
innoextract -d out RT-950PRO_CPS_Setup_v1.3.3.exe
# → app/BT-RT950PRO_CPS.exe
# → app/en/*.resources.dll  (+ zh-Hant in 1.3.3)
```

| Version | Installer | App |
|---------|-----------|-----|
| 1.3.3 | `CPS_v1.3.3/RT-950PRO_CPS_Setup_v1.3.3.exe` | `BT-RT950PRO_CPS.exe` (~3.0 MB) |
| 1.0.5 | RAR → same layout | `BT-RT950PRO_CPS.exe` (~2.9 MB) |
| EnCPS 1.2.2 | `EnCPS_v1.2.2/…exe` | `BT-9000_CPS.exe` (~2.9 MB) |

All are **PE32 .NET / WinForms** assemblies, namespace **`KDH`** (KDH Co., Ltd. strings; copyright 2025).

### Costura embeds (not firmware)

- `costura.costura.dll.compressed`
- `costura.devcomponents.dotnetbar2.dll.compressed` (~2 MB → ~5.4 MB DLL)

Extracted with `monodis --mresources` + raw deflate (`wbits=-15`).

### Decompile artifacts (this repo)

| Path | Content |
|------|---------|
| `re/cps/il/BT-RT950PRO_CPS_v1.3.3.il` | Full `monodis` IL (~3.3 MB) |
| `re/cps/il/BT-9000_CPS_EnCPS_v1.2.2.il` | EnCPS IL |
| `re/cps/typedefs_v1.3.3.txt` | Type list |
| `re/cps/resources/` | WinForms `.resources` + costura blobs |
| `re/cps/extracted/BT-RT950PRO_CPS.exe` | App binary |

```bash
monodis --output=out.il BT-RT950PRO_CPS.exe
monodis --mresources BT-RT950PRO_CPS.exe   # run in empty dir
```

---

## Architecture (CPS 1.3.3)

### UI / domain types

| Type | Purpose |
|------|---------|
| `KDH.FormMain` | Main window; owns `RadioData`, Read/Write menus |
| `KDH.RadioData` | Root serializable blob (BinaryFormatter file save) |
| `KDH.ChannelData` | `Channel[]` + zone name array |
| `KDH.Channel` | Single memory channel |
| `KDH.FreqModeData` / `VFOData` | VFO A/B/C bands, steps, offsets |
| `KDH.FunConfigData` | Radio function config (large field set) |
| `KDH.DTMFData` | DTMF |
| `KDH.ModulationData` | AM/FM/SSB-related |
| `KDH.APRSData` | APRS + GPS UI switches |
| `KDH.ChirpCsvHelper` / `ChirpChannel` | Import/export Chirp CSV |
| `KDH.RWDataOperation` | **Read/write radio over serial** |
| `KDH.ImportBmpOperation` | Boot logo / bitmap upload (1 KiB packages) |
| `KDH.SerialPortHelper` | Open/close COM port |
| `KDH.View.Form*` | APRS, DTMF, FunConfig, FreqMode, Modulation, SerialPort, … |

### `Channel` fields (logical codeplug entry)

```
rxFreq, txFreq          string
rxQT, txQT              string  (default "OFF")
signallingGroup         int
pttId                   int
txPower                 int
scram                   int
learnFHSS               int
bandWide                int
encrypt                 int
busyLockout             int
scanAdd                 int     (default 1)
rxModulation            int
fhssCode                string
chName                  string
```

### `RadioData` (file format)

```
channelData      ChannelData
freqModeData     FreqModeData
funConfigData    FunConfigData
dtmfData         DTMFData
modulationData   ModulationData
aprsData         APRSData
```

Saved with **`BinaryFormatter`** (`SaveToFile` / `CreatObjFromFile`) — CPS project files are .NET binary serialization, **not** raw EEPROM dumps.

---

## Serial protocol (codeplug R/W) — different from MCU firmware flash

Firmware update (`EnUPDATE` / `radtel_flash.py`) uses USB CDC framing (`0xAA`…`0x55`).

**CPS radio R/W** uses a **simpler command set** on a classic serial port:

### Enums (`COMMAND_TYPE`)

| Name | Value | Role |
|------|-------|------|
| `Fram_Header` | **0xA5** | Frame marker |
| `Cmd_Handshake` | **0x02** | Handshake |
| `Cmd_SetAddress` | **0x03** | Set EEPROM/address pointer |
| `Cmd_Erase` | **0x04** | Erase |
| `Cmd_WriteData` | **0x57** (`'W'`) | Write payload |
| `Cmd_Over` | **0x06** | Complete / ACK-style |

### State machines

- **`STATE`**: HandShakeStep1–5, ReadStep1–2, WriteStep1–2  
- **`IMPORT_STEP`**: handshake jumps, set image address, erase, write, receive, over (bitmap path)  
- **`OPERATION_TYPE`**: READ / WRITE  
- **`OPERATION_RESULT`**: AUTHOK, COMMOK, MODELERR, TOOVER, MANCANC, EXCABORT  

### Constants

| Symbol | Value | Notes |
|--------|-------|-------|
| Handshake string | **`PROGRAMBT9000U`** | Same family as firmware updater ASCII |
| Model code | **`RT-950`** | Model check / auth |
| Default baud (observed) | **115200** | Set in IL near open |
| Bitmap package size | **1024** bytes | `ImportBmpOperation.bytesPerPackage` |
| Bitmap block | **64 × 1024 = 64 KiB** | erase block helper |

Handshake and model are **ASCII** (`Encoding.GetBytes`), not FwCrypt.

### Features called out in version notes (strings)

- Channel division / zones  
- Zone name edit  
- **Chirp CSV** import/export  
- AM step frequency tab  
- Menu/toolbar event fixes  

---

## Relation to MCU firmware RE

| Concern | CPS | MCU `.BTF` |
|---------|-----|------------|
| Channels / tones / APRS config | Yes | Stored in radio memory; CPS maps fields ↔ wire format in `RWDataOperation` |
| App UI / LCD firmware | No | `decrypted_v0.29.bin` |
| Flashing app image | No (use EnUPDATE) | Yes |

**Next RE step on CPS:** walk `RWDataOperation.HandShake` / `ReadRadioData` / `WriteRadioData` in the IL (or a C# decompiler) to document exact frame layout (header 0xA5, length, address, payload, checksum) and EEPROM map for Chirp-compatible tools.

---

## Quick reproduce

```bash
# From repo root
innoextract -d /tmp/cps "re/cps/oem/CPS_v1.3.3/RT-950PRO_CPS_Setup_v1.3.3.exe"
monodis --output=/tmp/cps.il /tmp/cps/app/BT-RT950PRO_CPS.exe
# See also re/cps/
```
