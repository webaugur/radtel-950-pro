//! Optional features (`funConfigData`).
//! Reserved `FrOneByte*` / `FrTwoByte*` / `FrThreeByte*` fields stay untouched.
//!
//! Audio, Power, Keys, Display, and Zones stay as tabs inside Global.

use eframe::egui;
use serde_json::{json, Value};

use crate::edit;

const TABS: &[(u8, &str)] = &[
    (0, "Audio"),
    (1, "Power"),
    (2, "Keys"),
    (3, "Display"),
    (4, "Zones"),
];

pub fn show(ui: &mut egui::Ui, doc: &mut Value) {
    if doc.pointer("/funConfigData").is_none() {
        edit::missing(ui, "radio options");
        return;
    }
    let id = ui.id().with("radio-tab");
    let mut tab = ui.data(|data| data.get_temp::<u8>(id).unwrap_or(0));
    ui.horizontal(|ui| {
        for (item, label) in TABS {
            if ui
                .add(egui::Button::selectable(tab == *item, *label))
                .clicked()
            {
                tab = *item;
            }
        }
    });
    ui.data_mut(|data| data.insert_temp(id, tab));
    ui.add_space(6.0);

    // Natural height. Global owns the scroll, so this section must not
    // claim the rest of the window.
    match tab {
        1 => power(ui, doc),
        2 => keys(ui, doc),
        3 => display(ui, doc),
        4 => zones(ui, doc),
        _ => audio(ui, doc),
    }
}

fn audio(ui: &mut egui::Ui, doc: &mut Value) {
    let Some(fun) = doc.pointer_mut("/funConfigData") else {
        return;
    };
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new("Squelch and audio").strong());
        edit::combo(ui, "radio", "Squelch", fun, "cbB_SQL", edit::SQL);
        edit::combo(ui, "radio", "Battery save", fun, "cbB_SaveMode", edit::SAVE);
        edit::combo(ui, "radio", "VOX", fun, "cbB_VOXSwitch", edit::ON_OFF);
        edit::combo(ui, "radio", "VOX level", fun, "cbB_VOX", edit::VOX_LEVEL);
        edit::combo(
            ui,
            "radio",
            "VOX delay",
            fun,
            "cbB_VoxDelay",
            edit::VOX_DELAY,
        );
        edit::combo(ui, "radio", "Beep", fun, "cbB_BeepPrompt", edit::ON_OFF);
        edit::combo(ui, "radio", "Voice", fun, "cbB_VoicePrompt", edit::ON_OFF);
        edit::combo(
            ui,
            "radio",
            "DTMF side tone",
            fun,
            "cbB_DTMF",
            edit::DTMF_ST,
        );
        edit::combo(
            ui,
            "radio",
            "Alarm sound",
            fun,
            "cbB_AlarmSound",
            edit::ON_OFF,
        );
        edit::combo(ui, "radio", "SOS", fun, "cbB_AlarmMode", edit::ALARM_MODE);
        edit::combo(ui, "radio", "Tail", fun, "cbB_TailNoiseClear", edit::ON_OFF);
        edit::combo(
            ui,
            "radio",
            "TX tail sound",
            fun,
            "cbB_SoundTxEnd",
            edit::ON_OFF,
        );
        edit::combo(ui, "radio", "Roger tone", fun, "cbB_RTone", edit::R_TONE);
        edit::drag(ui, "RP-STE", fun, "cbB_PassRepetNoiseClear", 0..=20);
        edit::drag(ui, "RPT-RL", fun, "cbB_PassRepetNoiseDetect", 0..=20);
        ui.label(egui::RichText::new("RP-STE and RPT-RL use the stored index. 0 is OFF.").weak());
    });
}

fn power(ui: &mut egui::Ui, doc: &mut Value) {
    let Some(fun) = doc.pointer_mut("/funConfigData") else {
        return;
    };
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new("Power and lights").strong());
        edit::combo(
            ui,
            "radio",
            "Backlight",
            fun,
            "cbB_AutoBacklight",
            edit::BACKLIGHT,
        );
        edit::combo(
            ui,
            "radio",
            "Radio backlight",
            fun,
            "cbB_RadioBacklight",
            edit::ON_OFF,
        );
        edit::combo(
            ui,
            "radio",
            "Breathing light",
            fun,
            "cbB_BreathingLight",
            edit::ON_OFF,
        );
        edit::combo(
            ui,
            "radio",
            "NOAA alarm",
            fun,
            "cbB_NoaaAlarm",
            edit::ON_OFF,
        );
        edit::combo(ui, "radio", "FM radio", fun, "cbB_FMRadio", edit::ON_OFF);
        edit::combo(
            ui,
            "radio",
            "Power-on screen",
            fun,
            "cbB_PowerMsg",
            edit::POWER_MSG,
        );
        edit::drag(ui, "Power-on delay", fun, "cbB_PowerOnDelayTime", 0..=30);
        edit::drag(ui, "Menu exit", fun, "cbB_MenuExitTime", 0..=60);
        ui.label(
            egui::RichText::new(
                "Power-on delay and menu exit are stored indexes. 0 is the factory value.",
            )
            .weak(),
        );
        edit::drag(ui, "Auto keypad lock", fun, "cbB_AutoKeyLock", 0..=20);
        ui.label(egui::RichText::new("Auto keypad lock 0 is OFF.").weak());
        edit::combo(
            ui,
            "radio",
            "Keypad lock",
            fun,
            "cbB_LockKeyBoard",
            edit::ON_OFF,
        );
        edit::combo(
            ui,
            "radio",
            "BT write",
            fun,
            "cbB_BTWriteSwitch",
            edit::ON_OFF,
        );
        edit::drag(ui, "Weather channel", fun, "cbB_WeatherCH", 0..=255);
        edit::drag(ui, "Divide channel", fun, "cbB_DivideCH", 0..=255);
        ui.label(
            egui::RichText::new("Weather channel and divide channel are stored indexes.").weak(),
        );
    });
}

fn keys(ui: &mut egui::Ui, doc: &mut Value) {
    let Some(fun) = doc.pointer_mut("/funConfigData") else {
        return;
    };
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new("PTT and side keys").strong());
        ui.label("PTT A transmits band A. PTT B transmits band B.");
        edit::combo(
            ui,
            "radio",
            "PF1 short",
            fun,
            "cbB_KeySide1",
            edit::PF1_SHORT,
        );
        edit::combo(
            ui,
            "radio",
            "PF1 long",
            fun,
            "cbB_KeySide1L",
            edit::SIDE_KEY,
        );
        edit::combo(
            ui,
            "radio",
            "Side key 2 short",
            fun,
            "cbB_KeySide2",
            edit::SIDE_KEY,
        );
        edit::combo(
            ui,
            "radio",
            "Side key 2 long",
            fun,
            "cbB_KeySide2L",
            edit::SIDE_KEY,
        );
        ui.add_space(8.0);
        ui.label(egui::RichText::new("Number keys, long press").strong());
        for n in 0..10 {
            edit::combo(
                ui,
                "radio-long",
                &format!("Key {n}"),
                fun,
                &format!("cbB_Key{n}L"),
                edit::LONG_KEY,
            );
        }
    });
}

fn display(ui: &mut egui::Ui, doc: &mut Value) {
    let Some(fun) = doc.pointer_mut("/funConfigData") else {
        return;
    };
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new("Display and work mode").strong());
        edit::combo(ui, "radio", "Language", fun, "cbB_Language", edit::LANGUAGE);
        edit::combo(
            ui,
            "radio",
            "Display A",
            fun,
            "cbB_DisplayModeA",
            edit::DISPLAY,
        );
        edit::combo(
            ui,
            "radio",
            "Display B",
            fun,
            "cbB_DisplayModeB",
            edit::DISPLAY,
        );
        edit::combo(
            ui,
            "radio",
            "Display C",
            fun,
            "cbB_DisplayModeC",
            edit::DISPLAY,
        );
        edit::combo(
            ui,
            "radio",
            "Current mode",
            fun,
            "cbB_CurWorkMode",
            edit::WORK,
        );
        edit::combo(ui, "radio", "Work A", fun, "cbB_WorkModeA", edit::WORK);
        edit::combo(ui, "radio", "Work B", fun, "cbB_WorkModeB", edit::WORK);
        edit::combo(ui, "radio", "Work C", fun, "cbB_WorkModeC", edit::WORK);
        edit::combo(ui, "radio", "Standby", fun, "cbB_TDR", edit::ON_OFF);
        edit::drag(ui, "TOT", fun, "cbB_TOT", 0..=30);
        ui.label(egui::RichText::new("TOT 0 is OFF. The manual runs from 30 s to 240 s.").weak());
        edit::combo(ui, "radio", "Scan", fun, "cbB_Scan", edit::SCAN);
        edit::combo(ui, "radio", "PTT ID", fun, "cbB_PTTID", edit::PTT_ID);
        edit::combo(
            ui,
            "radio",
            "ID delay",
            fun,
            "cbB_SendIDDelay",
            edit::ID_DELAY,
        );
        edit::combo(
            ui,
            "radio",
            "Tone scan save",
            fun,
            "cbB_SubaudioScanSave",
            edit::SUBAUDIO_SAVE,
        );
        edit::combo(
            ui,
            "radio",
            "FM interrupted",
            fun,
            "cbB_RadioRxInterruption",
            edit::ON_OFF,
        );
        edit::combo(
            ui,
            "radio",
            "AB-UV transfer",
            fun,
            "cbB_ABUVTransfer",
            edit::ON_OFF,
        );
        edit::combo(
            ui,
            "radio",
            "Sound transfer",
            fun,
            "cbB_SoundTransfer",
            edit::ON_OFF,
        );
    });
}

fn zones(ui: &mut egui::Ui, doc: &mut Value) {
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new("Zone names").strong());
        ui.label(egui::RichText::new("This radio shows 10 zones, 99 channels each.").weak());
        let count = doc
            .pointer("/channelData/arrayZoneName")
            .and_then(|v| v.as_array())
            .map(|a| a.len())
            .unwrap_or(0);
        for index in 0..count {
            let Some(slot) = doc.pointer_mut(&format!("/channelData/arrayZoneName/{index}")) else {
                continue;
            };
            let mut buf = slot.as_str().unwrap_or("").to_string();
            ui.horizontal(|ui| {
                ui.label(format!("Zone {}", index + 1));
                if ui
                    .add(
                        egui::TextEdit::singleline(&mut buf)
                            .id_salt(("radio-zone", index))
                            .desired_width(220.0),
                    )
                    .changed()
                {
                    *slot = json!(buf);
                }
            });
        }
    });
    ui.add_space(8.0);
    let names = zone_names(doc);
    let Some(fun) = doc.pointer_mut("/funConfigData") else {
        return;
    };
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new("Which zone each band opens on").strong());
        zone_pick(ui, "Zone A", fun, "cbB_CurWorkZoneA", &names);
        zone_pick(ui, "Zone B", fun, "cbB_CurWorkZoneB", &names);
        zone_pick(ui, "Zone C", fun, "cbB_CurWorkZoneC", &names);
        edit::drag(ui, "VFO scan low", fun, "nUD_VfoScanRangeLow", 0..=1000);
        edit::drag(ui, "VFO scan high", fun, "nUD_VfoScanRangeHigh", 0..=1000);
    });
}

fn zone_names(doc: &Value) -> Vec<String> {
    doc.pointer("/channelData/arrayZoneName")
        .and_then(|v| v.as_array())
        .map(|names| {
            names
                .iter()
                .map(|v| v.as_str().unwrap_or("").to_string())
                .collect()
        })
        .unwrap_or_default()
}

fn zone_pick(ui: &mut egui::Ui, label: &str, fun: &mut Value, key: &str, names: &[String]) {
    let Some(cur) = fun.get(key).and_then(|v| v.as_i64()) else {
        return;
    };
    let shown = names
        .get(cur as usize)
        .map(|name| format!("{}  {name}", cur + 1))
        .unwrap_or_else(|| cur.to_string());
    ui.horizontal(|ui| {
        ui.label(label);
        egui::ComboBox::from_id_salt(format!("zone-{key}"))
            .width(180.0)
            .selected_text(shown)
            .show_ui(ui, |ui| {
                for (index, name) in names.iter().enumerate() {
                    let text = if name.is_empty() {
                        format!("Zone {}", index + 1)
                    } else {
                        format!("{}  {name}", index + 1)
                    };
                    if ui.selectable_label(cur == index as i64, text).clicked() {
                        fun[key] = json!(index);
                    }
                }
            });
    });
}
