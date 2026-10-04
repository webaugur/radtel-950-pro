/**
 * @brief fun_0801395c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801395c, Ghidra name FUN_0801395c, 132 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0801395c(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    if (*(char *)(DAT_080139f0 + 8) == '\x01') {
      FUN_08000850(DAT_080139e0 + 0x17,&DAT_080139f8,&DAT_080139fc);
    }
    else {
      FUN_08000850(DAT_080139e0 + 0x17,&DAT_080139f8,&DAT_080139f4);
    }
  }
  else {
    if (0x33 < *(ushort *)(DAT_080139e0 + 1)) {
      if (*DAT_080139e4 <= param_1) {
        if (*DAT_080139e4 == param_1) {
          FUN_08000850(DAT_080139e0 + 0x17,s__d__d_080139e8,*(ushort *)(DAT_080139e4 + 4) / 10,
                       (uint)*(ushort *)(DAT_080139e4 + 4) % 10);
          return DAT_080139e0 + 0x17;
        }
        param_1 = param_1 - 1;
      }
    }
    uVar1 = (uint)*(ushort *)(DAT_08013a04 + param_1 * 2);
    FUN_08000850(DAT_080139e0 + 0x17,s__d__d_080139e8,uVar1 / 10,uVar1 % 10);
  }
  return DAT_080139e0 + 0x17;
}

