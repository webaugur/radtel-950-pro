V0.20
1、Added a single PTT mode, which can be toggled on/off via the menu.
2、Added a temporary scan list feature, which can be custom-mapped to long-pressing keys 0–9.
3、Add channel scanning with add and delete set functions

V0.21
1. Fix the crash bug in the scanning and addition function under the zone mode

V0.22
1、Updated the spectrum interface and fixed related bugs.
2、Optimized spectrum functionality: added 5 kHz stepping and backlight-off option.
3、Enabled independent configuration of PF1 and PTTC functions.
4、Added menus for DTMF code-delay, code-duration, and inter-code spacing.
5、Added the ability to customize zone names.
6、Improved stability to prevent APRS crashes.


V0.23
1、Fixed the issue where RSSI was invalid while in monitoring mode.
2、Optimized the 950 spectrum interface according to customer requirements.
3、Fixed the automatic switch to the APRS channel when transmitting an APRS beacon.

V0.24
1、Fix the issue where channel names are not displayed in small font
2、Add zone name display on the main interface
3、Change the number of areas to 10 and the number of channels per area to 99
4、Fix the CTCSS decoding bug
5、Spectrum interface - Change center frequency to small font and current frequency to large font
6、Add left/right key adjustment for center frequency in spectrum mode
7、Add left/right keys in radio mode for adjustment by minimum step frequency
8、Fix the issue where APRS is not sent correctly on first boot (not sent via the configured APRS-CH)
9、Add standby indicator light, green light blinks every 5 seconds after screen off
10、Fix the issue where work band does not automatically switch based on frequency in spectrum mode
11、Optimize RSSI table display in spectrum mode
12、In radio mode, increase AM step frequency by 9K

V0.25
1、Fixed the issue where CTCSS and DCS could not be used after enabling APRS
2、Added the function to switch zones by long-pressing the left/right keys (Left key: -, Right key: +)
3、Fixed the APRS-TNC function and added a transmission report menu
4、Added the function to display the current time after starting GPS

V0.26
1、Fix the problem where the system defaults to Chinese on boot

V0.27
1、Add a NOAA alert function(menu->setting->9.NOAA Alert)
2、Add a breathing light switch(menu->setting->8.Breath Led)
3、Add the setting for the boot image display duration(menu->setting->10.Power Dly Time)
4、Add a backlight control menu for the FM radio (access the menu in FM radio mode)
5、Modify the tail tone cancellation function (
   If your device experiences intermittent reception occasionally, 
   please disable the tail tone cancellation function:menu->radio set->10.Tail)
6、Change the area name color to white

V0.28
1、Fix the issue where enabling NOAA alert causes scan to hang when a signal exists on the current NOAA channel.
2、Modify backlight timeout option
3、Add VFO scan range settings
4、Add scan blacklist function: long press [#] to add current frequency to blacklist; 
   long press [EXIT] to clear the blacklist. The blacklist supports up to 20 frequencies.
5、Fix the time zone bug.
6、Add 30‑minute time zone offset option. When enabled, an additional 30‑minute offset is applied on top of the base time zone offset.
7、Add frequency steps of 10Hz, 50Hz, 100Hz, and 500Hz.
8、Fix bug where SSID is missing during APRS digipeating.
9、Add frequency switching function in monitor mode.
10、Add UART mode for TNC function with baud rate 115200.
11、Modify TNC reporting options: OFF /TX/RX/ Both.

V0.29
1、Fix the issue that frequencies cannot be read or written via the APP in firmware version 0.28.
Note: Starting from firmware version 0.28, VFO scan requires configuration via MENU -> VFO&CH -> VFO SCAN RANGE; otherwise scanning will fail.
