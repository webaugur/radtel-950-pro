//! Small editors for integer, text, and choice fields in the codeplug JSON.

use eframe::egui;
use serde_json::{json, Value};

pub fn missing(ui: &mut egui::Ui, what: &str) {
    ui.label(format!("This codeplug has no {what} block."));
}

pub fn combo(
    ui: &mut egui::Ui,
    salt: &str,
    label: &str,
    obj: &mut Value,
    key: &str,
    choices: &[(i64, &str)],
) {
    let Some(cur) = obj.get(key).and_then(|v| v.as_i64()) else {
        return;
    };
    let shown = choices
        .iter()
        .find(|(n, _)| *n == cur)
        .map(|(_, name)| (*name).to_string())
        .unwrap_or_else(|| cur.to_string());
    ui.horizontal(|ui| {
        ui.label(label);
        egui::ComboBox::from_id_salt(format!("{salt}-{key}"))
            .width(180.0)
            .selected_text(shown)
            .show_ui(ui, |ui| {
                for (n, name) in choices {
                    if ui.selectable_label(cur == *n, *name).clicked() {
                        obj[key] = json!(*n);
                    }
                }
            });
    });
}

pub fn text(ui: &mut egui::Ui, label: &str, obj: &mut Value, key: &str) {
    text_at(ui, key, label, obj, key);
}

/// `salt` keeps two rows with the same field name from sharing one edit buffer.
pub fn text_at(ui: &mut egui::Ui, salt: &str, label: &str, obj: &mut Value, key: &str) {
    let Some(cur) = obj.get(key).and_then(|v| v.as_str()) else {
        return;
    };
    let mut buf = cur.to_string();
    ui.horizontal(|ui| {
        ui.label(label);
        let response = ui.add(
            egui::TextEdit::singleline(&mut buf)
                .id_salt(format!("{salt}/{key}"))
                .desired_width(180.0),
        );
        if response.changed() {
            obj[key] = json!(buf);
        }
    });
}

pub fn drag(
    ui: &mut egui::Ui,
    label: &str,
    obj: &mut Value,
    key: &str,
    range: std::ops::RangeInclusive<i32>,
) {
    let Some(cur) = obj.get(key).and_then(|v| v.as_i64()) else {
        return;
    };
    let mut n = cur as i32;
    ui.horizontal(|ui| {
        ui.label(label);
        if ui.add(egui::DragValue::new(&mut n).range(range)).changed() {
            obj[key] = json!(n);
        }
    });
}

pub const ON_OFF: &[(i64, &str)] = &[(0, "OFF"), (1, "ON")];

pub const POWER: &[(i64, &str)] = &[(0, "High"), (1, "Mid"), (2, "Low")];

pub const BANDWIDTH: &[(i64, &str)] = &[(0, "Wide"), (1, "Narrow")];

pub const MODE: &[(i64, &str)] = &[(0, "FM"), (1, "AM"), (2, "SSB")];

/// Memory-channel flag. The transmitter is FM on every band, so a
/// transmitting channel is 2. Value 3 (AM + transmit) is rejected by the
/// radio and is not a choice here.
pub const CHANNEL_MODE: &[(i64, &str)] = &[
    (2, "FM"),
    (0, "FM receive only"),
    (1, "AM receive only"),
];

/// Stored channel flag. Transmit on is always FM (`2`). Never returns 3.
pub fn channel_flag(transmit: bool, receive_am: bool) -> i64 {
    if transmit {
        return 2;
    }
    if receive_am {
        1
    } else {
        0
    }
}

pub const OFFSET_DIR: &[(i64, &str)] = &[(0, "None"), (1, "Plus"), (2, "Minus")];

pub const FREQ_BAND: &[(i64, &str)] = &[(0, "VHF"), (1, "UHF")];

pub const STEP: &[(i64, &str)] = &[
    (0, "2.5 kHz"),
    (1, "5 kHz"),
    (2, "6.25 kHz"),
    (3, "8.33 kHz"),
    (4, "10 kHz"),
    (5, "12.5 kHz"),
    (6, "25 kHz"),
    (7, "50 kHz"),
    (8, "100 kHz"),
];

pub const SQL: &[(i64, &str)] = &[
    (0, "OFF"),
    (1, "Level 1"),
    (2, "Level 2"),
    (3, "Level 3"),
    (4, "Level 4"),
    (5, "Level 5"),
    (6, "Level 6"),
    (7, "Level 7"),
    (8, "Level 8"),
    (9, "Level 9"),
];

pub const SAVE: &[(i64, &str)] = &[(0, "OFF"), (1, "Normal"), (2, "Super"), (3, "Deep")];

pub const VOX_LEVEL: &[(i64, &str)] = &[
    (0, "Level 1"),
    (1, "Level 2"),
    (2, "Level 3"),
    (3, "Level 4"),
    (4, "Level 5"),
    (5, "Level 6"),
    (6, "Level 7"),
    (7, "Level 8"),
    (8, "Level 9"),
];

pub const BACKLIGHT: &[(i64, &str)] = &[
    (0, "OFF"),
    (1, "5 sec"),
    (2, "10 sec"),
    (3, "15 sec"),
    (4, "20 sec"),
    (5, "30 sec"),
    (6, "1 min"),
    (7, "2 min"),
    (8, "3 min"),
];

pub const LANGUAGE: &[(i64, &str)] = &[(0, "English"), (1, "中文")];

pub const SCAN: &[(i64, &str)] = &[(0, "TO"), (1, "CO"), (2, "SE")];

pub const ID_DELAY: &[(i64, &str)] = &[
    (0, "0 ms"),
    (1, "100 ms"),
    (2, "200 ms"),
    (3, "400 ms"),
    (4, "600 ms"),
    (5, "800 ms"),
    (6, "1000 ms"),
];

pub const DISPLAY: &[(i64, &str)] = &[(0, "Name"), (1, "Frequency"), (2, "Channel number")];

pub const WORK: &[(i64, &str)] = &[(0, "VFO"), (1, "Channel")];

pub const DTMF_ST: &[(i64, &str)] = &[(0, "OFF"), (1, "DT-ST"), (2, "ANI-ST"), (3, "DT+ANI")];

pub const PTT_ID: &[(i64, &str)] = &[(0, "OFF"), (1, "BOT"), (2, "EOT"), (3, "Both")];

pub const SIDE_KEY: &[(i64, &str)] = &[
    (0, "Radio"),
    (1, "Moni"),
    (2, "Scan"),
    (3, "Search"),
    (4, "SOS"),
    (5, "Spectrum"),
    (6, "Beacon TX"),
];

/// PF1 short adds PTTC after Beacon TX. The radio menu lists that eighth
/// choice on PF1 only. Long press and PF2 stay on SIDE_KEY.
pub const PF1_SHORT: &[(i64, &str)] = &[
    (0, "Radio"),
    (1, "Moni"),
    (2, "Scan"),
    (3, "Search"),
    (4, "SOS"),
    (5, "Spectrum"),
    (6, "Beacon TX"),
    (7, "PTTC"),
];

pub const LONG_KEY: &[(i64, &str)] = &[
    (0, "None"),
    (1, "Radio"),
    (2, "VOX"),
    (3, "Search"),
    (4, "Spectrum"),
    (5, "NOAA"),
    (6, "Scan QT"),
    (7, "Squelch"),
    (8, "Freq step"),
    (9, "TX power"),
    (10, "CH memory"),
    (11, "Zone select"),
    (12, "Standby set"),
    (13, "CTCSS/DCS"),
    (14, "Freq offset"),
    (15, "Freq dir"),
    (16, "RX modulation"),
    (17, "Tone TX"),
    (18, "Transfer"),
    (19, "GPS"),
    (20, "APRS"),
    (21, "Roger"),
];

pub const R_TONE: &[(i64, &str)] = &[
    (0, "1000 Hz"),
    (1, "1450 Hz"),
    (2, "1750 Hz"),
    (3, "2100 Hz"),
];

pub const SSB_BW: &[(i64, &str)] = &[
    (0, "0.5 kHz"),
    (1, "1.0 kHz"),
    (2, "1.2 kHz"),
    (3, "2.2 kHz"),
    (4, "3.0 kHz"),
    (5, "4.0 kHz"),
];

pub const SSB_STEP: &[(i64, &str)] = &[
    (0, "1 kHz"),
    (1, "5 kHz"),
    (2, "10 kHz"),
    (3, "100 kHz"),
    (4, "500 kHz"),
    (5, "1000 kHz"),
];

pub const AM_STEP: &[(i64, &str)] = &[(0, "1 kHz"), (1, "10 kHz"), (2, "100 kHz")];

pub const RX_GAIN: &[(i64, &str)] = &[(0, "AGC"), (1, "Local"), (2, "DX")];

pub const MOD_WORK: &[(i64, &str)] = &[(0, "VFO"), (1, "Channel")];

pub const MOD_MODE: &[(i64, &str)] = &[(0, "FM"), (1, "AM"), (2, "USB"), (3, "LSB")];

/// 0.5 s through 2.0 s in 0.1 s steps. Stored 5 is 1.0 s on the OEM screen.
pub const VOX_DELAY: &[(i64, &str)] = &[
    (0, "0.5 s"),
    (1, "0.6 s"),
    (2, "0.7 s"),
    (3, "0.8 s"),
    (4, "0.9 s"),
    (5, "1.0 s"),
    (6, "1.1 s"),
    (7, "1.2 s"),
    (8, "1.3 s"),
    (9, "1.4 s"),
    (10, "1.5 s"),
    (11, "1.6 s"),
    (12, "1.7 s"),
    (13, "1.8 s"),
    (14, "1.9 s"),
    (15, "2.0 s"),
];

pub const ALARM_MODE: &[(i64, &str)] = &[(0, "On site"), (1, "Send sound"), (2, "Send code")];

pub const POWER_MSG: &[(i64, &str)] = &[(0, "Preset icons"), (1, "Battery voltage")];

pub const SUBAUDIO_SAVE: &[(i64, &str)] = &[(0, "All"), (1, "Decoder"), (2, "Encoder")];

/// UTC−12 at 0. Stored 13 is UTC+1 on the OEM APRS screen for the Florida codeplug.
pub const TIME_ZONE: &[(i64, &str)] = &[
    (0, "UTC-12"),
    (1, "UTC-11"),
    (2, "UTC-10"),
    (3, "UTC-9"),
    (4, "UTC-8"),
    (5, "UTC-7"),
    (6, "UTC-6"),
    (7, "UTC-5"),
    (8, "UTC-4"),
    (9, "UTC-3"),
    (10, "UTC-2"),
    (11, "UTC-1"),
    (12, "UTC+0"),
    (13, "UTC+1"),
    (14, "UTC+2"),
    (15, "UTC+3"),
    (16, "UTC+4"),
    (17, "UTC+5"),
    (18, "UTC+6"),
    (19, "UTC+7"),
    (20, "UTC+8"),
    (21, "UTC+9"),
    (22, "UTC+10"),
    (23, "UTC+11"),
    (24, "UTC+12"),
];

pub const LAT_UNIT: &[(i64, &str)] = &[
    (0, "Degrees"),
    (1, "Degrees and minutes"),
    (2, "Degrees, minutes, seconds"),
];

pub const SPEED_UNIT: &[(i64, &str)] = &[(0, "Km/Hour"), (1, "Knots"), (2, "Miles/Hour")];

pub const DISTANCE_UNIT: &[(i64, &str)] = &[(0, "Km"), (1, "Nautical mile"), (2, "Mile")];

pub const ALT_UNIT: &[(i64, &str)] = &[(0, "Meter"), (1, "Foot")];

pub const HEMISPHERE_NS: &[(i64, &str)] = &[(0, "N"), (1, "S")];

/// Florida codeplug stores 0 and the OEM screen shows W.
pub const HEMISPHERE_EW: &[(i64, &str)] = &[(0, "W"), (1, "E")];

pub const APRS_PATH: &[(i64, &str)] = &[
    (0, "OFF"),
    (1, "WIDE1-1"),
    (2, "WIDE1-1,WIDE2-1"),
    (3, "PATH1"),
    (4, "PATH2"),
];

pub const APRS_FORWARD_PATH: &[(i64, &str)] = &[
    (0, "OFF"),
    (1, "WIDE1-1"),
    (2, "WIDE1-1,WIDE2-1"),
    (3, "PATH1"),
];

pub const SITE_TYPE: &[(i64, &str)] = &[(0, "Fixed coordinates"), (1, "GPS")];

pub const APRS_SYMBOL: &[(i64, &str)] = &[
    (0, "Pedestrian"),
    (1, "Bicycle"),
    (2, "Car"),
    (3, "Recreational vehicle"),
    (4, "User defined"),
];

pub const APRS_CHANNEL: &[(i64, &str)] = &[(0, "CH/VFO A"), (1, "CH/VFO B"), (2, "CH/VFO C")];

pub const APRS_PRIORITY: &[(i64, &str)] = &[(0, "Call"), (1, "APRS")];

pub const BEACON_TYPE: &[(i64, &str)] =
    &[(0, "Manually send"), (1, "Timed send"), (2, "SmartBeacon")];

pub const BEACON_TIME: &[(i64, &str)] = &[
    (0, "30 sec"),
    (1, "1 min"),
    (2, "2 min"),
    (3, "3 min"),
    (4, "5 min"),
    (5, "10 min"),
    (6, "15 min"),
    (7, "20 min"),
    (8, "30 min"),
    (9, "60 min"),
];

pub const MICE: &[(i64, &str)] = &[
    (0, "Off duty"),
    (1, "En route"),
    (2, "In service"),
    (3, "Returning"),
    (4, "Committed"),
    (5, "Special"),
    (6, "Priority"),
    (7, "Emergency"),
];

pub const TNC: &[(i64, &str)] = &[(0, "OFF"), (1, "KISS"), (2, "UI")];

pub const FORWARD_CH: &[(i64, &str)] = &[(0, "CH A"), (1, "CH B"), (2, "CH A + CH B"), (3, "CH C")];

pub const WAIT_FORWARD: &[(i64, &str)] = &[
    (0, "0 sec"),
    (1, "1 sec"),
    (2, "2 sec"),
    (3, "3 sec"),
    (4, "4 sec"),
    (5, "5 sec"),
    (6, "6 sec"),
    (7, "7 sec"),
    (8, "8 sec"),
    (9, "9 sec"),
];

pub fn label_of(choices: &[(i64, &str)], value: i64) -> String {
    choices
        .iter()
        .find(|(n, _)| *n == value)
        .map(|(_, name)| (*name).to_string())
        .unwrap_or_else(|| value.to_string())
}
