cmake_minimum_required(VERSION 3.20)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_ASM_COMPILER arm-none-eabi-gcc)
set(CMAKE_OBJCOPY arm-none-eabi-objcopy)

project(rt950-firmware C ASM)

set(SDK "${CMAKE_CURRENT_SOURCE_DIR}/../re/sdk/reference-project/radtel")

set(CPU_FLAGS -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard)

add_executable(rt950-firmware
	src/main.c
	src/crc16.c
	src/flash_oem.c
	src/crm_oem.c
	src/oem_vectors.c
	src/oem_reset.s
	"${SDK}/startup_at32f403a_407.s"
	"${SDK}/libraries/cmsis/cm4/device_support/system_at32f403a_407.c"
	"${SDK}/project/src/syscalls.c"
	"${SDK}/project/src/sysmem.c"
)

# xG matches AT32F403AxG_FLASH.ld. The reference workbench uses AT32F403AVGT7.
# The package letter is not measured from the radio.
target_compile_definitions(rt950-firmware PRIVATE AT32F403AVGT7)

target_include_directories(rt950-firmware PRIVATE
	include
	"${SDK}/libraries/cmsis/cm4/core_support"
	"${SDK}/libraries/cmsis/cm4/device_support"
	"${SDK}/libraries/drivers/inc"
	"${SDK}/project/inc"
)

target_compile_options(rt950-firmware PRIVATE
	${CPU_FLAGS}
	-ffunction-sections
	-fdata-sections
	-Wall
	-Wextra
)

target_link_options(rt950-firmware PRIVATE
	${CPU_FLAGS}
	"-T${CMAKE_CURRENT_SOURCE_DIR}/AT32F403AxG_FLASH.ld"
	-specs=nano.specs
	-Wl,--gc-sections
	-Wl,-Map=${CMAKE_BINARY_DIR}/rt950-firmware.map
)

add_custom_command(TARGET rt950-firmware POST_BUILD
	COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:rt950-firmware> ${CMAKE_BINARY_DIR}/rt950-firmware.bin
	COMMAND arm-none-eabi-size $<TARGET_FILE:rt950-firmware>
)
