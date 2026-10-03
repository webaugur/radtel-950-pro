//! RT-950 CPS front end. One binary edits a `.950pro` file and sends the boot
//! picture. It does not launch another program. A radio read does not yet
//! produce a `.950pro` or a `.dat`.

mod aprs;
mod channels;
mod dtmf;
mod edit;
mod kiss;
mod radio;
mod scope;
mod shortwave;
mod vfo;

use std::collections::HashMap;
use std::path::{Path, PathBuf};

use eframe::egui;
use serde_json::{json, Value};

fn main() -> eframe::Result {
    let options = eframe::NativeOptions {
        viewport: egui::ViewportBuilder::default()
            .with_inner_size([1180.0, 760.0])
            .with_min_inner_size([900.0, 560.0])
            .with_title("RT-950 CPS"),
        ..Default::default()
    };
    eframe::run_native(
        "RT-950 CPS",
        options,
        Box::new(|cc| Ok(Box::new(CpsApp::new(cc)))),
    )
}

fn is_950pro(path: &Path) -> bool {
    path.extension()
        .and_then(|ext| ext.to_str())
        .is_some_and(|ext| ext.eq_ignore_ascii_case("950pro"))
}

/// Same directory and file name as the `.dat`, with a `.950pro` extension.
#[cfg(test)]
fn json_beside(dat: &Path) -> PathBuf {
    let mut json = dat.to_path_buf();
    json.set_extension("950pro");
    json
}

#[cfg(test)]
fn dat_beside(json: &Path) -> PathBuf {
    let mut dat = json.to_path_buf();
    dat.set_extension("dat");
    dat
}

fn freq_blank(freq: &str) -> bool {
    !freq.chars().any(|c| c.is_ascii_digit() && c != '0')
}

/// A radio read stores FM transmit (2) as 0. The OEM read keeps only bit 0,
/// so memory PTT goes dead while the VFO still transmits. Put transmit back
/// on every real FM memory. AIS stays receive-only. AM (1) is unchanged.
fn restore_memory_transmit(doc: &mut Value) -> usize {
    let Some(list) = doc
        .pointer_mut("/channelData/channelList")
        .and_then(|v| v.as_array_mut())
    else {
        return 0;
    };
    let mut restored = 0;
    for ch in list {
        let Some(obj) = ch.as_object_mut() else {
            continue;
        };
        if obj.get("rxModulation").and_then(|v| v.as_i64()) != Some(0) {
            continue;
        }
        let freq = obj.get("rxFreq").and_then(|v| v.as_str()).unwrap_or("");
        if freq_blank(freq) {
            continue;
        }
        let name = obj.get("chName").and_then(|v| v.as_str()).unwrap_or("");
        if name.starts_with("AIS") {
            continue;
        }
        obj.insert("rxModulation".to_string(), json!(2));
        restored += 1;
    }
    restored
}

/// Pretty-printed codeplug. A trailing newline keeps the file a text file.
fn write_codeplug_file(doc: &Value, path: &Path) -> Result<(), String> {
    let text =
        serde_json::to_string_pretty(doc).map_err(|e| format!("{} failed: {e}", path.display()))?;
    std::fs::write(path, format!("{text}\n")).map_err(|e| format!("{} failed: {e}", path.display()))
}

/// A transfer timeout means the radio stopped answering. Tell the operator to power-cycle.
fn power_cycle_notice(detail: &str) -> bool {
    let u = detail.to_ascii_uppercase();
    u.contains("TOOVER")
        || u.contains("MODELERR")
        || u.contains("EXCABORT")
        || u.contains("MANCANC")
        || u.contains("TIMED OUT")
        || u.contains("TIMEOUT:")
}

fn page_from_arg(name: Option<&str>) -> Page {
    match name {
        Some("shortwave") => Page::Shortwave,
        Some("am") => Page::Am,
        Some("fm") => Page::Fm,
        Some("global" | "vfo" | "radio" | "dtmf" | "boot") => Page::Global,
        Some("aprs") => Page::Aprs,
        _ => Page::Channels,
    }
}

#[derive(Clone, Copy, PartialEq, Eq)]
enum Page {
    Global,
    Aprs,
    Channels,
    Shortwave,
    Am,
    Fm,
}

struct CpsApp {
    doc: Option<Value>,
    zone: usize,
    selected: Option<usize>,
    port: String,
    log: Vec<String>,
    log_open: bool,
    status: String,
    /// Set when a radio transfer returns TOOVER or another operation code.
    power_cycle: Option<String>,
    dark: bool,
    confirm_write: bool,
    confirm_boot: bool,
    page: Page,
    boot_path: String,
    pending_open: Option<PathBuf>,
    kiss: Option<kiss::Feed>,
    stations: HashMap<String, kiss::Station>,
    kiss_status: String,
}

impl CpsApp {
    fn new(cc: &eframe::CreationContext<'_>) -> Self {
        let dark = cc.egui_ctx.global_style().visuals.dark_mode;
        let app = Self {
            doc: None,
            zone: 0,
            selected: Some(0),
            port: "/dev/ttyUSB0".into(),
            log: Vec::new(),
            log_open: false,
            status: "Open a .950pro, or read the radio.".into(),
            power_cycle: None,
            dark,
            confirm_write: false,
            confirm_boot: false,
            page: page_from_arg(std::env::args().nth(2).as_deref()),
            boot_path: String::new(),
            pending_open: std::env::args().nth(1).map(PathBuf::from),
            kiss: None,
            stations: HashMap::new(),
            kiss_status: String::new(),
        };
        app.apply_theme(&cc.egui_ctx);
        app
    }

    fn apply_theme(&self, ctx: &egui::Context) {
        let mut style = (*ctx.global_style()).clone();
        style.visuals = if self.dark {
            egui::Visuals::dark()
        } else {
            egui::Visuals::light()
        };
        ctx.set_global_style(style);
    }

    fn log_lines(&mut self, text: &str) {
        for line in text.lines() {
            let line = line.trim();
            if !line.is_empty() {
                self.log.push(line.to_string());
            }
        }
        if self.log.len() > 400 {
            let drop_n = self.log.len() - 400;
            self.log.drain(0..drop_n);
        }
    }

    fn fail_status(&mut self, status: String) {
        self.log_open = true;
        self.status = status.clone();
        if power_cycle_notice(&status) {
            self.power_cycle = Some(status);
        }
    }

    fn open_codeplug(&mut self, path: &Path) {
        if is_950pro(path) {
            self.load_950pro(path);
        } else {
            self.status = format!("{} was not opened. Open a .950pro file.", path.display());
        }
    }

    fn load_950pro(&mut self, path: &Path) {
        let text = match std::fs::read_to_string(path) {
            Ok(text) => text,
            Err(e) => {
                self.status = format!("Open {} failed: {e}", path.display());
                return;
            }
        };
        let doc = match serde_json::from_str::<Value>(&text) {
            Ok(doc) if doc.get("channelData").is_some() => doc,
            Ok(_) => {
                self.status = format!("{} has no channelData", path.display());
                return;
            }
            Err(e) => {
                self.status = format!("{} is not a codeplug: {e}", path.display());
                return;
            }
        };
        let mut doc = doc;
        let restored = restore_memory_transmit(&mut doc);
        self.doc = Some(doc);
        self.zone = 0;
        self.selected = Some(0);
        self.status = if restored == 0 {
            format!("Opened {}", path.display())
        } else {
            format!(
                "Opened {}. Restored FM transmit on {restored} memories.",
                path.display()
            )
        };
    }

    fn save_codeplug(&mut self, path: &Path) {
        let path = if path.extension().is_none() {
            path.with_extension("950pro")
        } else {
            path.to_path_buf()
        };
        if is_950pro(&path) {
            let Some(doc) = &self.doc else {
                self.status = "Nothing to save.".into();
                return;
            };
            self.status = match write_codeplug_file(doc, &path) {
                Ok(()) => format!("Saved {}", path.display()),
                Err(e) => e,
            };
            return;
        }
        self.status = format!("Save {} as a .950pro file.", path.display());
    }

    fn read_radio(&mut self) {
        self.kiss = None;
        self.status = "Read cannot save a .950pro or a .dat yet.".into();
    }

    fn write_radio(&mut self) {
        self.kiss = None;
        self.status = "The radio was not written.".into();
    }

    fn send_boot(&mut self) {
        self.kiss = None;
        let path = PathBuf::from(self.boot_path.trim());
        if let Err(e) = check_bmp(&path) {
            self.status = e;
            return;
        }
        let pixels = match rt950_protocol::bmp_file_to_rgb565(&path) {
            Ok(pixels) => pixels,
            Err(e) => {
                self.log_lines(&e.to_string());
                self.fail_status(format!("error: {e}"));
                return;
            }
        };
        let port = self.port.clone();
        self.status = format!("Sending boot picture {}…", path.display());
        match rt950_protocol::upload_boot_picture(&port, &pixels, |msg| {
            self.log_lines(msg);
        }) {
            Ok(()) => self.status = format!("Sent boot picture to {port}"),
            Err(e) => {
                let status = format!("error: {e}");
                self.log_lines(&status);
                self.fail_status(status);
            }
        }
    }
}

impl eframe::App for CpsApp {
    fn ui(&mut self, ui: &mut egui::Ui, _frame: &mut eframe::Frame) {
        if let Some(path) = self.pending_open.take() {
            if path.is_file() {
                self.open_codeplug(&path);
            }
        }
        let ctx = ui.ctx().clone();
        egui::Panel::top("bar").show_inside(ui, |ui| {
            ui.horizontal(|ui| {
                ui.label("Port");
                ui.add(egui::TextEdit::singleline(&mut self.port).desired_width(160.0));
                if ui.button("Read radio").clicked() {
                    self.read_radio();
                }
                if ui.button("Write radio").clicked() {
                    self.write_radio();
                }
                ui.separator();
                if ui.button("Open").clicked() {
                    if let Some(path) = rfd::FileDialog::new()
                        .add_filter("RT-950 JSON", &["950pro"])
                        .add_filter("CPS data", &["dat"])
                        .add_filter("Codeplug", &["950pro", "dat"])
                        .pick_file()
                    {
                        self.open_codeplug(&path);
                    }
                }
                if ui.button("Save").clicked() {
                    if let Some(path) = rfd::FileDialog::new()
                        .add_filter("RT-950 JSON", &["950pro"])
                        .add_filter("CPS data", &["dat"])
                        .set_file_name("codeplug.950pro")
                        .save_file()
                    {
                        self.save_codeplug(&path);
                    }
                }
                ui.separator();
                self.ui_callsign(ui);
                ui.separator();
                if ui.checkbox(&mut self.dark, "Dark").changed() {
                    self.apply_theme(&ctx);
                }
                if ui.button("Log").clicked() {
                    self.log_open = !self.log_open;
                }
            });
        });

        egui::Panel::top("pages").show_inside(ui, |ui| {
            // One row. A later tab scrolls sideways instead of wrapping
            // onto a second line and pushing the page body down.
            egui::ScrollArea::horizontal()
                .id_salt("page-tabs")
                .show(ui, |ui| {
                    ui.horizontal(|ui| {
                        for (page, label) in [
                            (Page::Global, "Global"),
                            (Page::Aprs, "APRS"),
                            (Page::Channels, "Channels"),
                            (Page::Shortwave, "Shortwave"),
                            (Page::Am, "AM"),
                            (Page::Fm, "FM"),
                        ] {
                            if ui
                                .add(egui::Button::selectable(self.page == page, label))
                                .clicked()
                            {
                                self.page = page;
                            }
                        }
                    });
                });
        });

        egui::Panel::bottom("status").show_inside(ui, |ui| {
            let n = self.doc.as_ref().map(channels::channel_count).unwrap_or(0);
            ui.horizontal(|ui| {
                ui.label(format!("{n} channels"));
                ui.separator();
                ui.label(&self.status);
            });
        });

        if self.log_open {
            egui::Panel::bottom("log")
                .resizable(true)
                .default_size(120.0)
                .show_inside(ui, |ui| {
                    ui.horizontal(|ui| {
                        ui.label("Log");
                        if ui.button("Clear").clicked() {
                            self.log.clear();
                        }
                    });
                    egui::ScrollArea::vertical()
                        .stick_to_bottom(true)
                        .show(ui, |ui| {
                            for line in &self.log {
                                ui.monospace(line);
                            }
                        });
                });
        }

        egui::CentralPanel::default().show_inside(ui, |ui| match self.page {
            Page::Channels => {
                if let Some(doc) = self.doc.as_mut() {
                    channels::show(ui, doc, &mut self.zone, &mut self.selected);
                } else {
                    ui.label("Open a .dat to edit channels.");
                }
            }
            Page::Shortwave => {
                if let Some(doc) = self.doc.as_mut() {
                    shortwave::show(ui, doc, shortwave::Band::Ssb);
                } else {
                    ui.label("Open a .dat to edit shortwave memories.");
                }
            }
            Page::Am => {
                if let Some(doc) = self.doc.as_mut() {
                    shortwave::show(ui, doc, shortwave::Band::Am);
                } else {
                    ui.label("Open a .dat to edit AM memories.");
                }
            }
            Page::Fm => {
                if let Some(doc) = self.doc.as_mut() {
                    shortwave::show(ui, doc, shortwave::Band::Fm);
                } else {
                    ui.label("Open a .dat to edit FM memories.");
                }
            }
            Page::Global => {
                egui::ScrollArea::vertical()
                    .id_salt("global")
                    .auto_shrink([false, false])
                    .show(ui, |ui| {
                        if let Some(doc) = self.doc.as_mut() {
                            ui.heading("VFO");
                            vfo::show(ui, doc);
                            ui.add_space(16.0);
                            ui.heading("Radio");
                            radio::show(ui, doc);
                            ui.add_space(16.0);
                            dtmf::show(ui, doc);
                            ui.add_space(16.0);
                        } else {
                            ui.label("Open a .dat to edit global settings.");
                            ui.add_space(16.0);
                        }
                        self.ui_boot(ui);
                    });
            }
            Page::Aprs => {
                if let Some(doc) = self.doc.as_mut() {
                    aprs::show(
                        ui,
                        doc,
                        &self.port,
                        &mut self.kiss,
                        &mut self.stations,
                        &mut self.kiss_status,
                    );
                } else {
                    ui.label("Open a .dat to edit APRS.");
                }
            }
        });

        if let Some(detail) = self.power_cycle.clone() {
            egui::Window::new("Power Cycle the Radio")
                .collapsible(false)
                .resizable(false)
                .anchor(egui::Align2::CENTER_CENTER, [0.0, 0.0])
                .show(ui.ctx(), |ui| {
                    ui.heading("Power Cycle the Radio");
                    ui.label(&detail);
                    if ui.button("OK").clicked() {
                        self.power_cycle = None;
                    }
                });
        }

        if self.confirm_write {
            egui::Window::new("Write to radio")
                .collapsible(false)
                .anchor(egui::Align2::CENTER_CENTER, [0.0, 0.0])
                .show(ui.ctx(), |ui| {
                    ui.label(format!(
                        "Program the radio on {} with the channels on screen?",
                        self.port
                    ));
                    ui.horizontal(|ui| {
                        if ui.button("Write").clicked() {
                            self.confirm_write = false;
                            self.write_radio();
                        }
                        if ui.button("Cancel").clicked() {
                            self.confirm_write = false;
                        }
                    });
                });
        }

        if self.confirm_boot {
            let path = self.boot_path.clone();
            let port = self.port.clone();
            egui::Window::new("Send boot picture")
                .collapsible(false)
                .anchor(egui::Align2::CENTER_CENTER, [0.0, 0.0])
                .show(ui.ctx(), |ui| {
                    ui.label(format!("Send this picture to {port}?"));
                    ui.monospace(&path);
                    ui.label("The radio stores the image. This tool cannot read it back.");
                    ui.horizontal(|ui| {
                        if ui.button("Send").clicked() {
                            self.confirm_boot = false;
                            self.send_boot();
                        }
                        if ui.button("Cancel").clicked() {
                            self.confirm_boot = false;
                        }
                    });
                });
        }
    }
}

impl CpsApp {
    fn ui_callsign(&mut self, ui: &mut egui::Ui) {
        let mut rejected = false;
        let mut unset = false;
        if let Some(doc) = self.doc.as_mut() {
            if let Some(aprs) = doc.pointer_mut("/aprsData") {
                if let Some(cur) = aprs.get("tB_CallSign").and_then(|v| v.as_str()) {
                    unset = cur == "NOCALL" || cur == "N0CALL";
                    let mut buf = cur.to_string();
                    ui.label("Callsign");
                    let response = ui.add(
                        egui::TextEdit::singleline(&mut buf)
                            .char_limit(6)
                            .desired_width(84.0)
                            .hint_text("N0CALL"),
                    );
                    if response.changed() {
                        let cleaned: String = buf
                            .chars()
                            .filter(|c| c.is_ascii_alphanumeric())
                            .take(6)
                            .collect::<String>()
                            .to_uppercase();
                        if cleaned.is_empty() {
                            rejected = true;
                        } else {
                            unset = cleaned == "NOCALL" || cleaned == "N0CALL";
                            aprs["tB_CallSign"] = json!(cleaned);
                        }
                    }
                }
            }
        }
        if unset {
            ui.label(egui::RichText::new("unset").weak());
        }
        if rejected {
            self.status =
                "Callsign stays put when blank. The radio keeps the previous 6 bytes.".into();
        }
    }

    fn ui_boot(&mut self, ui: &mut egui::Ui) {
        ui.heading("Boot picture");
        ui.label("Uncompressed 24-bit BMP, 240×320. Sending needs the cable and a confirm.");
        ui.label("There is no read-back. Keep the BMP as the backup.");
        ui.add_space(8.0);
        ui.horizontal(|ui| {
            ui.add(
                egui::TextEdit::singleline(&mut self.boot_path)
                    .desired_width(420.0)
                    .hint_text("path to .bmp"),
            );
            if ui.button("Choose").clicked() {
                if let Some(path) = rfd::FileDialog::new()
                    .add_filter("Bitmap", &["bmp"])
                    .pick_file()
                {
                    self.boot_path = path.display().to_string();
                }
            }
            if ui.button("Send to radio").clicked() {
                match check_bmp(Path::new(self.boot_path.trim())) {
                    Ok(()) => self.confirm_boot = true,
                    Err(e) => self.status = e,
                }
            }
        });
    }
}

fn check_bmp(path: &Path) -> Result<(), String> {
    if path.as_os_str().is_empty() {
        return Err("Choose a BMP first.".into());
    }
    let data = std::fs::read(path).map_err(|e| format!("cannot read image: {e}"))?;
    if data.len() < 54 || &data[0..2] != b"BM" {
        return Err("That file is not a BMP.".into());
    }
    let width = i32::from_le_bytes(data[18..22].try_into().map_err(|_| "short BMP header")?);
    let height = i32::from_le_bytes(data[22..26].try_into().map_err(|_| "short BMP header")?);
    let bpp = u16::from_le_bytes(data[28..30].try_into().map_err(|_| "short BMP header")?);
    let compression = u32::from_le_bytes(data[30..34].try_into().map_err(|_| "short BMP header")?);
    if width != 240 || height.unsigned_abs() != 320 || bpp != 24 || compression != 0 {
        return Err(format!(
            "Need an uncompressed 24-bit 240×320 BMP. This file is {width}×{height}, {bpp}-bit."
        ));
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use serde_json::json;

    use super::{
        dat_beside, is_950pro, json_beside, power_cycle_notice,
        restore_memory_transmit, write_codeplug_file,
    };

    #[test]
    fn save_writes_950pro_beside_the_dat() {
        let dat = Path::new("/tmp/indyham-2026-10-03.dat");
        assert_eq!(
            json_beside(dat),
            PathBuf::from("/tmp/indyham-2026-10-03.950pro")
        );
        assert!(is_950pro(Path::new("codeplug.950PRO")));
        assert_eq!(
            dat_beside(Path::new("/tmp/indyham-2026-10-03.950pro")),
            PathBuf::from("/tmp/indyham-2026-10-03.dat")
        );
    }

    #[test]
    fn radio_read_restores_fm_transmit_and_leaves_ais_receive_only() {
        let mut doc = json!({
            "channelData": {
                "channelList": [
                    {"chName": "CB 01", "rxFreq": "26.96500", "rxModulation": 0},
                    {"chName": "MURS 1", "rxFreq": "151.82000", "rxModulation": 0},
                    {"chName": "FRS 01", "rxFreq": "462.56250", "rxModulation": 0},
                    {"chName": "GMRS 15R", "rxFreq": "462.55000", "rxModulation": 0},
                    {"chName": "AIS 1", "rxFreq": "161.97500", "rxModulation": 0},
                    {"chName": "", "rxFreq": "000.00000", "rxModulation": 0},
                    {"chName": "CVG TWR", "rxFreq": "118.30000", "rxModulation": 1}
                ]
            }
        });
        assert_eq!(restore_memory_transmit(&mut doc), 4);
        let list = &doc["channelData"]["channelList"];
        assert_eq!(list[0]["rxModulation"], 2);
        assert_eq!(list[1]["rxModulation"], 2);
        assert_eq!(list[2]["rxModulation"], 2);
        assert_eq!(list[3]["rxModulation"], 2);
        assert_eq!(list[4]["rxModulation"], 0);
        assert_eq!(list[5]["rxModulation"], 0);
        assert_eq!(list[6]["rxModulation"], 1);
    }

    #[test]
    fn toover_and_other_codes_ask_for_a_power_cycle() {
        assert!(power_cycle_notice(
            "error: Read timed out (TOOVER). The radio did not answer."
        ));
        assert!(power_cycle_notice(
            "Write failed: the radio model did not match (MODELERR)."
        ));
        assert!(power_cycle_notice("Read aborted (EXCABORT)."));
        assert!(power_cycle_notice("timeout: wanted 1 bytes, got 0"));
        assert!(!power_cycle_notice("error: open /dev/ttyUSB0 failed: busy"));
    }

    #[test]
    fn save_950pro_writes_json_without_a_template() {
        let path = std::env::temp_dir().join("rt950-cps-save-test.950pro");
        let doc = json!({"channelData": {"channelList": []}});
        write_codeplug_file(&doc, &path).unwrap();
        let text = std::fs::read_to_string(&path).unwrap();
        let _ = std::fs::remove_file(&path);
        assert!(text.ends_with('\n'));
        assert!(text.contains("\"channelData\""));
        assert!(!text.contains("RT-950PRO_CPS"));
    }
}
