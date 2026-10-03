//! Channel zones. This radio stores 10 zones of 99 channels.
//! Older files can still carry a different count; the split follows the name list.

use eframe::egui;
use serde_json::{json, Value};

use crate::edit;
use crate::scope;

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
    let tuned_idx = cur;

    let rx = field_str(doc, cur, "rxFreq");
    let ch_name = field_str(doc, cur, "chName");
    let tuned = scope::tuned_mhz(&rx);
    let mark = tuned.map(scope::service_at).unwrap_or(scope::Mark {
        name: "—",
        color: scope::OTHER,
    });
    let freqs: Vec<f64> = (start..end)
        .filter_map(|idx| scope::tuned_mhz(&field_str(doc, idx, "rxFreq")))
        .collect();
    let (lo, hi) = scope::zone_window(&freqs);
    let mut clicked: Option<f64> = None;
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.horizontal(|ui| {
            let shown = match tuned {
                Some(mhz) => format!("{mhz:.3}"),
                None => "—".to_string(),
            };
            ui.label(egui::RichText::new(shown).size(40.0).strong());
            ui.vertical(|ui| {
                ui.label(egui::RichText::new("MHz").size(16.0));
                if !rx.is_empty() {
                    ui.label(egui::RichText::new(rx).weak());
                }
            });
            ui.add_space(18.0);
            ui.label(
                egui::RichText::new(mark.name)
                    .size(22.0)
                    .color(mark.color)
                    .strong(),
            );
            ui.add_space(12.0);
            if !ch_name.is_empty() {
                ui.label(egui::RichText::new(ch_name).size(22.0));
            }
        });
        ui.add_space(6.0);
        let spans = scope::channel_spans();
        clicked = scope::dial(ui, tuned, lo, hi, &spans);
        ui.add_space(4.0);
        ui.horizontal(|ui| {
            for (color, label) in scope::legend(lo, hi) {
                scope::swatch(ui, color, label);
                ui.add_space(10.0);
            }
        });
    });
    if let Some(mhz) = clicked {
        if let Some(ch) = doc.pointer_mut(&format!("/channelData/channelList/{tuned_idx}")) {
            let rx_now = ch.get("rxFreq").and_then(|v| v.as_str()).unwrap_or("");
            let tx_now = ch.get("txFreq").and_then(|v| v.as_str()).unwrap_or("");
            let (rx_next, tx_next) = scope::tune_pair(rx_now, tx_now, mhz);
            ch["rxFreq"] = json!(rx_next);
            ch["txFreq"] = json!(tx_next);
        }
    }

    ui.add_space(8.0);
    let gap = ui.spacing().item_spacing.x;
    let editor_w = 320.0;
    let total_w = ui.available_width();
    let left_w = (total_w - gap - editor_w).max(280.0);
    let right_w = (total_w - gap - left_w).max(0.0);
    ui.horizontal_top(|ui| {
        ui.vertical(|ui| {
            ui.set_width(left_w);
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
            let start = *zone * per;
            let end = (start + per).min(total);
            if selected.is_none_or(|idx| idx < start || idx >= end) {
                *selected = (start < end).then_some(start);
            }
            let cur = selected.unwrap_or(start);
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
            ui.set_width(right_w);
            let start = *zone * per;
            let end = (start + per).min(total);
            if selected.is_none_or(|idx| idx < start || idx >= end) {
                *selected = (start < end).then_some(start);
            }
            let cur = selected.unwrap_or(start);
            let height = ui.available_height();
            egui::ScrollArea::vertical()
                .id_salt("channel-editor")
                .auto_shrink([false, true])
                .max_height(height)
                .show(ui, |ui| editor(ui, doc, cur, *zone, right_w));
        });
    });
}

fn editor(ui: &mut egui::Ui, doc: &mut Value, idx: usize, zone: usize, width: f32) {
    let frame = egui::Frame::group(ui.style());
    let chrome = frame.inner_margin.sum().x
        + frame.stroke.width * 2.0
        + frame.outer_margin.sum().x;
    let inner = (width - chrome).max(0.0);
    frame.show(ui, |ui| {
        ui.set_min_width(inner);
        if let Some(slot) = doc.pointer_mut(&format!("/channelData/arrayZoneName/{zone}")) {
            let mut buf = slot.as_str().unwrap_or("").to_string();
            ui.label("Zone name");
            if ui
                .add(
                    egui::TextEdit::singleline(&mut buf)
                        .id_salt(("zone-rename", zone))
                        .desired_width(inner)
                        .hint_text("zone name"),
                )
                .changed()
            {
                *slot = json!(buf);
            }
            ui.add_space(6.0);
        }
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
    let tuned = scope::tuned_mhz(&rx);
    let mark = tuned.map(scope::service_at).unwrap_or(scope::Mark {
        name: "—",
        color: scope::OTHER,
    });
    let freq = match tuned {
        Some(mhz) => format!("{mhz:7.3}"),
        None => "      —".to_string(),
    };
    let slot = format!("{local:>3}");
    let (rect, response) =
        ui.allocate_exact_size(egui::vec2(ui.available_width(), 26.0), egui::Sense::click());
    let painter = ui.painter();
    if cur == idx {
        painter.rect_filled(
            rect,
            egui::CornerRadius::same(4),
            mark.color.gamma_multiply(0.28),
        );
    } else if idx % 2 == 1 {
        painter.rect_filled(rect, egui::CornerRadius::ZERO, ui.visuals().faint_bg_color);
    }
    let text = format!("{slot}   {freq}   {:<8}   {name}", mark.name);
    painter.text(
        rect.left_center() + egui::vec2(8.0, 0.0),
        egui::Align2::LEFT_CENTER,
        text,
        egui::FontId::monospace(14.0),
        ui.visuals().text_color(),
    );
    response.clicked()
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
