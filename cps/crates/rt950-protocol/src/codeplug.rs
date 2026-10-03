//! Logical codeplug matching OEM CPS / community editor domains.
//! Field names follow `re/cps/cps_teardown.md` (`KDH.Channel`, `KDH.RadioData`).

use serde::{Deserialize, Serialize};

/// Default channel count used by the scaffold UI (filled from capture later).
pub const DEFAULT_CHANNEL_SLOTS: usize = 256;
pub const DEFAULT_ZONE_COUNT: usize = 16;

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
pub struct Channel {
    pub rx_freq: String,
    pub tx_freq: String,
    pub rx_qt: String,
    pub tx_qt: String,
    pub signalling_group: i32,
    pub ptt_id: i32,
    pub tx_power: i32,
    pub scram: i32,
    pub learn_fhss: i32,
    pub band_wide: i32,
    pub encrypt: i32,
    pub busy_lockout: i32,
    pub scan_add: i32,
    pub rx_modulation: i32,
    pub fhss_code: String,
    pub ch_name: String,
    /// Soft inhibit — community editor “TX Enable” style.
    pub tx_enable: bool,
}

impl Default for Channel {
    fn default() -> Self {
        Self {
            rx_freq: String::new(),
            tx_freq: String::new(),
            rx_qt: "OFF".into(),
            tx_qt: "OFF".into(),
            signalling_group: 0,
            ptt_id: 0,
            tx_power: 0,
            scram: 0,
            learn_fhss: 0,
            band_wide: 0,
            encrypt: 0,
            busy_lockout: 0,
            scan_add: 1,
            rx_modulation: 0,
            fhss_code: String::new(),
            ch_name: String::new(),
            tx_enable: true,
        }
    }
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct ChannelData {
    pub channels: Vec<Channel>,
    pub zone_names: Vec<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct FreqModeData {
    /// Placeholder until VFO block layout is captured.
    pub notes: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct FunConfigData {
    pub notes: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct DtmfData {
    pub notes: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct ModulationData {
    pub notes: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct AprsData {
    pub callsign: String,
    pub notes: String,
}

/// Root blob analogous to OEM `KDH.RadioData` (our JSON, not BinaryFormatter).
#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, Default)]
pub struct Codeplug {
    pub channel_data: ChannelData,
    pub freq_mode_data: FreqModeData,
    pub fun_config_data: FunConfigData,
    pub dtmf_data: DtmfData,
    pub modulation_data: ModulationData,
    pub aprs_data: AprsData,
}

pub fn empty_codeplug() -> Codeplug {
    let mut channels = Vec::with_capacity(DEFAULT_CHANNEL_SLOTS);
    for i in 0..DEFAULT_CHANNEL_SLOTS {
        let mut ch = Channel::default();
        ch.ch_name = format!("CH{:03}", i + 1);
        channels.push(ch);
    }
    let zone_names = (0..DEFAULT_ZONE_COUNT)
        .map(|i| format!("Zone {}", i + 1))
        .collect();
    Codeplug {
        channel_data: ChannelData {
            channels,
            zone_names,
        },
        ..Default::default()
    }
}

impl Codeplug {
    pub fn to_json_pretty(&self) -> Result<String, serde_json::Error> {
        serde_json::to_string_pretty(self)
    }

    pub fn from_json(s: &str) -> Result<Self, serde_json::Error> {
        serde_json::from_str(s)
    }
}
