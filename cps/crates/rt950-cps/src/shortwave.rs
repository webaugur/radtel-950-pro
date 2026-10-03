//! FM broadcast, AM, and shortwave memories.
//!
//! FM frequencies are MHz × 100. AM and SSB frequencies are kHz.
//! Row 0 is the live frequency. Rows 1–15 are the memories.

use eframe::egui;
use serde_json::{json, Value};

use crate::edit;

#[derive(Clone, Copy, PartialEq, Eq)]
pub enum Band {
    Ssb,
    Am,
    Fm,
}

struct Mark {
    name: &'static str,
    color: egui::Color32,
}

const HAM: egui::Color32 = egui::Color32::from_rgb(92, 184, 120);
const BROADCAST: egui::Color32 = egui::Color32::from_rgb(90, 150, 210);
const AERO: egui::Color32 = egui::Color32::from_rgb(214, 168, 72);
const OTHER: egui::Color32 = egui::Color32::from_rgb(160, 160, 160);

pub fn show(ui: &mut egui::Ui, doc: &mut Value, band: &mut Band) {
    if doc.pointer("/modulationData/modulationChannels").is_none() {
        edit::missing(ui, "modulation");
        return;
    }

    ui.horizontal(|ui| {
        for (item, label) in [
            (Band::Ssb, "Shortwave"),
            (Band::Am, "AM"),
            (Band::Fm, "FM broadcast"),
        ] {
            if ui
                .add(egui::Button::selectable(*band == item, label))
                .clicked()
            {
                *band = item;
            }
        }
        ui.separator();
        if let Some(mod_data) = doc.pointer_mut("/modulationData") {
            edit::combo(
                ui,
                "sw-pub",
                "Work",
                mod_data,
                "cbB_WorkMode",
                edit::MOD_WORK,
            );
            ui.add_space(8.0);
            edit::combo(
                ui,
                "sw-pub",
                "Mode",
                mod_data,
                "cbB_ModulationMode",
                edit::MOD_MODE,
            );
        }
    });
    ui.add_space(6.0);

    let (id_key, freq_key, name_key) = keys(*band);
    let cur = current_id(doc, id_key);
    let raw = channel_raw(doc, cur, freq_key);
    let mhz = to_mhz(*band, raw);
    let mark = if *band == Band::Fm {
        fm_mark(raw)
    } else {
        band_for_khz(raw)
    };

    let mut tuned: Option<f64> = None;
    egui::Frame::group(ui.style()).show(ui, |ui| {
        ui.horizontal(|ui| {
            ui.label(egui::RichText::new(format!("{mhz:.3}")).size(40.0).strong());
            ui.vertical(|ui| {
                ui.label(egui::RichText::new("MHz").size(16.0));
                let under = if *band == Band::Fm {
                    String::new()
                } else {
                    format!("{raw} kHz")
                };
                if !under.is_empty() {
                    ui.label(egui::RichText::new(under).weak());
                }
            });
            ui.add_space(18.0);
            ui.label(
                egui::RichText::new(mark.name)
                    .size(22.0)
                    .color(mark.color)
                    .strong(),
            );
        });
        ui.add_space(6.0);
        let (lo, hi) = if *band == Band::Fm {
            (64.0, 108.0)
        } else {
            (0.0, 30.0)
        };
        tuned = dial(ui, mhz, lo, hi, *band);
        ui.add_space(4.0);
        ui.horizontal(|ui| {
            legend(ui, HAM, "Amateur");
            ui.add_space(10.0);
            legend(ui, BROADCAST, "Broadcast");
            if *band != Band::Fm {
                ui.add_space(10.0);
                legend(ui, AERO, "Aeronautical");
            }
            ui.with_layout(egui::Layout::right_to_left(egui::Align::Center), |ui| {
                if let Some(mod_data) = doc.pointer_mut("/modulationData") {
                    match *band {
                        Band::Ssb => {
                            edit::combo(ui, "sw", "Gain", mod_data, "cbB_SSBRxGain", edit::RX_GAIN);
                            ui.add_space(8.0);
                            edit::combo(
                                ui,
                                "sw",
                                "Step",
                                mod_data,
                                "cbB_SSBStepFreq",
                                edit::SSB_STEP,
                            );
                        }
                        Band::Am => {
                            edit::combo(ui, "am", "Gain", mod_data, "cbB_AMRxGain", edit::RX_GAIN);
                            ui.add_space(8.0);
                            edit::combo(
                                ui,
                                "am",
                                "Step",
                                mod_data,
                                "cbB_AMStepFreq",
                                edit::AM_STEP,
                            );
                        }
                        Band::Fm => {}
                    }
                }
            });
        });
    });
    if let Some(mhz) = tuned {
        write_mhz(doc, cur, *band, mhz);
    }

    ui.add_space(8.0);
    let width = ui.available_width();
    ui.horizontal_top(|ui| {
        ui.vertical(|ui| {
            ui.set_width((width - 300.0).max(280.0));
            ui.label(egui::RichText::new(heading(*band)).strong());
            let height = ui.available_height();
            egui::ScrollArea::vertical()
                .id_salt("sw-memories")
                .max_height(height)
                .show(ui, |ui| {
                    let count = channel_count(doc).min(16);
                    for index in 0..count {
                        if memory_row(ui, doc, index, *band) {
                            if let Some(mod_data) = doc.pointer_mut("/modulationData") {
                                mod_data[id_key] = json!(index);
                            }
                        }
                    }
                });
        });
        ui.vertical(|ui| {
            ui.set_width(290.0);
            editor(ui, doc, cur, *band, name_key, freq_key);
        });
    });
}

fn heading(band: Band) -> &'static str {
    match band {
        Band::Ssb => "Shortwave memories",
        Band::Am => "AM memories",
        Band::Fm => "FM broadcast memories",
    }
}

fn editor(
    ui: &mut egui::Ui,
    doc: &mut Value,
    cur: usize,
    band: Band,
    name_key: &str,
    freq_key: &str,
) {
    egui::Frame::group(ui.style()).show(ui, |ui| {
        let slot = if cur == 0 {
            "Now".to_string()
        } else {
            format!("Memory {cur}")
        };
        ui.label(egui::RichText::new(slot).strong());
        let Some(ch) = doc.pointer_mut(&format!("/modulationData/modulationChannels/{cur}")) else {
            ui.label("Memory missing.");
            return;
        };
        edit::text(ui, "Name", ch, name_key);
        ui.add_space(6.0);
        match band {
            Band::Fm => edit_fm(ui, ch),
            Band::Am => edit_khz(ui, ch, freq_key, 150, 30_000),
            Band::Ssb => {
                edit_khz(ui, ch, freq_key, 150, 30_000);
                ui.add_space(6.0);
                edit::combo(ui, "sw-edit", "Bandwidth", ch, "ssbBandwidth", edit::SSB_BW);
                edit::drag(ui, "BFO Hz", ch, "ssbBeatFreqOffset", -32_760..=27_240);
            }
        }
    });
}

fn legend(ui: &mut egui::Ui, color: egui::Color32, text: &str) {
    let (rect, _) = ui.allocate_exact_size(egui::vec2(12.0, 12.0), egui::Sense::hover());
    ui.painter()
        .rect_filled(rect, egui::CornerRadius::same(2), color);
    ui.label(egui::RichText::new(text).weak());
}

/// Click returns the tuned frequency in MHz.
fn dial(ui: &mut egui::Ui, mhz: f64, lo: f64, hi: f64, band: Band) -> Option<f64> {
    let (rect, response) =
        ui.allocate_exact_size(egui::vec2(ui.available_width(), 46.0), egui::Sense::click());
    let painter = ui.painter_at(rect);
    painter.rect_filled(
        rect,
        egui::CornerRadius::same(6),
        ui.visuals().extreme_bg_color,
    );
    let span = (hi - lo).max(0.001);
    let paint_span = |start: f64, end: f64, color: egui::Color32| {
        let x0 = rect.left() + ((start - lo) / span).clamp(0.0, 1.0) as f32 * rect.width();
        let x1 = rect.left() + ((end - lo) / span).clamp(0.0, 1.0) as f32 * rect.width();
        if x1 - x0 < 1.0 {
            return;
        }
        let band_rect = egui::Rect::from_min_max(
            egui::pos2(x0, rect.top() + 14.0),
            egui::pos2(x1, rect.bottom() - 12.0),
        );
        painter.rect_filled(
            band_rect,
            egui::CornerRadius::same(2),
            color.gamma_multiply(0.85),
        );
    };
    if band == Band::Fm {
        paint_span(88.0, 108.0, BROADCAST);
    } else {
        for (start, end, _) in BROADCAST_BANDS {
            paint_span(*start as f64 / 1000.0, *end as f64 / 1000.0, BROADCAST);
        }
        for (start, end, _) in AERO_BANDS {
            paint_span(*start as f64 / 1000.0, *end as f64 / 1000.0, AERO);
        }
        for (start, end, _) in HAM_BANDS {
            paint_span(*start as f64 / 1000.0, *end as f64 / 1000.0, HAM);
        }
    }
    let t = ((mhz - lo) / span).clamp(0.0, 1.0) as f32;
    let x = rect.left() + t * rect.width();
    painter.line_segment(
        [
            egui::pos2(x, rect.top() + 4.0),
            egui::pos2(x, rect.bottom() - 4.0),
        ],
        egui::Stroke::new(2.0, ui.visuals().strong_text_color()),
    );
    let font = egui::FontId::monospace(11.0);
    let color = ui.visuals().weak_text_color();
    painter.text(
        rect.left_bottom() + egui::vec2(4.0, -1.0),
        egui::Align2::LEFT_BOTTOM,
        format!("{lo:.0}"),
        font.clone(),
        color,
    );
    painter.text(
        rect.right_bottom() + egui::vec2(-4.0, -1.0),
        egui::Align2::RIGHT_BOTTOM,
        format!("{hi:.0}"),
        font,
        color,
    );
    if response.clicked() {
        let pos = response.interact_pointer_pos()?;
        let frac = ((pos.x - rect.left()) / rect.width()).clamp(0.0, 1.0) as f64;
        Some(lo + frac * span)
    } else {
        None
    }
}

fn memory_row(ui: &mut egui::Ui, doc: &Value, index: usize, band: Band) -> bool {
    let (_, freq_key, name_key) = keys(band);
    let id_key = keys(band).0;
    let cur = current_id(doc, id_key);
    let raw = channel_raw(doc, index, freq_key);
    let mhz = to_mhz(band, raw);
    let mark = if band == Band::Fm {
        fm_mark(raw)
    } else {
        band_for_khz(raw)
    };
    let name = doc
        .pointer(&format!(
            "/modulationData/modulationChannels/{index}/{name_key}"
        ))
        .and_then(|v| v.as_str())
        .unwrap_or("");
    let slot = if index == 0 {
        "Now".to_string()
    } else {
        format!("{index:>2}")
    };
    let extra = if band == Band::Ssb {
        let bw = doc
            .pointer(&format!(
                "/modulationData/modulationChannels/{index}/ssbBandwidth"
            ))
            .and_then(|v| v.as_i64())
            .unwrap_or(0);
        let bfo = doc
            .pointer(&format!(
                "/modulationData/modulationChannels/{index}/ssbBeatFreqOffset"
            ))
            .and_then(|v| v.as_i64())
            .unwrap_or(0);
        format!("  {:>6}  {bfo:>6}", edit::label_of(edit::SSB_BW, bw))
    } else {
        String::new()
    };
    let (rect, response) =
        ui.allocate_exact_size(egui::vec2(ui.available_width(), 26.0), egui::Sense::click());
    let painter = ui.painter();
    if cur == index {
        painter.rect_filled(
            rect,
            egui::CornerRadius::same(4),
            mark.color.gamma_multiply(0.28),
        );
    } else if index % 2 == 1 {
        painter.rect_filled(rect, egui::CornerRadius::ZERO, ui.visuals().faint_bg_color);
    }
    let font = egui::FontId::monospace(14.0);
    let text = format!("{slot}   {mhz:7.3}   {:<8}{extra}   {name}", mark.name);
    painter.text(
        rect.left_center() + egui::vec2(8.0, 0.0),
        egui::Align2::LEFT_CENTER,
        text,
        font,
        ui.visuals().text_color(),
    );
    response.clicked()
}

fn keys(band: Band) -> (&'static str, &'static str, &'static str) {
    match band {
        Band::Fm => ("cbB_FMCurChID", "fmFreq", "fmName"),
        Band::Am => ("cbB_AMCurChID", "amFreq", "amName"),
        Band::Ssb => ("cbB_SSBCurChID", "ssbFreq", "ssbName"),
    }
}

fn current_id(doc: &Value, key: &str) -> usize {
    doc.pointer(&format!("/modulationData/{key}"))
        .and_then(|v| v.as_i64())
        .unwrap_or(0)
        .clamp(0, 15) as usize
}

fn channel_count(doc: &Value) -> usize {
    doc.pointer("/modulationData/modulationChannels")
        .and_then(|v| v.as_array())
        .map(|a| a.len())
        .unwrap_or(0)
}

fn channel_raw(doc: &Value, index: usize, key: &str) -> i64 {
    doc.pointer(&format!("/modulationData/modulationChannels/{index}/{key}"))
        .and_then(|v| v.as_i64())
        .unwrap_or(0)
}

fn to_mhz(band: Band, raw: i64) -> f64 {
    if band == Band::Fm {
        raw as f64 / 100.0
    } else {
        raw as f64 / 1000.0
    }
}

fn write_mhz(doc: &mut Value, index: usize, band: Band, mhz: f64) {
    let Some(ch) = doc.pointer_mut(&format!("/modulationData/modulationChannels/{index}")) else {
        return;
    };
    if band == Band::Fm {
        let stored = (mhz * 100.0).round().clamp(6400.0, 10800.0) as i64;
        ch["fmFreq"] = json!(stored);
    } else {
        let key = if band == Band::Am {
            "amFreq"
        } else {
            "ssbFreq"
        };
        let stored = (mhz * 1000.0).round().clamp(150.0, 30_000.0) as i64;
        ch[key] = json!(stored);
    }
}

fn edit_khz(ui: &mut egui::Ui, ch: &mut Value, key: &str, lo: i32, hi: i32) {
    let Some(cur) = ch.get(key).and_then(|v| v.as_i64()) else {
        return;
    };
    let mut khz = cur as i32;
    ui.label("Frequency");
    let changed = ui
        .add(egui::DragValue::new(&mut khz).range(lo..=hi).suffix(" kHz"))
        .changed();
    ui.label(egui::RichText::new(format!("{:.3} MHz", khz as f64 / 1000.0)).weak());
    if changed {
        ch[key] = json!(khz);
    }
}

fn edit_fm(ui: &mut egui::Ui, ch: &mut Value) {
    let Some(cur) = ch.get("fmFreq").and_then(|v| v.as_i64()) else {
        return;
    };
    let mut mhz = cur as f64 / 100.0;
    ui.label("Frequency");
    if ui
        .add(
            egui::DragValue::new(&mut mhz)
                .range(64.0..=108.0)
                .speed(0.01)
                .max_decimals(2)
                .suffix(" MHz"),
        )
        .changed()
    {
        ch["fmFreq"] = json!((mhz * 100.0).round() as i64);
    }
}

fn fm_mark(raw: i64) -> Mark {
    if (8800..=10800).contains(&raw) {
        Mark {
            name: "FM",
            color: BROADCAST,
        }
    } else if (6400..8800).contains(&raw) {
        Mark {
            name: "VHF low",
            color: OTHER,
        }
    } else {
        Mark {
            name: "—",
            color: OTHER,
        }
    }
}

const HAM_BANDS: &[(i64, i64, &str)] = &[
    (1800, 2000, "160 m"),
    (3500, 4000, "80 m"),
    (5330, 5410, "60 m"),
    (7000, 7300, "40 m"),
    (10100, 10150, "30 m"),
    (14000, 14350, "20 m"),
    (18068, 18168, "17 m"),
    (21000, 21450, "15 m"),
    (24890, 24990, "12 m"),
    (28000, 29700, "10 m"),
];

const AERO_BANDS: &[(i64, i64, &str)] = &[
    (2850, 3155, "Aero"),
    (3400, 3500, "Aero"),
    (4650, 4750, "Aero"),
    (5450, 5730, "Aero"),
    (6525, 6765, "Aero"),
    (8815, 9040, "Aero"),
    (10005, 10100, "Aero"),
    (11275, 11400, "Aero"),
    (13260, 13360, "Aero"),
    (17900, 18030, "Aero"),
];

const BROADCAST_BANDS: &[(i64, i64, &str)] = &[
    (153, 279, "LW"),
    (520, 1710, "MW"),
    (2300, 2495, "120 m"),
    (3200, 3400, "90 m"),
    (4750, 4995, "60 m BC"),
    (5900, 6200, "49 m"),
    (7200, 7600, "41 m"),
    (9400, 9900, "31 m"),
    (11600, 12100, "25 m"),
    (13570, 13870, "22 m"),
    (15100, 15800, "19 m"),
    (17480, 17900, "16 m"),
    (18900, 19020, "15 m BC"),
    (21450, 21850, "13 m"),
    (25670, 26100, "11 m"),
];

fn band_for_khz(khz: i64) -> Mark {
    for &(lo, hi, name) in HAM_BANDS {
        if (lo..=hi).contains(&khz) {
            return Mark { name, color: HAM };
        }
    }
    for &(lo, hi, name) in AERO_BANDS {
        if (lo..=hi).contains(&khz) {
            return Mark { name, color: AERO };
        }
    }
    for &(lo, hi, name) in BROADCAST_BANDS {
        if (lo..=hi).contains(&khz) {
            return Mark {
                name,
                color: BROADCAST,
            };
        }
    }
    Mark {
        name: "—",
        color: OTHER,
    }
}

#[cfg(test)]
mod tests {
    use super::band_for_khz;

    #[test]
    fn ham_wins_over_overlapping_broadcast() {
        assert_eq!(band_for_khz(7200).name, "40 m");
        assert_eq!(band_for_khz(7400).name, "41 m");
        assert_eq!(band_for_khz(14340).name, "20 m");
    }

    #[test]
    fn volmet_is_aeronautical() {
        assert_eq!(band_for_khz(2872).name, "Aero");
        assert_eq!(band_for_khz(1000).name, "MW");
    }
}
