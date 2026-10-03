//! APRS settings. The callsign is the same `tB_CallSign` field as the top bar.

use eframe::egui;
use serde_json::Value;

use crate::edit;

pub fn show(ui: &mut egui::Ui, doc: &mut Value) {
    let Some(aprs) = doc.pointer_mut("/aprsData") else {
        edit::missing(ui, "APRS");
        return;
    };
    egui::ScrollArea::vertical().id_salt("aprs").show(ui, |ui| {
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

fn section(ui: &mut egui::Ui, title: &str, body: impl FnOnce(&mut egui::Ui)) {
    ui.add_space(8.0);
    ui.label(egui::RichText::new(title).strong());
    egui::Frame::group(ui.style()).show(ui, body);
}
