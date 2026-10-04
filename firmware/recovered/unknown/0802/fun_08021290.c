/**
 * @brief fun_08021290
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021290, Ghidra name FUN_08021290, 40 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08021290(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r3;
  
  uVar1 = FUN_0801c8e0(*(undefined4 *)(DAT_080212b8 + 0x10),param_1);
  iVar2 = FUN_08025f24(uVar1,*(undefined4 *)(DAT_080212bc + 0x10),
                       *(undefined4 *)(DAT_080212bc + 0x14));
  return ((iVar2 - *(int *)(extraout_r3 + 0x10)) * 0x40) /
         (*(int *)(extraout_r3 + 0x14) - *(int *)(extraout_r3 + 0x10)) & 0xff;
}

