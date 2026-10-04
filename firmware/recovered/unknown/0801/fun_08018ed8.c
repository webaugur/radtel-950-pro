/**
 * @brief fun_08018ed8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018ed8, Ghidra name FUN_08018ed8, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018ed8(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte *extraout_r2;
  uint uVar3;
  uint extraout_r3;
  
  puVar1 = DAT_08018f50;
  uVar3 = 0xf;
  if (param_1[3] != 0) {
    if ((*DAT_08018f50 & 0x700) < 0x300) {
      FUN_08018f54(0x300);
      param_1 = extraout_r2;
      uVar3 = extraout_r3;
    }
    uVar2 = 0x700 - (*puVar1 & 0x700) >> 8;
    *(char *)(*param_1 + 0xe000e400) =
         (char)(((uint)param_1[2] & uVar3 >> (uVar2 & 0xff) | (uint)param_1[1] << (4 - uVar2 & 0xff)
                ) << 4);
    *(int *)((uint)(*param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (*param_1 & 0x1f);
    return;
  }
  *(int *)((uint)(*param_1 >> 5) * 4 + -0x1fff1e80) = 1 << (*param_1 & 0x1f);
  return;
}

