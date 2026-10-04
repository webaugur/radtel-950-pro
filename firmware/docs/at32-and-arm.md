# AT32F403A and ARM headers

The radio MCU is an Artery AT32F403A (Cortex-M4F). This firmware includes the headers already in `re/sdk/reference-project/radtel`, not an STM32 HAL.

| What we compile against | Path |
| --- | --- |
| ARM CMSIS core | `libraries/cmsis/cm4/core_support/core_cm4.h` |
| Device header | `libraries/cmsis/cm4/device_support/at32f403a_407.h` |
| System clock | `libraries/cmsis/cm4/device_support/system_at32f403a_407.c` (`SystemInit`) |
| Startup | `startup_at32f403a_407.s` |
| Driver headers pulled in by `at32f403a_407_conf.h` | `libraries/drivers/inc/at32f403a_407_*.h` |

The compile defines `AT32F403AVGT7`, which is the part named in `re/sdk/reference-project/radtel/cmake/at32_workbench/CMakeLists.txt`. That selects the 1024 KB `AT32F403AxG` register set used by the linker script. The package letter is not measured from the radio.

The driver `.c` files are not in this link. The skeleton calls `SystemInit` only. Peripheral code is added when a decompiled routine is identified and ported.

`at32f403a_407_crm.h` is the clock and reset block (Artery's name for what STM32 calls RCC). `at32f403a_407_gpio.h`, `at32f403a_407_flash.h`, `at32f403a_407_usart.h`, and `at32f403a_407_usb.h` are the matching device blocks. Register layouts that follow the STM32F103/F4 pattern are called out on the port that uses them, not copied into a second header tree.

BK4829 and SI4732 are external parts. They are not in the AT32 or CMSIS headers. No V0.29 function has been given those names yet. The names in `re/firmware/dissassembled_v3_mem_map.c` belong to the older export.
