//! RT-950 CPS front end. Radio and .dat I/O go through radtel_cps.py.

mod shell;

use std::path::{Path, PathBuf};

use eframe::egui;
use serde_json::{json, Value};
use shell::Shell;

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

struct CpsApp {
    shell: Result<Shell, String>,
    doc: Option<Value>,
    template: Option<PathBuf>,
    zone: usize,
    selected: Option<usize>,
    port: String,
    log: Vec<String>,
    log_open: bool,
    status: String,
    dark: bool,
    confirm_write: bool,
}

impl CpsApp {
    fn new(cc: &eframe::CreationContext<'_>) -> Self {
        let dark = cc.egui_ctx.global_style().visuals.dark_mode;
        let app = Self {
            shell: Shell::locate(),
            doc: None,
            template: None,
            zone: 0,
            selected: Some(0),
            port: "/dev/ttyUSB0".into(),
            log: Vec::new(),
            log_open: false,
            status: "Open a .dat or read the radio.".into(),
            dark,
            confirm_write: false,
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

    fn run(&mut self, lines: &[String]) -> Result<String, String> {
        let shell = self.shell.as_ref().map_err(|e| e.clone())?;
        let result = shell.run(lines)?;
        self.log_lines(&result.stderr);
        if result.code != 0 {
            let detail = result
                .stderr
                .lines()
                .rev()
                .find(|l| l.starts_with("error:"))
                .unwrap_or("cps shell failed")
                .to_string();
            self.log_open = true;
            self.status = detail.clone();
            return Err(detail);
        }
        Ok(result.stdout)
    }

    fn load_dat(&mut self, path: &Path) {
        let line = format!("dat-export {}", shell_quote(path));
        match self.run(&[line]) {
            Ok(stdout) => match serde_json::from_str::<Value>(stdout.trim()) {
                Ok(doc) => {
                    self.doc = Some(doc);
                    self.template = Some(path.to_path_buf());
                    self.zone = 0;
                    self.selected = Some(0);
                    self.status = format!("Opened {}", path.display());
                }
                Err(e) => {
                    self.status = format!("JSON from shell was not a codeplug: {e}");
                    self.log_open = true;
                    self.log_lines(&stdout);
                }
            },
            Err(e) => self.status = e,
        }
    }

    fn save_dat(&mut self, path: &Path) {
        let Some(template) = self.template.clone() else {
            self.status = "Open or read a .dat before saving (needed as template).".into();
            return;
        };
        let Some(doc) = &self.doc else {
            self.status = "Nothing to save.".into();
            return;
        };
        let json_path = std::env::temp_dir().join("rt950-cps-edit.json");
        if let Err(e) = std::fs::write(&json_path, doc.to_string()) {
            self.status = format!("temp JSON failed: {e}");
            return;
        }
        let line = format!(
            "dat-import {} {} {}",
            shell_quote(&template),
            shell_quote(&json_path),
            shell_quote(path)
        );
        match self.run(&[line]) {
            Ok(_) => {
                self.template = Some(path.to_path_buf());
                self.status = format!("Saved {}", path.display());
            }
            Err(e) => self.status = e,
        }
    }

    fn read_radio(&mut self) {
        let Some(path) = rfd::FileDialog::new()
            .add_filter("CPS data", &["dat"])
            .set_file_name("RT-950-read.dat")
            .save_file()
        else {
            return;
        };
        let lines = vec![
            format!("port {}", self.port),
            format!("read-dat {}", shell_quote(&path)),
        ];
        self.status = format!("Reading radio into {}…", path.display());
        if let Err(e) = self.run(&lines) {
            self.status = e;
            return;
        }
        self.load_dat(&path);
        if self.doc.is_some() {
            self.status = format!("Read {} into {}", self.port, path.display());
        }
    }

    fn write_radio(&mut self) {
        let Some(template) = self.template.clone() else {
            self.status = "Nothing loaded to write.".into();
            return;
        };
        let Some(doc) = &self.doc else {
            self.status = "Nothing loaded to write.".into();
            return;
        };
        let json_path = std::env::temp_dir().join("rt950-cps-write.json");
        let dat_path = std::env::temp_dir().join("rt950-cps-write.dat");
        if let Err(e) = std::fs::write(&json_path, doc.to_string()) {
            self.status = format!("temp JSON failed: {e}");
            return;
        }
        let lines = vec![
            format!(
                "dat-import {} {} {}",
                shell_quote(&template),
                shell_quote(&json_path),
                shell_quote(&dat_path)
            ),
            format!("port {}", self.port),
            format!("write-dat {} confirm", shell_quote(&dat_path)),
        ];
        self.status = "Writing radio…".into();
        match self.run(&lines) {
            Ok(_) => self.status = format!("Wrote {}", self.port),
            Err(e) => self.status = e,
        }
    }
}

impl eframe::App for CpsApp {
    fn ui(&mut self, ui: &mut egui::Ui, _frame: &mut eframe::Frame) {
        let ctx = ui.ctx().clone();
        egui::Panel::top("bar").show_inside(ui, |ui| {
            ui.horizontal(|ui| {
                ui.label("Port");
                ui.add(egui::TextEdit::singleline(&mut self.port).desired_width(160.0));
                if ui.button("Read radio").clicked() {
                    self.read_radio();
                }
                if ui.button("Write radio").clicked() {
                    self.confirm_write = true;
                }
                ui.separator();
                if ui.button("Open .dat").clicked() {
                    if let Some(path) = rfd::FileDialog::new()
                        .add_filter("CPS data", &["dat"])
                        .pick_file()
                    {
                        self.load_dat(&path);
                    }
                }
                if ui.button("Save .dat").clicked() {
                    if let Some(path) = rfd::FileDialog::new()
                        .add_filter("CPS data", &["dat"])
                        .save_file()
                    {
                        self.save_dat(&path);
                    }
                }
                ui.separator();
                if ui.checkbox(&mut self.dark, "Dark").changed() {
                    self.apply_theme(&ctx);
                }
                if ui.button("Log").clicked() {
                    self.log_open = !self.log_open;
                }
            });
        });

        egui::Panel::bottom("status").show_inside(ui, |ui| {
            let n = self.doc.as_ref().map(channel_count).unwrap_or(0);
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
                        ui.label("Shell");
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

        egui::Panel::left("zones")
            .resizable(true)
            .default_size(180.0)
            .show_inside(ui, |ui| {
                ui.heading("Zones");
                let names = zone_names(self.doc.as_ref());
                if names.is_empty() {
                    ui.label("No codeplug loaded.");
                    return;
                }
                let per = channels_per_zone(self.doc.as_ref());
                egui::ScrollArea::vertical().show(ui, |ui| {
                    for (i, name) in names.iter().enumerate() {
                        let label = format!("{name}  {per}");
                        if ui.selectable_label(self.zone == i, label).clicked() {
                            self.zone = i;
                            self.selected = Some(i * per);
                        }
                    }
                });
            });

        egui::Panel::right("inspector")
            .resizable(true)
            .default_size(280.0)
            .show_inside(ui, |ui| {
                self.ui_inspector(ui);
            });

        egui::CentralPanel::default().show_inside(ui, |ui| {
            self.ui_channels(ui);
        });

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
    }
}

impl CpsApp {
    fn ui_channels(&mut self, ui: &mut egui::Ui) {
        let names = zone_names(self.doc.as_ref());
        let title = names
            .get(self.zone)
            .cloned()
            .unwrap_or_else(|| "Channels".into());
        ui.heading(title);
        let per = channels_per_zone(self.doc.as_ref());
        let start = self.zone * per;
        let total = self.doc.as_ref().map(channel_count).unwrap_or(0);
        let end = (start + per).min(total);
        if total == 0 {
            ui.label("Open a .dat file to see channels.");
            return;
        }
        egui::ScrollArea::vertical().show(ui, |ui| {
            for idx in start..end {
                let selected = self.selected == Some(idx);
                let summary = channel_summary(self.doc.as_ref(), idx);
                let response = ui.add(egui::Button::selectable(selected, summary).wrap());
                if response.clicked() {
                    self.selected = Some(idx);
                }
            }
        });
    }

    fn ui_inspector(&mut self, ui: &mut egui::Ui) {
        let Some(idx) = self.selected else {
            ui.label("Select a channel.");
            return;
        };
        ui.heading(format!("Channel {}", idx + 1));
        let Some(doc) = self.doc.as_mut() else {
            ui.label("No codeplug.");
            return;
        };
        let Some(ch) = channel_mut(doc, idx) else {
            ui.label("Channel missing.");
            return;
        };
        edit_str(ui, "Name", ch, "chName");
        edit_str(ui, "RX", ch, "rxFreq");
        edit_str(ui, "TX", ch, "txFreq");
        edit_str(ui, "RX tone", ch, "rxQT");
        edit_str(ui, "TX tone", ch, "txQT");
        edit_choice(ui, "Power", ch, "txPower", &[(0, "High"), (1, "Mid"), (2, "Low")]);
        edit_choice(ui, "Bandwidth", ch, "bandWide", &[(0, "Wide"), (1, "Narrow")]);
        edit_choice(
            ui,
            "Mode",
            ch,
            "rxModulation",
            &[(0, "FM"), (1, "AM"), (2, "SSB")],
        );
        edit_choice(ui, "Scan", ch, "scanAdd", &[(0, "Skip"), (1, "Add")]);
        edit_choice(ui, "PTT ID", ch, "pttId", &[(0, "OFF"), (1, "BOT"), (2, "EOT"), (3, "Both")]);
        edit_choice(ui, "Scramble", ch, "scram", &[(0, "OFF"), (1, "ON")]);
        edit_choice(ui, "Learn FHSS", ch, "learnFHSS", &[(0, "OFF"), (1, "ON")]);
        edit_choice(ui, "Encrypt", ch, "encrypt", &[(0, "OFF"), (1, "ON")]);
        edit_choice(ui, "Busy lock", ch, "busyLockout", &[(0, "OFF"), (1, "ON")]);
        edit_str(ui, "FHSS code", ch, "fhssCode");
        ui.add_space(8.0);
        ui.label("Signalling group");
        if let Some(v) = ch.get_mut("signallingGroup").and_then(|v| v.as_i64()) {
            let mut n = v as i32;
            if ui.add(egui::DragValue::new(&mut n).range(0..=255)).changed() {
                ch["signallingGroup"] = json!(n);
            }
        }
    }
}

fn edit_str(ui: &mut egui::Ui, label: &str, ch: &mut Value, key: &str) {
    let Some(slot) = ch.get_mut(key) else {
        return;
    };
    let Some(text) = slot.as_str() else {
        return;
    };
    let mut buf = text.to_string();
    ui.label(label);
    if ui.text_edit_singleline(&mut buf).changed() {
        *slot = json!(buf);
    }
}

fn edit_choice(ui: &mut egui::Ui, label: &str, ch: &mut Value, key: &str, choices: &[(i32, &str)]) {
    let Some(cur) = ch.get(key).and_then(|v| v.as_i64()) else {
        return;
    };
    let cur = cur as i32;
    let shown = choices
        .iter()
        .find(|(n, _)| *n == cur)
        .map(|(_, name)| *name)
        .unwrap_or("Other");
    ui.horizontal(|ui| {
        ui.label(label);
        egui::ComboBox::from_id_salt(key)
            .selected_text(shown)
            .show_ui(ui, |ui| {
                for (n, name) in choices {
                    if ui.selectable_label(cur == *n, *name).clicked() {
                        ch[key] = json!(*n);
                    }
                }
            });
    });
}

fn channel_count(doc: &Value) -> usize {
    doc.pointer("/channelData/channelList")
        .and_then(|v| v.as_array())
        .map(|a| a.len())
        .unwrap_or(0)
}

fn zone_names(doc: Option<&Value>) -> Vec<String> {
    let Some(doc) = doc else {
        return Vec::new();
    };
    doc.pointer("/channelData/arrayZoneName")
        .and_then(|v| v.as_array())
        .map(|a| {
            a.iter()
                .map(|v| v.as_str().unwrap_or("").to_string())
                .collect()
        })
        .unwrap_or_default()
}

fn channels_per_zone(doc: Option<&Value>) -> usize {
    let Some(doc) = doc else {
        return 0;
    };
    let n = channel_count(doc);
    let z = zone_names(Some(doc)).len().max(1);
    if n == 0 {
        0
    } else {
        n / z
    }
}

fn channel_summary(doc: Option<&Value>, idx: usize) -> String {
    let Some(ch) = doc.and_then(|d| d.pointer(&format!("/channelData/channelList/{idx}"))) else {
        return format!("{}", idx + 1);
    };
    let name = ch.get("chName").and_then(|v| v.as_str()).unwrap_or("");
    let rx = ch.get("rxFreq").and_then(|v| v.as_str()).unwrap_or("");
    let tx = ch.get("txFreq").and_then(|v| v.as_str()).unwrap_or("");
    let mode = choice_name(ch, "rxModulation", &[(0, "FM"), (1, "AM"), (2, "SSB")]);
    let bw = choice_name(ch, "bandWide", &[(0, "Wide"), (1, "Narrow")]);
    let pwr = choice_name(ch, "txPower", &[(0, "High"), (1, "Mid"), (2, "Low")]);
    format!("{:>4}   {name}\n       {rx}  →  {tx}    {mode} · {bw} · {pwr}", idx + 1)
}

fn choice_name<'a>(ch: &Value, key: &str, choices: &'a [(i32, &str)]) -> &'a str {
    let cur = ch.get(key).and_then(|v| v.as_i64()).unwrap_or(0) as i32;
    choices
        .iter()
        .find(|(n, _)| *n == cur)
        .map(|(_, name)| *name)
        .unwrap_or("?")
}

fn channel_mut(doc: &mut Value, idx: usize) -> Option<&mut Value> {
    doc.pointer_mut(&format!("/channelData/channelList/{idx}"))
}

fn shell_quote(path: &Path) -> String {
    let s = path.display().to_string();
    if s.contains([' ', '\t', '"', '\'']) {
        format!("\"{}\"", s.replace('"', "\\\""))
    } else {
        s
    }
}
