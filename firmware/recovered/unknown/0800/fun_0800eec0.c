/**
 * @brief fun_0800eec0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800eec0, Ghidra name FUN_0800eec0, 156 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800eec0(void)

{
  int iVar1;
  
  iVar1 = DAT_0800ef60;
  if (*(byte *)(DAT_0800ef5c + 0x43) != 1) {
    if (1 < *(byte *)(DAT_0800ef5c + 0x43)) {
      FUN_0802773e(0x96,30000);
      FUN_0802775a(*(undefined1 *)(DAT_0800ef64 + (uint)*(byte *)(iVar1 + 0x16)));
      FUN_08027734((int)*(short *)(iVar1 + 0x18));
      return;
    }
    FUN_08027820(0x1400,0x1964);
    FUN_08027820(0x1401,0x2a30);
    return;
  }
  if (*(char *)(DAT_0800ef60 + 1) == '\0') {
    FUN_0802773e(0x99,0x117);
    FUN_08027820(0x3402,9);
    return;
  }
  if (*(char *)(DAT_0800ef60 + 1) != '\x01') {
    FUN_0802773e(0x8fc,30000);
    FUN_08027820(0x3402,5);
    return;
  }
  FUN_0802773e(0x208,0x6ae);
  FUN_08027820(0x3402,9);
  return;
}

