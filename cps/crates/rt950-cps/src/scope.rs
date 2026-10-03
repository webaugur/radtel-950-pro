//! Shared bandspread. Shortwave, AM, FM, and channel zones all paint this bar.

use eframe::egui;

#[derive(Clone, Copy)]
pub struct Mark {
    pub name: &'static str,
    pub color: egui::Color32,
}

#[derive(Clone, Copy)]
pub struct Span {
    pub lo: f64,
    pub hi: f64,
    pub color: egui::Color32,
}

pub const HAM: egui::Color32 = egui::Color32::from_rgb(92, 184, 120);
pub const BROADCAST: egui::Color32 = egui::Color32::from_rgb(90, 150, 210);
pub const AERO: egui::Color32 = egui::Color32::from_rgb(214, 168, 72);
pub const OTHER: egui::Color32 = egui::Color32::from_rgb(160, 160, 160);
pub const PERSONAL: egui::Color32 = egui::Color32::from_rgb(196, 112, 72);
pub const MARINE: egui::Color32 = egui::Color32::from_rgb(72, 168, 184);
pub const LAND: egui::Color32 = egui::Color32::from_rgb(130, 136, 150);

const NONE: Mark = Mark {
    name: "—",
    color: OTHER,
};

pub const HAM_KHZ: &[(i64, i64, &str)] = &[
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

pub const AERO_KHZ: &[(i64, i64, &str)] = &[
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

pub const BROADCAST_KHZ: &[(i64, i64, &str)] = &[
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

const NOAA: &[f64] = &[
    162.400, 162.425, 162.450, 162.475, 162.500, 162.525, 162.550,
];
const MURS: &[f64] = &[151.820, 151.880, 151.940, 154.570, 154.600];

pub fn mark_khz(khz: i64) -> Mark {
    for &(lo, hi, name) in HAM_KHZ {
        if (lo..=hi).contains(&khz) {
            return Mark { name, color: HAM };
        }
    }
    for &(lo, hi, name) in AERO_KHZ {
        if (lo..=hi).contains(&khz) {
            return Mark { name, color: AERO };
        }
    }
    for &(lo, hi, name) in BROADCAST_KHZ {
        if (lo..=hi).contains(&khz) {
            return Mark {
                name,
                color: BROADCAST,
            };
        }
    }
    NONE
}

/// Service under a channel frequency. A narrow service wins over a wide one.
pub fn service_at(mhz: f64) -> Mark {
    if near(mhz, NOAA) {
        return Mark {
            name: "WX",
            color: MARINE,
        };
    }
    if near(mhz, MURS) {
        return Mark {
            name: "MURS",
            color: PERSONAL,
        };
    }
    if (26.965..=27.405).contains(&mhz) {
        return Mark {
            name: "CB",
            color: PERSONAL,
        };
    }
    if (49.82..=49.90).contains(&mhz) {
        return Mark {
            name: "49 MHz",
            color: PERSONAL,
        };
    }
    if (462.550..=467.725).contains(&mhz) {
        return Mark {
            name: "FRS",
            color: PERSONAL,
        };
    }
    if (446.000..=446.200).contains(&mhz) {
        return Mark {
            name: "PMR",
            color: PERSONAL,
        };
    }
    if (156.000..=162.025).contains(&mhz) {
        return Mark {
            name: "Marine",
            color: MARINE,
        };
    }
    if let Some(mark) = amateur_vhf(mhz) {
        return mark;
    }
    let hf = mark_khz((mhz * 1000.0).round() as i64);
    if hf.name != "—" {
        return hf;
    }
    if (108.0..=137.0).contains(&mhz) {
        return Mark {
            name: "Air",
            color: AERO,
        };
    }
    if (88.0..108.0).contains(&mhz) {
        return Mark {
            name: "FM",
            color: BROADCAST,
        };
    }
    if (136.0..=174.0).contains(&mhz) {
        return Mark {
            name: "VHF",
            color: LAND,
        };
    }
    if (400.0..=470.0).contains(&mhz) {
        return Mark {
            name: "UHF",
            color: LAND,
        };
    }
    NONE
}

fn amateur_vhf(mhz: f64) -> Option<Mark> {
    let name = if (50.0..=54.0).contains(&mhz) {
        "6 m"
    } else if (144.0..=148.0).contains(&mhz) {
        "2 m"
    } else if (222.0..=225.0).contains(&mhz) {
        "1.25 m"
    } else if (420.0..=450.0).contains(&mhz) {
        "70 cm"
    } else if (902.0..=928.0).contains(&mhz) {
        "33 cm"
    } else {
        return None;
    };
    Some(Mark { name, color: HAM })
}

fn near(mhz: f64, list: &[f64]) -> bool {
    list.iter().any(|carrier| (mhz - carrier).abs() < 0.005)
}

pub fn khz_spans(table: &[(i64, i64, &str)], color: egui::Color32) -> Vec<Span> {
    table
        .iter()
        .map(|(lo, hi, _)| Span {
            lo: *lo as f64 / 1000.0,
            hi: *hi as f64 / 1000.0,
            color,
        })
        .collect()
}

/// Spans painted on a channel zone. Later entries are drawn on top.
pub fn channel_spans() -> Vec<Span> {
    let mut spans = Vec::new();
    spans.push(Span {
        lo: 136.0,
        hi: 174.0,
        color: LAND,
    });
    spans.push(Span {
        lo: 400.0,
        hi: 470.0,
        color: LAND,
    });
    spans.extend(khz_spans(BROADCAST_KHZ, BROADCAST));
    spans.push(Span {
        lo: 88.0,
        hi: 108.0,
        color: BROADCAST,
    });
    spans.extend(khz_spans(AERO_KHZ, AERO));
    spans.push(Span {
        lo: 108.0,
        hi: 137.0,
        color: AERO,
    });
    spans.extend(khz_spans(HAM_KHZ, HAM));
    spans.push(Span {
        lo: 50.0,
        hi: 54.0,
        color: HAM,
    });
    spans.push(Span {
        lo: 144.0,
        hi: 148.0,
        color: HAM,
    });
    spans.push(Span {
        lo: 222.0,
        hi: 225.0,
        color: HAM,
    });
    spans.push(Span {
        lo: 420.0,
        hi: 450.0,
        color: HAM,
    });
    spans.push(Span {
        lo: 902.0,
        hi: 928.0,
        color: HAM,
    });
    spans.push(Span {
        lo: 156.0,
        hi: 162.025,
        color: MARINE,
    });
    spans.push(Span {
        lo: 26.965,
        hi: 27.405,
        color: PERSONAL,
    });
    spans.push(Span {
        lo: 49.82,
        hi: 49.90,
        color: PERSONAL,
    });
    spans.push(Span {
        lo: 446.0,
        hi: 446.2,
        color: PERSONAL,
    });
    spans.push(Span {
        lo: 462.550,
        hi: 467.725,
        color: PERSONAL,
    });
    spans
}

pub fn legend(lo: f64, hi: f64) -> Vec<(egui::Color32, &'static str)> {
    let mut out = Vec::new();
    for span in channel_spans() {
        if span.hi < lo || span.lo > hi {
            continue;
        }
        let label = match span.color {
            c if c == HAM => "Amateur",
            c if c == BROADCAST => "Broadcast",
            c if c == AERO => "Aeronautical",
            c if c == PERSONAL => "Personal",
            c if c == MARINE => "Marine",
            c if c == LAND => "Land",
            _ => continue,
        };
        if out.iter().any(|(_, name)| *name == label) {
            continue;
        }
        out.push((span.color, label));
    }
    out
}

/// Left and right edges for the channels in view. Empty means the VHF window.
pub fn zone_window(freqs: &[f64]) -> (f64, f64) {
    if freqs.is_empty() {
        return (136.0, 174.0);
    }
    let mut min = f64::MAX;
    let mut max = f64::MIN;
    for freq in freqs {
        min = min.min(*freq);
        max = max.max(*freq);
    }
    let pad = ((max - min) * 0.08).max(0.25);
    (min - pad, max + pad)
}

pub fn tuned_mhz(text: &str) -> Option<f64> {
    let trimmed = text.trim();
    if trimmed.is_empty() || !trimmed.chars().any(|c| c.is_ascii_digit() && c != '0') {
        return None;
    }
    trimmed.parse::<f64>().ok().filter(|mhz| *mhz > 0.0)
}

/// New receive and transmit strings. A split transmit frequency stays put.
pub fn tune_pair(rx: &str, tx: &str, mhz: f64) -> (String, String) {
    let next = format!("{:.5}", mhz);
    if rx == tx {
        (next.clone(), next)
    } else {
        (next, tx.to_string())
    }
}

pub fn swatch(ui: &mut egui::Ui, color: egui::Color32, text: &str) {
    let (rect, _) = ui.allocate_exact_size(egui::vec2(12.0, 12.0), egui::Sense::hover());
    ui.painter()
        .rect_filled(rect, egui::CornerRadius::same(2), color);
    ui.label(egui::RichText::new(text).weak());
}

/// Click returns the tuned frequency in MHz. `needle` is omitted when the
/// selected memory has no frequency.
pub fn dial(
    ui: &mut egui::Ui,
    needle: Option<f64>,
    lo: f64,
    hi: f64,
    spans: &[Span],
) -> Option<f64> {
    let (rect, response) =
        ui.allocate_exact_size(egui::vec2(ui.available_width(), 46.0), egui::Sense::click());
    let painter = ui.painter_at(rect);
    painter.rect_filled(
        rect,
        egui::CornerRadius::same(6),
        ui.visuals().extreme_bg_color,
    );
    let span = (hi - lo).max(0.001);
    for band in spans {
        let x0 = rect.left() + ((band.lo - lo) / span).clamp(0.0, 1.0) as f32 * rect.width();
        let x1 = rect.left() + ((band.hi - lo) / span).clamp(0.0, 1.0) as f32 * rect.width();
        if x1 - x0 < 1.0 {
            continue;
        }
        let band_rect = egui::Rect::from_min_max(
            egui::pos2(x0, rect.top() + 14.0),
            egui::pos2(x1, rect.bottom() - 12.0),
        );
        painter.rect_filled(
            band_rect,
            egui::CornerRadius::same(2),
            band.color.gamma_multiply(0.85),
        );
    }
    if let Some(mhz) = needle {
        let t = ((mhz - lo) / span).clamp(0.0, 1.0) as f32;
        let x = rect.left() + t * rect.width();
        painter.line_segment(
            [
                egui::pos2(x, rect.top() + 4.0),
                egui::pos2(x, rect.bottom() - 4.0),
            ],
            egui::Stroke::new(2.0, ui.visuals().strong_text_color()),
        );
    }
    let font = egui::FontId::monospace(11.0);
    let color = ui.visuals().weak_text_color();
    painter.text(
        rect.left_bottom() + egui::vec2(4.0, -1.0),
        egui::Align2::LEFT_BOTTOM,
        edge_label(lo, span),
        font.clone(),
        color,
    );
    painter.text(
        rect.right_bottom() + egui::vec2(-4.0, -1.0),
        egui::Align2::RIGHT_BOTTOM,
        edge_label(hi, span),
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

fn edge_label(value: f64, span: f64) -> String {
    if span >= 10.0 {
        format!("{value:.0}")
    } else if span >= 1.0 {
        format!("{value:.1}")
    } else {
        format!("{value:.2}")
    }
}

#[cfg(test)]
mod tests {
    use super::{service_at, tune_pair, zone_window};

    #[test]
    fn window_ignores_nothing_and_pads() {
        let (lo, hi) = zone_window(&[155.0, 400.0]);
        assert!((lo - 135.4).abs() < 0.01, "{lo}");
        assert!((hi - 419.6).abs() < 0.01, "{hi}");
    }

    #[test]
    fn one_frequency_is_at_least_half_a_megahertz_wide() {
        let (lo, hi) = zone_window(&[146.0]);
        assert!((hi - lo - 0.5).abs() < 0.001);
    }

    #[test]
    fn empty_zone_is_vhf() {
        assert_eq!(zone_window(&[]), (136.0, 174.0));
    }

    #[test]
    fn specific_service_wins() {
        assert_eq!(service_at(146.0).name, "2 m");
        assert_eq!(service_at(155.0).name, "VHF");
        assert_eq!(service_at(27.185).name, "CB");
        assert_eq!(service_at(162.550).name, "WX");
        assert_eq!(service_at(7.200).name, "40 m");
        assert_eq!(service_at(7.400).name, "41 m");
    }

    #[test]
    fn split_keeps_the_transmit_frequency() {
        assert_eq!(
            tune_pair("146.52000", "146.52000", 146.94),
            ("146.94000".into(), "146.94000".into())
        );
        assert_eq!(
            tune_pair("146.52000", "147.00000", 146.94),
            ("146.94000".into(), "147.00000".into())
        );
    }
}
