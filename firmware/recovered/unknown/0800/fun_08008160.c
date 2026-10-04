/**
 * @brief fun_08008160
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008160, Ghidra name FUN_08008160, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08008160(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_080081a8 + 0xc);
  if (param_1 == 0) {
    if (*(byte *)(uVar1 + DAT_080081a8 + 0x11) < 0x81) {
      if (1 < uVar1) {
        *(uint *)(DAT_080081a8 + 0xc) = uVar1 - 1;
        return;
      }
    }
    else {
      if (uVar1 < 3) {
        return;
      }
      *(uint *)(DAT_080081a8 + 0xc) = uVar1 - 2;
    }
    return;
  }
  if (*(uint *)(DAT_080081a8 + 4) <= uVar1) {
    *(uint *)(DAT_080081a8 + 0xc) = *(uint *)(DAT_080081a8 + 4);
    return;
  }
  if (*(byte *)(uVar1 + DAT_080081a8 + 0x12) < 0x81) {
    *(uint *)(DAT_080081a8 + 0xc) = uVar1 + 1;
    return;
  }
  *(uint *)(DAT_080081a8 + 0xc) = uVar1 + 2;
  return;
}

