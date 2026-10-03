//! DTMF identity and the 15 call-code groups the OEM screen edits.
//! Later `dtmfCodeGroup` entries, and the `cbB_FrByte*` holes, stay untouched.

use eframe::egui;
use serde_json::{json, Value};

use crate::edit;

pub fn show(ui: &mut egui::Ui, doc: &mut Value) {
    let Some(dtmf) = doc.pointer_mut("/dtmfData") else {
        edit::missing(ui, "DTMF");
        return;
    };
    ui.heading("DTMF");
    ui.horizontal(|ui| {
        ui.vertical(|ui| {
            ui.set_min_width(280.0);
            egui::Frame::group(ui.style()).show(ui, |ui| {
                edit::text(ui, "Current ID", dtmf, "tB_DTMFCurId");
                edit::combo(ui, "dtmf", "PTT ID", dtmf, "cbB_PTTID", edit::PTT_ID);
                // Stored 1 is 100 ms on the OEM screen, same index as Send ID Delay.
                edit::combo(
                    ui,
                    "dtmf",
                    "On time",
                    dtmf,
                    "cbB_LastTimeSend",
                    edit::ID_DELAY,
                );
                edit::combo(
                    ui,
                    "dtmf",
                    "Off time",
                    dtmf,
                    "cbB_LastTimeStop",
                    edit::ID_DELAY,
                );
            });
        });
        ui.add_space(12.0);
        ui.vertical(|ui| {
            ui.label(egui::RichText::new("Code groups").strong());
            let Some(groups) = dtmf.get_mut("dtmfCodeGroup").and_then(|v| v.as_array_mut()) else {
                edit::missing(ui, "DTMF groups");
                return;
            };
            let shown = groups.len().min(15);
            egui::Grid::new("dtmf-groups")
                .num_columns(6)
                .spacing([12.0, 6.0])
                .show(ui, |ui| {
                    for row in 0..5 {
                        for col in 0..3 {
                            let index = col * 5 + row;
                            if index >= shown {
                                ui.label("");
                                ui.label("");
                                continue;
                            }
                            ui.label(format!("{}", index + 1));
                            let mut buf = groups[index].as_str().unwrap_or("").to_string();
                            if ui
                                .add(egui::TextEdit::singleline(&mut buf).desired_width(110.0))
                                .changed()
                            {
                                groups[index] = json!(buf);
                            }
                        }
                        ui.end_row();
                    }
                });
        });
    });
}
