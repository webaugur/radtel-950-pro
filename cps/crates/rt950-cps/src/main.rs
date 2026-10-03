//! RT-950 / RT-950 Pro community-style CPS shell (eframe + egui).
//!
//! UI modeled on Maxx Steele `maxxbas` (`eframe`/`egui`) and the feature
//! layout of cruzerdlc/RT-950-950Pro-Editor. Protocol R/W fills in after
//! USB capture.

use eframe::egui;
use rt950_protocol::{Codeplug, DEFAULT_BAUD, empty_codeplug, list_ports, probe_handshake};

fn main() -> eframe::Result {
    let options = eframe::NativeOptions {
        viewport: egui::ViewportBuilder::default()
            .with_inner_size([1280.0, 800.0])
            .with_min_inner_size([900.0, 600.0])
            .with_title("RT-950 / 950Pro CPS"),
        ..Default::default()
    };

    eframe::run_native(
        "RT-950 / 950Pro CPS",
        options,
        Box::new(|cc| Ok(Box::new(CpsApp::new(cc)))),
    )
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Nav {
    Connection,
    Channels,
    Zones,
    Vfo,
    OptionalFeatures,
    Dtmf,
    Modulation,
    Aprs,
    Log,
}

impl Nav {
    fn label(self) -> &'static str {
        match self {
            Nav::Connection => "Connection",
            Nav::Channels => "Memory Channels",
            Nav::Zones => "Zones",
            Nav::Vfo => "VFO Mode",
            Nav::OptionalFeatures => "Optional Features",
            Nav::Dtmf => "DTMF Codes",
            Nav::Modulation => "FM/AM/SSB",
            Nav::Aprs => "APRS Info",
            Nav::Log => "Log",
        }
    }

    const ALL: &'static [Nav] = &[
        Nav::Connection,
        Nav::Channels,
        Nav::Zones,
        Nav::Vfo,
        Nav::OptionalFeatures,
        Nav::Dtmf,
        Nav::Modulation,
        Nav::Aprs,
        Nav::Log,
    ];
}

struct CpsApp {
    nav: Nav,
    codeplug: Codeplug,
    dirty: bool,
    dark: bool,
    ports: Vec<(String, String)>,
    selected_port: String,
    baud: u32,
    status: String,
    log: Vec<String>,
    channel_filter: String,
    zone_filter: usize,
}

impl CpsApp {
    fn new(cc: &eframe::CreationContext<'_>) -> Self {
        let dark = cc.egui_ctx.global_style().visuals.dark_mode;
        let mut app = Self {
            nav: Nav::Connection,
            codeplug: empty_codeplug(),
            dirty: false,
            dark,
            ports: Vec::new(),
            selected_port: String::new(),
            baud: DEFAULT_BAUD,
            status: "Ready — scaffold UI; radio R/W awaits USB capture.".into(),
            log: Vec::new(),
            channel_filter: String::new(),
            zone_filter: 0,
        };
        app.refresh_ports();
        app.apply_theme(&cc.egui_ctx);
        app.log_line("RT-950 CPS scaffold started (egui/eframe).");
        app.log_line("Protocol: handshake known; block map TBD after COM capture.");
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

    fn log_line(&mut self, msg: impl Into<String>) {
        let ts = chrono::Local::now().format("%H:%M:%S");
        self.log.push(format!("[{ts}] {}", msg.into()));
        if self.log.len() > 500 {
            self.log.drain(0..self.log.len() - 500);
        }
    }

    fn refresh_ports(&mut self) {
        match list_ports() {
            Ok(list) => {
                self.ports = list
                    .into_iter()
                    .map(|p| (p.name.clone(), format!("{} — {}", p.name, p.description)))
                    .collect();
                if self.selected_port.is_empty() {
                    if let Some((name, _)) = self.ports.first() {
                        self.selected_port = name.clone();
                    }
                }
                self.log_line(format!("Found {} serial port(s).", self.ports.len()));
            }
            Err(e) => {
                self.ports.clear();
                self.log_line(format!("Port list failed: {e}"));
            }
        }
    }

    fn probe(&mut self) {
        if self.selected_port.is_empty() {
            self.status = "Select a COM / tty port first.".into();
            return;
        }
        let port = self.selected_port.clone();
        let baud = self.baud;
        self.log_line(format!("Probing handshake on {port} @ {baud}…"));
        match probe_handshake(&port, baud) {
            Ok(msg) => {
                self.status = msg.clone();
                self.log_line(msg);
            }
            Err(e) => {
                self.status = e.to_string();
                self.log_line(format!("Handshake failed: {e}"));
            }
        }
    }

    fn read_radio_stub(&mut self) {
        self.status = "Read Radio: not implemented until block map is captured.".into();
        self.log_line(self.status.clone());
        self.nav = Nav::Log;
    }

    fn write_radio_stub(&mut self) {
        self.status = "Write Radio: not implemented until block map is captured.".into();
        self.log_line(self.status.clone());
        self.nav = Nav::Log;
    }

    fn new_codeplug(&mut self) {
        self.codeplug = empty_codeplug();
        self.dirty = false;
        self.status = "New empty codeplug.".into();
        self.log_line("Created empty codeplug (256 channels).");
    }

    fn save_json(&mut self) {
        let Some(path) = rfd::FileDialog::new()
            .add_filter("JSON codeplug", &["json"])
            .set_file_name("rt950-codeplug.json")
            .save_file()
        else {
            return;
        };
        match self.codeplug.to_json_pretty() {
            Ok(text) => match std::fs::write(&path, text) {
                Ok(()) => {
                    self.dirty = false;
                    self.status = format!("Saved {}", path.display());
                    self.log_line(self.status.clone());
                }
                Err(e) => {
                    self.status = format!("Save failed: {e}");
                    self.log_line(self.status.clone());
                }
            },
            Err(e) => {
                self.status = format!("Serialize failed: {e}");
                self.log_line(self.status.clone());
            }
        }
    }

    fn open_json(&mut self) {
        let Some(path) = rfd::FileDialog::new()
            .add_filter("JSON codeplug", &["json"])
            .pick_file()
        else {
            return;
        };
        match std::fs::read_to_string(&path) {
            Ok(text) => match Codeplug::from_json(&text) {
                Ok(plug) => {
                    self.codeplug = plug;
                    self.dirty = false;
                    self.status = format!("Opened {}", path.display());
                    self.log_line(self.status.clone());
                }
                Err(e) => {
                    self.status = format!("Parse failed: {e}");
                    self.log_line(self.status.clone());
                }
            },
            Err(e) => {
                self.status = format!("Open failed: {e}");
                self.log_line(self.status.clone());
            }
        }
    }
}

impl eframe::App for CpsApp {
    fn ui(&mut self, ui: &mut egui::Ui, _frame: &mut eframe::Frame) {
        let ctx = ui.ctx().clone();

        egui::Panel::top("menu").show_inside(ui, |ui| {
            egui::MenuBar::new().ui(ui, |ui| {
                ui.menu_button("File", |ui| {
                    if ui.button("New codeplug").clicked() {
                        self.new_codeplug();
                        ui.close();
                    }
                    if ui.button("Open JSON…").clicked() {
                        self.open_json();
                        ui.close();
                    }
                    if ui.button("Save JSON…").clicked() {
                        self.save_json();
                        ui.close();
                    }
                    ui.separator();
                    if ui.button("Quit").clicked() {
                        ctx.send_viewport_cmd(egui::ViewportCommand::Close);
                    }
                });
                ui.menu_button("Radio", |ui| {
                    if ui.button("Refresh ports").clicked() {
                        self.refresh_ports();
                        ui.close();
                    }
                    if ui.button("Probe handshake").clicked() {
                        self.probe();
                        ui.close();
                    }
                    ui.separator();
                    if ui.button("Read Radio (stub)").clicked() {
                        self.read_radio_stub();
                        ui.close();
                    }
                    if ui.button("Write Radio (stub)").clicked() {
                        self.write_radio_stub();
                        ui.close();
                    }
                });
                ui.menu_button("View", |ui| {
                    if ui.checkbox(&mut self.dark, "Dark mode").changed() {
                        self.apply_theme(&ctx);
                    }
                });
                ui.menu_button("Help", |ui| {
                    ui.label("Scaffold — webaugur/radtel-950-pro/cps");
                    ui.label("UI: eframe/egui (Maxx Steele style)");
                    ui.label("Next: USB capture with OEM CPS under Wine");
                });
            });
        });

        egui::Panel::bottom("status").show_inside(ui, |ui| {
            ui.horizontal(|ui| {
                if self.dirty {
                    ui.colored_label(egui::Color32::YELLOW, "● unsaved");
                } else {
                    ui.label("○ saved");
                }
                ui.separator();
                ui.label(self.status.clone());
            });
        });

        egui::Panel::left("nav")
            .resizable(true)
            .default_size(180.0)
            .show_inside(ui, |ui| {
                ui.heading("RT-950 CPS");
                ui.label(env!("CARGO_PKG_VERSION"));
                ui.separator();
                for nav in Nav::ALL {
                    let selected = self.nav == *nav;
                    if ui.selectable_label(selected, nav.label()).clicked() {
                        self.nav = *nav;
                    }
                }
            });

        egui::CentralPanel::default().show_inside(ui, |ui| {
            match self.nav {
                Nav::Connection => self.ui_connection(ui),
                Nav::Channels => self.ui_channels(ui),
                Nav::Zones => self.ui_zones(ui),
                Nav::Vfo => self.ui_notes_page(ui, "VFO Mode", NotesField::Vfo),
                Nav::OptionalFeatures => {
                    self.ui_notes_page(ui, "Optional Features", NotesField::Optional)
                }
                Nav::Dtmf => self.ui_notes_page(ui, "DTMF", NotesField::Dtmf),
                Nav::Modulation => {
                    self.ui_notes_page(ui, "FM/AM/SSB Modulation", NotesField::Modulation)
                }
                Nav::Aprs => self.ui_aprs(ui),
                Nav::Log => self.ui_log(ui),
            }
        });
    }
}

#[derive(Clone, Copy)]
enum NotesField {
    Vfo,
    Optional,
    Dtmf,
    Modulation,
}

impl CpsApp {
    fn ui_connection(&mut self, ui: &mut egui::Ui) {
        ui.heading("COM / USB programming");
        ui.label(
            "Uses the CPS serial path (handshake PROGRAMBT9000U), not the EnUPDATE flash protocol.",
        );
        ui.add_space(8.0);

        ui.horizontal(|ui| {
            ui.label("Port");
            egui::ComboBox::from_id_salt("port")
                .selected_text(if self.selected_port.is_empty() {
                    "(none)".into()
                } else {
                    self.selected_port.clone()
                })
                .show_ui(ui, |ui| {
                    for (name, label) in &self.ports {
                        ui.selectable_value(&mut self.selected_port, name.clone(), label);
                    }
                });
            if ui.button("Refresh").clicked() {
                self.refresh_ports();
            }
        });

        ui.horizontal(|ui| {
            ui.label("Baud");
            ui.add(egui::DragValue::new(&mut self.baud).range(9600..=921_600));
            if ui.button("Reset 115200").clicked() {
                self.baud = DEFAULT_BAUD;
            }
        });

        ui.add_space(12.0);
        ui.horizontal(|ui| {
            if ui.button("Probe handshake").clicked() {
                self.probe();
            }
            if ui.button("Read Radio (stub)").clicked() {
                self.read_radio_stub();
            }
            if ui.button("Write Radio (stub)").clicked() {
                self.write_radio_stub();
            }
        });

        ui.add_space(16.0);
        ui.group(|ui| {
            ui.label("Capture plan (when radio + Wine CPS are ready)");
            ui.label("1. Close this app so the tty is free.");
            ui.label("2. Run OEM CPS under Wine; perform a full Read.");
            ui.label("3. Capture with wireshark/usbmon or a tty sniffer.");
            ui.label("4. Paste traces into docs/ — fill rt950-protocol block map.");
        });
    }

    fn ui_channels(&mut self, ui: &mut egui::Ui) {
        ui.horizontal(|ui| {
            ui.heading("Memory Channels");
            ui.text_edit_singleline(&mut self.channel_filter);
            ui.label("filter");
        });

        let filter = self.channel_filter.to_lowercase();
        egui::ScrollArea::both().auto_shrink([false, false]).show(ui, |ui| {
            egui::Grid::new("ch_grid")
                .striped(true)
                .min_col_width(64.0)
                .show(ui, |ui| {
                    ui.label("#");
                    ui.label("Name");
                    ui.label("RX");
                    ui.label("TX");
                    ui.label("RX QT");
                    ui.label("TX QT");
                    ui.label("Power");
                    ui.label("Wide");
                    ui.label("Scan");
                    ui.label("TX En");
                    ui.end_row();

                    let mut dirty = false;
                    for (i, ch) in self.codeplug.channel_data.channels.iter_mut().enumerate() {
                        if !filter.is_empty() {
                            let hay = format!("{} {} {}", ch.ch_name, ch.rx_freq, ch.tx_freq)
                                .to_lowercase();
                            if !hay.contains(&filter) {
                                continue;
                            }
                        }
                        ui.label(format!("{}", i + 1));
                        dirty |= ui.text_edit_singleline(&mut ch.ch_name).changed();
                        dirty |= ui.text_edit_singleline(&mut ch.rx_freq).changed();
                        dirty |= ui.text_edit_singleline(&mut ch.tx_freq).changed();
                        dirty |= ui.text_edit_singleline(&mut ch.rx_qt).changed();
                        dirty |= ui.text_edit_singleline(&mut ch.tx_qt).changed();
                        dirty |= ui.add(egui::DragValue::new(&mut ch.tx_power)).changed();
                        dirty |= ui.add(egui::DragValue::new(&mut ch.band_wide)).changed();
                        dirty |= ui.add(egui::DragValue::new(&mut ch.scan_add)).changed();
                        dirty |= ui.checkbox(&mut ch.tx_enable, "").changed();
                        ui.end_row();
                    }
                    if dirty {
                        self.dirty = true;
                    }
                });
        });
    }

    fn ui_zones(&mut self, ui: &mut egui::Ui) {
        ui.heading("Zones");
        ui.label("Zone names (channel↔zone membership map TBD from capture).");
        ui.add_space(8.0);
        let mut dirty = false;
        for (i, name) in self.codeplug.channel_data.zone_names.iter_mut().enumerate() {
            ui.horizontal(|ui| {
                ui.label(format!("{}", i + 1));
                if ui.text_edit_singleline(name).changed() {
                    dirty = true;
                }
                if ui
                    .selectable_label(self.zone_filter == i, "focus")
                    .clicked()
                {
                    self.zone_filter = i;
                }
            });
        }
        if dirty {
            self.dirty = true;
        }
    }

    fn ui_aprs(&mut self, ui: &mut egui::Ui) {
        ui.heading("APRS Info");
        ui.horizontal(|ui| {
            ui.label("Callsign");
            if ui
                .text_edit_singleline(&mut self.codeplug.aprs_data.callsign)
                .changed()
            {
                self.dirty = true;
            }
        });
        ui.label("Notes / freeform until binary layout is known:");
        if ui
            .text_edit_multiline(&mut self.codeplug.aprs_data.notes)
            .changed()
        {
            self.dirty = true;
        }
    }

    fn ui_notes_page(&mut self, ui: &mut egui::Ui, title: &str, field: NotesField) {
        ui.heading(title);
        ui.label("Fields will expand once the corresponding EEPROM block is documented.");
        let notes = match field {
            NotesField::Vfo => &mut self.codeplug.freq_mode_data.notes,
            NotesField::Optional => &mut self.codeplug.fun_config_data.notes,
            NotesField::Dtmf => &mut self.codeplug.dtmf_data.notes,
            NotesField::Modulation => &mut self.codeplug.modulation_data.notes,
        };
        if ui.text_edit_multiline(notes).changed() {
            self.dirty = true;
        }
    }

    fn ui_log(&mut self, ui: &mut egui::Ui) {
        ui.horizontal(|ui| {
            ui.heading("Log");
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
    }
}
