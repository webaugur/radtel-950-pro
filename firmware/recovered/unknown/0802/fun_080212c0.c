/**
 * @brief fun_080212c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080212c0, Ghidra name FUN_080212c0, 30 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_080212c0(undefined4 param_1)

{
  int iVar1;
  int extraout_r3;
  
  iVar1 = FUN_08025f24(param_1,*(undefined4 *)(DAT_080212e0 + 0x10),
                       *(undefined4 *)(DAT_080212e0 + 0x14));
  return ((iVar1 - *(int *)(extraout_r3 + 0x10)) * 0x40) /
         (*(int *)(extraout_r3 + 0x14) - *(int *)(extraout_r3 + 0x10)) & 0xff;
}

