# NIFOG pocket pages (photo transcription)

Transcribed 2026-10-03 from pocket-guide photos. This is a programming reference for later codeplugs. Nothing here has been written to a radio.

Channel names on the RT-950 Pro are 12 characters. Frequencies are megahertz as printed. `(S)` means simplex: mobile transmit equals mobile receive.

Federal incident-response and law-enforcement channels are not on the FCC nationwide blanket authorization. The booklet says to use them only under the conditions on its pages 20–22. Non-federal VHF/UHF interoperability channels (VTAC, UCALL, UTAC) have their own rules, including a 3 watt ERP limit north of Line A or east of Line C.

Default on the federal IR channels, and on the analog LE channels, is carrier-squelch receive and CTCSS 167.9 Hz transmit. Program the receive tone only when the radio can turn it on and off without a rewrite. Channels marked `$68F` are P25 (NAC 1679 decimal). This radio’s FM memories will not decode those.

The RT-950 bandwidth field is wide (25 kHz) or narrow (12.5 kHz). It has no 6.25 kHz mode.

## Federal / non-federal SAR command

Talk-around substitutes when the repeater is down: IR 18 for IR 12, UTAC43D for UTAC43, 8TAC94D for 8TAC94. See the booklet pages 20–22.

| Channel | Mobile RX | Mobile TX | CTCSS | Bandwidth |
|---|---:|---:|---|---|
| IR 12 | 410.8375 | 419.8375 | 167.9 transmit, CSQ receive | narrow |
| VTAC14 | 159.4725 | 159.4725 | 156.7 transmit, CSQ receive (156.7 receive if the user can select it) | narrow |
| UTAC43 | 453.8625 | 458.8625 | 156.7 transmit, CSQ receive (156.7 receive if the user can select it) | narrow |
| 8TAC94 | 853.0125 | 808.0125 | 156.7 transmit, CSQ receive (156.7 receive if the user can select it) | narrow |
| VHF Marine ch. 17 | 156.8500 | 156.8500 | none | wide, emission 16K00F3E |

8TAC94 was ITAC4 before rebanding. The old pair printed in parentheses is RX 868.0125 and TX 823.0125. Marine channel 17 on this page requires an FCC STA. 853/808 MHz is outside the bands this radio has been using; confirm the radio can tune it before adding it.

## NOAA Weather Radio (receive only)

Program as wideband FM, emission 16K0F3E, receive only. WX1–WX7 are United States and Canada. WX8 and WX9 are Canada marine weather. The booklet recommends programming land-mobile radios in the order the channels came into use; other radios number them in frequency order.

| Channel | MHz | Also called |
|---|---:|---|
| WX1 | 162.400 | |
| WX2 | 162.425 | |
| WX3 | 162.450 | |
| WX4 | 162.475 | |
| WX5 | 162.500 | |
| WX6 | 162.525 | |
| WX7 | 162.550 | |
| WX8 | 161.650 | Marine 21B |
| WX9 | 161.775 | Marine 83B |

Outage reports: https://www.weather.gov/nwr/outages or 1-888-886-1227.

## VHF SAR operations

The photo of this page is sideways. The pairings below follow the printed rows. Check the booklet once before copying a row into a codeplug.

| Suggested function | Frequency as printed |
|---|---|
| Ground operations | 155.1600 narrowband FM |
| Maritime operations | 157.050 or 157.150 (VHF marine 21A or 23A), as specified by the USCG Sector Commander |
| Air operations, civilian | 123.100 AM. Not for tests or exercises |
| Air operations, USCG / military | 345.0 AM for initial contact only, then 282.8 AM or another working channel |
| Air rescue to air rescue (deconfliction) | Charted frequency, or MULTICOM 122.850 (south or west sector) and 122.900 (north or east sector), or as specified by FAA. 122.850 is not for tests or exercises |
| Ground to air SAR working channel | 157.175, marine 83A. Alternates 21A, 23A, 81A as specified by the local USCG Sector Commander |
| Ground to maritime SAR working channel | 157.050, marine 21A. Alternates 23A, 81A, 83A as specified by the local USCG Sector Commander |
| Maritime / air / ground SAR working channel | 157.175, marine 83A. Alternates 21A, 23A, 81A as specified by the local USCG Sector Commander |
| EMS / medical support | 155.3400 narrowband FM |
| Hailing and distress only, maritime / air / ground | 156.800, VHF marine channel 16 |

123.100, 122.850, 122.900, 282.8, and 345.0 are AM. 155.160 and 155.340 are narrowband FM. Marine 16 and the 157 MHz working channels follow the marine plan; channel 17 on the SAR-command page is the one explicitly marked wideband.

## VHF incident response (federal)

All channels on this page are narrowband analog. Receive CSQ, transmit CTCSS 167.9.

| Channel | Assignment | Mobile RX | Mobile TX |
|---|---|---:|---:|
| NC 1 | Incident calling | 169.5375 | 164.7125 |
| IR 1 | Incident command | 170.0125 | 165.2500 |
| IR 2 | Medical evacuation control | 170.4125 | 165.9625 |
| IR 3 | Logistics control | 170.6875 | 166.5750 |
| IR 4 | Interagency convoy | 173.0375 | 167.3250 |
| IR 5 | Incident calling, direct for NC 1 | 169.5375 | 169.5375 (S) |
| IR 6 | Incident command, direct for IR 1 | 170.0125 | 170.0125 (S) |
| IR 7 | Medical evacuation, direct for IR 2 | 170.4125 | 170.4125 (S) |
| IR 8 | Logistics control, direct for IR 3 | 170.6875 | 170.6875 (S) |
| IR 9 | Interagency convoy, direct for IR 4 | 173.0375 | 173.0375 (S) |

## VHF law enforcement (federal)

`$68F` is a P25 NAC. LE A and LE 1 are analog: 167.9 transmit, CSQ receive.

| Channel | Note | Mobile RX | Mobile TX | Squelch |
|---|---|---:|---:|---|
| LE A | Calling, analog | 167.0875 | 167.0875 (S) | 167.9 transmit, CSQ receive |
| LE 1 | Tactical, analog | 167.0875 | 162.0875 | 167.9 transmit, CSQ receive |
| LE 2 | Tactical | 167.2500 | 162.2625 | $68F |
| LE 3 | Tactical | 167.7500 | 162.8375 | $68F |
| LE 4 | Tactical | 168.1125 | 163.2875 | $68F |
| LE 5 | Tactical | 168.4625 | 163.4250 | $68F |
| LE 6 | Direct for LE 2 | 167.2500 | 167.2500 (S) | $68F |
| LE 7 | Direct for LE 3 | 167.7500 | 167.7500 (S) | $68F |
| LE 8 | Direct for LE 4 | 168.1125 | 168.1125 (S) | $68F |
| LE 9 | Direct for LE 5 | 168.4625 | 168.4625 (S) | $68F |

## UHF incident response (federal)

All channels on this page are narrowband analog. Receive CSQ, transmit CTCSS 167.9.

| Channel | Assignment | Mobile RX | Mobile TX |
|---|---|---:|---:|
| NC 2 | Incident calling | 410.2375 | 419.2375 |
| IR 10 | Ad hoc | 410.4375 | 419.4375 |
| IR 11 | Ad hoc | 410.6375 | 419.6375 |
| IR 12 | SAR incident command | 410.8375 | 419.8375 |
| IR 13 | Ad hoc | 413.1875 | 413.1875 (S) |
| IR 14 | Interagency convoy | 413.2125 | 413.2125 (S) |
| IR 15 | Incident calling, direct for NC 2 | 410.2375 | 410.2375 (S) |
| IR 16 | Ad hoc, direct for IR 10 | 410.4375 | 410.4375 (S) |
| IR 17 | Ad hoc, direct for IR 11 | 410.6375 | 410.6375 (S) |
| IR 18 | SAR incident command, direct for IR 12 | 410.8375 | 410.8375 (S) |

## UHF law enforcement (federal)

LE B, LE 10, and LE 16 are analog: 167.9 transmit, CSQ receive. The other rows are P25 NAC `$68F`.

| Channel | Note | Mobile RX | Mobile TX | Squelch |
|---|---|---:|---:|---|
| LE B | Calling, analog | 414.0375 | 414.0375 (S) | 167.9 transmit, CSQ receive |
| LE 10 | Tactical, analog | 409.9875 | 418.9875 | 167.9 transmit, CSQ receive |
| LE 11 | Tactical | 410.1875 | 419.1875 | $68F |
| LE 12 | Tactical | 410.6125 | 419.6125 | $68F |
| LE 13 | Tactical | 414.0625 | 414.0625 (S) | $68F |
| LE 14 | Tactical | 414.3125 | 414.3125 (S) | $68F |
| LE 15 | Tactical | 414.3375 | 414.3375 (S) | $68F |
| LE 16 | Direct for LE 10, analog | 409.9875 | 409.9875 (S) | 167.9 transmit, CSQ receive |
| LE 17 | Direct for LE 11 | 410.1875 | 410.1875 (S) | $68F |
| LE 18 | Direct for LE 12 | 410.6125 | 410.6125 (S) | $68F |

## Non-federal UHF national interoperability

Narrowband only. Receive CSQ, transmit CTCSS 156.7. The receive tone can be programmed if the user can turn it on and off. Limited to 3 watts ERP north of Line A or east of Line C.

| Channel | Use | Mobile RX | Mobile TX |
|---|---|---:|---:|
| UCALL40 | Calling | 453.2125 | 458.2125 |
| UCALL40D | Calling, direct | 453.2125 | 453.2125 (S) |
| UTAC41 | Tactical repeater | 453.4625 | 458.4625 |
| UTAC41D | Tactical, direct | 453.4625 | 453.4625 (S) |
| UTAC42 | Tactical repeater | 453.7125 | 458.7125 |
| UTAC42D | Tactical, direct | 453.7125 | 453.7125 (S) |
| UTAC43 | Tactical repeater | 453.8625 | 458.8625 |
| UTAC43D | Tactical, direct | 453.8625 | 453.8625 (S) |

## UHF MED (medical, EMS)

Not covered by the nationwide interoperability blanket. A valid FCC license is required. Repeaters transmit on the mobile-receive frequency and listen on the mobile-transmit frequency. CTCSS comes from the local plan. Direct mode uses the mobile-receive frequency both ways; add `D` to the channel name.

The printed bandwidth column shows 12.5 on the main channel and 6.25 on the interstitial channel 6.25 kHz above it. The main-row cell also has both numbers beside each other in the photo. This radio can store the 12.5 kHz rows as narrow FM. It cannot store a 6.25 kHz emission.

Starred names are the ones the footnote marks as used primarily for dispatch.

| Channel | Mobile RX | Mobile TX | Printed bandwidth |
|---|---:|---:|---|
| MED-9 * | 462.950 | 467.950 | 12.5 and 6.25 |
| MED-91 * | 462.95625 | 467.95625 | 6.25 |
| MED-92 * | 462.9625 | 467.9625 | 12.5 and 6.25 |
| MED-93 * | 462.96875 | 467.96875 | 6.25 |
| MED-10 * | 462.975 | 467.975 | 12.5 and 6.25 |
| MED-101 * | 462.98125 | 467.98125 | 6.25 |
| MED-102 * | 462.9875 | 467.9875 | 12.5 and 6.25 |
| MED-103 * | 462.99375 | 467.99375 | 6.25 |
| MED-1 | 463.000 | 468.000 | 12.5 and 6.25 |
| MED-11 | 463.00625 | 468.00625 | 6.25 |
| MED-12 | 463.0125 | 468.0125 | 12.5 and 6.25 |
| MED-13 | 463.01875 | 468.01875 | 6.25 |
| MED-2 | 463.025 | 468.025 | 12.5 and 6.25 |
| MED-21 | 463.03125 | 468.03125 | 6.25 |
| MED-22 | 463.0375 | 468.0375 | 12.5 and 6.25 |
| MED-23 | 463.04375 | 468.04375 | 6.25 |

Authority printed on the page: 47 CFR 90.20(d)(65).
