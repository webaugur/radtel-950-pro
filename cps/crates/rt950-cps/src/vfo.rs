//! VFO A, B, and C. Reserved `cbB_FrVFOByte*` fields stay in the JSON untouched.

use eframe::egui;
use serde_json::Value;

use crate::edit;

pub fn show(ui: &mut egui::Ui, doc: &mut Value) {
    if doc.pointer("/freqModeData/vfoA").is_none() {
        edit::missing(ui, "VFO");
        return;
    }
    ui.horizontal_top(|ui| {
        let width = (ui.available_width() / 3.0).max(240.0);
        for (title, key) in [("VFO A", "vfoA"), ("VFO B", "vfoB"), ("VFO C", "vfoC")] {
            // allocate_ui keeps the parent's horizontal layout, which put every
            // field of every VFO on one row and reused the text-field ids.
            // Height 0 lets the column grow with its fields. The Global page
            // scrolls; a viewport-tall column would swallow that scroll.
            ui.allocate_ui_with_layout(
                egui::vec2(width, 0.0),
                egui::Layout::top_down(egui::Align::Min),
                |ui| {
                    ui.push_id(key, |ui| column(ui, doc, title, key));
                },
            );
        }
    });
}

fn column(ui: &mut egui::Ui, doc: &mut Value, title: &str, key: &str) {
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.heading(title);
        let Some(vfo) = doc.pointer_mut(&format!("/freqModeData/{key}")) else {
            edit::missing(ui, "VFO");
            return;
        };
        ui.push_id(key, |ui| {
            edit::text_at(ui, key, "RX MHz", vfo, "tB_RxFreq");
            edit::text_at(ui, key, "RX tone", vfo, "cbB_RxQT");
            edit::text_at(ui, key, "TX tone", vfo, "cbB_TxQT");
            edit::combo(ui, key, "Busy lock", vfo, "cbB_BusyLockout", edit::ON_OFF);
            edit::combo(
                ui,
                key,
                "Offset dir",
                vfo,
                "cbB_OffsetDir",
                edit::OFFSET_DIR,
            );
            edit::text_at(ui, key, "Offset MHz", vfo, "tB_OffsetFreq");
            edit::drag(ui, "Signalling", vfo, "cbB_SignallingGroup", 0..=255);
            edit::combo(ui, key, "Power", vfo, "cbB_TxPower", edit::POWER);
            edit::combo(ui, key, "Scramble", vfo, "cbB_Scram", edit::ON_OFF);
            edit::combo(ui, key, "Bandwidth", vfo, "cbB_BandWide", edit::BANDWIDTH);
            edit::combo(ui, key, "Encrypt", vfo, "cbB_Encrypt", edit::ON_OFF);
            edit::combo(ui, key, "RX mode", vfo, "cbB_RxModulation", edit::MODE);
            edit::combo(ui, key, "Learn FHSS", vfo, "cbB_LearnFHSS", edit::ON_OFF);
            edit::combo(ui, key, "Band", vfo, "cbB_FreqBand", edit::FREQ_BAND);
            edit::combo(ui, key, "Step", vfo, "cbB_StepFreq", edit::STEP);
        });
    });
}
