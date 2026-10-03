//! Channel zones. This radio stores 10 zones of 99 channels.
//! Older files can still carry a different count; the split follows the name list.

use eframe::egui;
use serde_json::{json, Value};

use crate::edit;

const FM: egui::Color32 = egui::Color32::from_rgb(92, 184, 120);
const AM: egui::Color32 = egui::Color32::from_rgb(90, 150, 210);

pub fn show(ui: &mut egui::Ui, doc: &mut Value, zone: &mut usize, selected: &mut Option<usize>) {
    let names = zone_names(doc);
    if names.is_empty() {
        edit::missing(ui, "zones");
        return;
    }
    let per = per_zone(doc);
    if *zone >= names.len() {
        *zone = 0;
    }
    let total = channel_count(doc);
    let start = *zone * per;
    let end = (start + per).min(total);
    if selected.is_none_or(|idx| idx < start || idx >= end) {
        *selected = (start < end).then_some(start);
    }
    let cur = selected.unwrap_or(start);

    egui::ScrollArea::horizontal()
        .id_salt("zone-tabs")
        .show(ui, |ui| {
            ui.horizontal(|ui| {
                for (index, name) in names.iter().enumerate() {
                    let label = if name.is_empty() {
                        format!("Zone {}", index + 1)
                    } else {
                        name.clone()
                    };
                    if ui
                        .add(egui::Button::selectable(*zone == index, label))
                        .clicked()
                    {
                        *zone = index;
                        *selected = Some(index * per);
                    }
                }
            });
        });
    ui.add_space(6.0);

    let rx = field_str(doc, cur, "rxFreq");
    let ch_name = field_str(doc, cur, "chName");
    let (mode, color) = mode_mark(field_i64(doc, cur, "rxModulation"));
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.horizontal(|ui| {
            let shown = if rx.is_empty() { "—".to_string() } else { rx };
            ui.label(egui::RichText::new(shown).size(40.0).strong());
            ui.label(egui::RichText::new("MHz").size(16.0));
            ui.add_space(18.0);
            ui.label(egui::RichText::new(mode).size(22.0).color(color).strong());
            ui.add_space(12.0);
            if !ch_name.is_empty() {
                ui.label(egui::RichText::new(ch_name).size(22.0));
            }
        });
        ui.add_space(4.0);
        if let Some(slot) = doc.pointer_mut(&format!("/channelData/arrayZoneName/{zone}")) {
            let mut buf = slot.as_str().unwrap_or("").to_string();
            ui.horizontal(|ui| {
                ui.label("Zone name");
                if ui
                    .add(
                        egui::TextEdit::singleline(&mut buf)
                            .id_salt(("zone-rename", *zone))
                            .desired_width(220.0)
                            .hint_text("zone name"),
                    )
                    .changed()
                {
                    *slot = json!(buf);
                }
            });
        }
    });

    ui.add_space(8.0);
    let width = ui.available_width();
    ui.horizontal_top(|ui| {
        ui.vertical(|ui| {
            ui.set_width((width - 330.0).max(280.0));
            let title = names.get(*zone).map(String::as_str).unwrap_or("Zone");
            ui.label(
                egui::RichText::new(format!(
                    "{title}  ·  {} channels",
                    end.saturating_sub(start)
                ))
                .strong(),
            );
            let height = ui.available_height();
            egui::ScrollArea::vertical()
                .id_salt("zone-channels")
                .max_height(height)
                .show(ui, |ui| {
                    for idx in start..end {
                        if channel_row(ui, doc, idx, cur, idx - start + 1) {
                            *selected = Some(idx);
                        }
                    }
                });
        });
        ui.vertical(|ui| {
            ui.set_width(320.0);
            let height = ui.available_height();
            egui::ScrollArea::vertical()
                .id_salt("channel-editor")
                .max_height(height)
                .show(ui, |ui| editor(ui, doc, cur));
        });
    });
}

fn editor(ui: &mut egui::Ui, doc: &mut Value, idx: usize) {
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.label(egui::RichText::new(format!("Channel {}", idx + 1)).strong());
        let Some(ch) = doc.pointer_mut(&format!("/channelData/channelList/{idx}")) else {
            ui.label("Channel missing.");
            return;
        };
        let salt = format!("ch{idx}");
        edit::text_at(ui, &salt, "Name", ch, "chName");
        edit::text_at(ui, &salt, "RX MHz", ch, "rxFreq");
        edit::text_at(ui, &salt, "TX MHz", ch, "txFreq");
        edit::text_at(ui, &salt, "RX tone", ch, "rxQT");
        edit::text_at(ui, &salt, "TX tone", ch, "txQT");
        edit::combo(ui, &salt, "Power", ch, "txPower", edit::POWER);
        edit::combo(ui, &salt, "Bandwidth", ch, "bandWide", edit::BANDWIDTH);
        // An old AM+transmit flag (3) locks out PTT. Editing the channel
        // stores FM transmit (2). The radio has no AM transmitter.
        if ch.get("rxModulation").and_then(|v| v.as_i64()) == Some(3) {
            ch["rxModulation"] = json!(edit::channel_flag(true, false));
        }
        edit::combo(ui, &salt, "Mode", ch, "rxModulation", edit::CHANNEL_MODE);
        if ch.get("rxModulation").and_then(|v| v.as_i64()) == Some(2) {
            ui.label("Transmit: FM");
        }
        edit::combo(ui, &salt, "Scan", ch, "scanAdd", &[(0, "Skip"), (1, "Add")]);
        edit::combo(ui, &salt, "PTT ID", ch, "pttId", edit::PTT_ID);
        edit::combo(ui, &salt, "Scramble", ch, "scram", edit::ON_OFF);
        edit::combo(ui, &salt, "Learn FHSS", ch, "learnFHSS", edit::ON_OFF);
        edit::combo(ui, &salt, "Encrypt", ch, "encrypt", edit::ON_OFF);
        edit::combo(ui, &salt, "Busy lock", ch, "busyLockout", edit::ON_OFF);
        edit::text_at(ui, &salt, "FHSS code", ch, "fhssCode");
        edit::drag(ui, "Signalling group", ch, "signallingGroup", 0..=255);
    });
}

fn channel_row(ui: &mut egui::Ui, doc: &Value, idx: usize, cur: usize, local: usize) -> bool {
    let name = field_str(doc, idx, "chName");
    let rx = field_str(doc, idx, "rxFreq");
    let (mode, color) = mode_mark(field_i64(doc, idx, "rxModulation"));
    let slot = format!("{local:>3}");
    let (rect, response) =
        ui.allocate_exact_size(egui::vec2(ui.available_width(), 26.0), egui::Sense::click());
    let painter = ui.painter();
    if cur == idx {
        painter.rect_filled(
            rect,
            egui::CornerRadius::same(4),
            color.gamma_multiply(0.28),
        );
    } else if idx % 2 == 1 {
        painter.rect_filled(rect, egui::CornerRadius::ZERO, ui.visuals().faint_bg_color);
    }
    let text = format!("{slot}   {rx:<12}  {mode:<4}  {name}");
    painter.text(
        rect.left_center() + egui::vec2(8.0, 0.0),
        egui::Align2::LEFT_CENTER,
        text,
        egui::FontId::monospace(14.0),
        ui.visuals().text_color(),
    );
    response.clicked()
}

fn mode_mark(mode: i64) -> (&'static str, egui::Color32) {
    match mode {
        1 | 3 => ("AM", AM),
        _ => ("FM", FM),
    }
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

pub fn channel_count(doc: &Value) -> usize {
    doc.pointer("/channelData/channelList")
        .and_then(|v| v.as_array())
        .map(|a| a.len())
        .unwrap_or(0)
}

pub fn per_zone(doc: &Value) -> usize {
    let n = channel_count(doc);
    let z = zone_names(doc).len().max(1);
    if n == 0 {
        0
    } else {
        n / z
    }
}

fn field_str(doc: &Value, idx: usize, key: &str) -> String {
    doc.pointer(&format!("/channelData/channelList/{idx}/{key}"))
        .and_then(|v| v.as_str())
        .unwrap_or("")
        .to_string()
}

fn field_i64(doc: &Value, idx: usize, key: &str) -> i64 {
    doc.pointer(&format!("/channelData/channelList/{idx}/{key}"))
        .and_then(|v| v.as_i64())
        .unwrap_or(0)
}

#[cfg(test)]
mod tests {
    use super::per_zone;
    use serde_json::json;

    #[test]
    fn ten_zones_of_ninety_nine() {
        let mut names = Vec::new();
        for i in 1..=10 {
            names.push(json!(format!("Z{i}")));
        }
        let doc = json!({
            "channelData": {
                "arrayZoneName": names,
                "channelList": vec![json!({}); 990],
            }
        });
        assert_eq!(per_zone(&doc), 99);
    }
}
