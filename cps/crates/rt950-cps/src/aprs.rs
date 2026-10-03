//! APRS settings. The callsign is the same `tB_CallSign` field as the top bar.

use std::collections::HashMap;

use eframe::egui;
use serde_json::Value;

use crate::edit;
use crate::kiss::{self, Feed, FeedEvent, Station};

pub fn show(
    ui: &mut egui::Ui,
    doc: &mut Value,
    port: &str,
    feed: &mut Option<Feed>,
    stations: &mut HashMap<String, Station>,
    kiss_status: &mut String,
) {
    let Some(aprs) = doc.pointer_mut("/aprsData") else {
        edit::missing(ui, "APRS");
        return;
    };
    let events = feed.as_ref().map(Feed::poll).unwrap_or_default();
    let mut failed = false;
    for event in events {
        match event {
            FeedEvent::Listening => *kiss_status = format!("Listening on {port}"),
            FeedEvent::Error(text) => {
                *kiss_status = text;
                failed = true;
            }
            FeedEvent::Station(station) => {
                stations.insert(station.call.clone(), station);
            }
        }
    }
    if failed {
        *feed = None;
    }
    map_panel(ui, aprs, port, feed, stations, kiss_status);
    ui.add_space(8.0);
    egui::ScrollArea::vertical()
        .id_salt("aprs")
        .auto_shrink([false, false])
        .show(ui, |ui| {
        ui.heading("APRS");
        ui.label(
            egui::RichText::new(
                "Callsign is shared with the bar at the top. The file default is NOCALL. An unset radio shows N0CALL.",
            )
            .weak(),
        );
        ui.add_space(4.0);
        section(ui, "Station", |ui| {
            edit::text(ui, "Callsign", aprs, "tB_CallSign");
            edit::drag(ui, "SSID", aprs, "cbB_SSID", 0..=15);
            edit::combo(ui, "aprs", "APRS", aprs, "cbB_AprsSwitch", edit::ON_OFF);
            edit::combo(ui, "aprs", "GPS", aprs, "cbB_GpsSwitch", edit::ON_OFF);
            edit::combo(ui, "aprs", "Site", aprs, "cbB_SiteType", edit::SITE_TYPE);
            edit::combo(ui, "aprs", "Symbol", aprs, "cbB_RadioSymbol", edit::APRS_SYMBOL);
            edit::drag(ui, "User icon", aprs, "cbB_UserDefinedIcon", 0..=255);
            edit::combo(ui, "aprs", "Channel", aprs, "cbB_AprsWorkingCH", edit::APRS_CHANNEL);
            edit::combo(ui, "aprs", "Priority", aprs, "cbB_AprsPriority", edit::APRS_PRIORITY);
        });
        section(ui, "Position", |ui| {
            edit::combo(ui, "aprs", "Format", aprs, "cbB_LatitudeLongitudeUnit", edit::LAT_UNIT);
            ui.horizontal(|ui| {
                edit::drag(ui, "Lat °", aprs, "nUD_LatitudeDegree", 0..=90);
                edit::drag(ui, "'", aprs, "nUD_LatitudeMinute", 0..=59);
                edit::drag(ui, "\"", aprs, "nUD_LatitudeSecond", 0..=59);
                edit::combo(ui, "aprs", "", aprs, "cbB_NorthSouthLatitude", edit::HEMISPHERE_NS);
            });
            ui.horizontal(|ui| {
                edit::drag(ui, "Lon °", aprs, "nUD_LongitudeDegree", 0..=180);
                edit::drag(ui, "'", aprs, "nUD_LongitudeMinute", 0..=59);
                edit::drag(ui, "\"", aprs, "nUD_LongitudeSecond", 0..=59);
                edit::combo(ui, "aprs", "", aprs, "cbB_EastWestLongitude", edit::HEMISPHERE_EW);
            });
            edit::drag(ui, "Altitude", aprs, "nUD_Altitude", -1_000..=20_000);
            edit::combo(ui, "aprs", "Altitude unit", aprs, "cbB_AltitudeUnit", edit::ALT_UNIT);
            edit::combo(ui, "aprs", "Speed", aprs, "cbB_SpeedUnit", edit::SPEED_UNIT);
            edit::combo(ui, "aprs", "Distance", aprs, "cbB_DistanceUnit", edit::DISTANCE_UNIT);
            edit::combo(ui, "aprs", "Time zone", aprs, "cbB_TimeZone", edit::TIME_ZONE);
        });
        section(ui, "Beacon", |ui| {
            edit::combo(ui, "aprs", "Type", aprs, "cbB_BeaconTxType", edit::BEACON_TYPE);
            edit::combo(ui, "aprs", "Timed every", aprs, "cbB_TimedBeaconTime", edit::BEACON_TIME);
            edit::combo(ui, "aprs", "Mic-E", aprs, "cbB_MicEType", edit::MICE);
            edit::combo(ui, "aprs", "TNC", aprs, "cbB_TncDataType", edit::TNC);
            edit::drag(ui, "TX delay", aprs, "cbB_DataTxDelay", 0..=20);
            ui.label(egui::RichText::new("TX delay is the stored index. The manual range is 100–1000 ms.").weak());
            edit::drag(ui, "Popup time", aprs, "cbB_BeaconPopUpTime", 0..=20);
            ui.label(egui::RichText::new("Popup 0 reads as 5 sec on the OEM screen.").weak());
            edit::combo(ui, "aprs", "Decode tone", aprs, "cbB_AprsDecodePromptTone", edit::ON_OFF);
            edit::combo(ui, "aprs", "RX popup", aprs, "cbB_AprsRxAutoPopUp", edit::ON_OFF);
            edit::combo(ui, "aprs", "Channel mute", aprs, "cbB_AprsCHMute", edit::ON_OFF);
            edit::combo(ui, "aprs", "Send message", aprs, "cbB_SendCustomMessages", edit::ON_OFF);
            edit::text(ui, "Message", aprs, "tB_CustomMessages");
            edit::combo(ui, "aprs", "TX report", aprs, "cbB_AprsTxDataReporting", edit::ON_OFF);
        });
        section(ui, "Routing", |ui| {
            edit::combo(ui, "aprs", "Path", aprs, "cbB_RoutingSelect", edit::APRS_PATH);
            edit::combo(ui, "aprs", "Forward channel", aprs, "cbB_AprsForwardChannel", edit::FORWARD_CH);
            edit::combo(ui, "aprs", "Forward path", aprs, "cbB_AprsForwardRouting", edit::APRS_FORWARD_PATH);
            edit::combo(ui, "aprs", "Wait", aprs, "cbB_AprsWaitForward", edit::WAIT_FORWARD);
            edit::text(ui, "Custom path 1", aprs, "tB_CustomRoutingOne");
            edit::drag(ui, "Path 1 SSID", aprs, "cbB_CustomRoutingOneSSID", 0..=15);
            edit::text(ui, "Custom path 2", aprs, "tB_CustomRoutingTwo");
            edit::drag(ui, "Path 2 SSID", aprs, "cbB_CustomRoutingTwoSSID", 0..=15);
        });
    });
}

fn map_panel(
    ui: &mut egui::Ui,
    aprs: &Value,
    port: &str,
    feed: &mut Option<Feed>,
    stations: &HashMap<String, Station>,
    kiss_status: &mut String,
) {
    let center = kiss::map_center(aprs, stations);
    let rows = center
        .map(|center| kiss::stations_in_range(center, stations, 100.0))
        .unwrap_or_default();
    ui.horizontal(|ui| {
        let listening = feed.is_some();
        if ui.button(if listening { "Stop" } else { "Listen" }).clicked() {
            if listening {
                *feed = None;
                *kiss_status = format!("Stopped {port}");
            } else {
                *kiss_status = format!("Opening {port}");
                *feed = Some(Feed::start(port, ui.ctx().clone()));
            }
        }
        ui.label(
            egui::RichText::new(if kiss_status.is_empty() {
                "USB KISS at 115200. The GPS NMEA stream stays inside the radio.".to_string()
            } else {
                kiss_status.to_string()
            })
            .weak(),
        );
    });
    let (rect, _) = ui.allocate_exact_size(
        egui::vec2(ui.available_width(), 240.0),
        egui::Sense::hover(),
    );
    let bg = ui.visuals().extreme_bg_color;
    let frame = ui.visuals().widgets.noninteractive.bg_stroke.color;
    let text = ui.visuals().text_color();
    let painter = ui.painter();
    painter.rect_filled(rect, 4.0, bg);
    painter.rect_stroke(rect, 4.0, egui::Stroke::new(1.0, frame), egui::StrokeKind::Inside);
    let plot_center = rect.center();
    let radius = (rect.width().min(rect.height()) / 2.0) - 18.0;
    painter.circle_stroke(
        plot_center,
        radius,
        egui::Stroke::new(1.0, egui::Color32::from_gray(90)),
    );
    painter.text(
        egui::pos2(plot_center.x + radius - 36.0, plot_center.y - 8.0),
        egui::Align2::LEFT_CENTER,
        "100 mi",
        egui::FontId::proportional(11.0),
        egui::Color32::from_gray(140),
    );
    if let Some(center) = center {
        painter.circle_filled(plot_center, 4.0, egui::Color32::from_rgb(214, 168, 72));
        for (station, _miles) in &rows {
            let (north, east) = kiss::offset_miles(center, (station.lat, station.lon));
            let x = plot_center.x + (east / 100.0) as f32 * radius;
            let y = plot_center.y - (north / 100.0) as f32 * radius;
            let at = egui::pos2(x, y);
            painter.circle_filled(at, 4.0, egui::Color32::from_rgb(92, 184, 120));
            painter.text(
                at + egui::vec2(6.0, -6.0),
                egui::Align2::LEFT_BOTTOM,
                &station.call,
                egui::FontId::proportional(12.0),
                text,
            );
        }
    } else {
        painter.text(
            plot_center,
            egui::Align2::CENTER_CENTER,
            "No map center yet. Fixed coordinates are empty, or this callsign has not reported a GPS position.",
            egui::FontId::proportional(14.0),
            egui::Color32::from_gray(160),
        );
    }
    if center.is_none() {
        return;
    }
    if rows.is_empty() {
        ui.label(egui::RichText::new("No stations inside 100 miles.").weak());
        return;
    }
    for (station, miles) in rows {
        ui.label(format!(
            "{}   {:.0} mi   {}",
            station.call, miles, station.comment
        ));
    }
}

fn section(ui: &mut egui::Ui, title: &str, body: impl FnOnce(&mut egui::Ui)) {
    ui.add_space(8.0);
    ui.label(egui::RichText::new(title).strong());
    egui::Frame::group(ui.style()).show(ui, body);
}
