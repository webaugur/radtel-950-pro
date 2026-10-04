/**
 * @brief fun_0800fc20
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fc20, Ghidra name FUN_0800fc20, 80 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fc20(void)

{
  uint uVar1;
  undefined1 auStack_88 [58];
  ushort local_4e;
  uint local_8;
  
  FUN_08001016(auStack_88,0x80);
  uVar1 = FUN_0800f378(0x80000);
  if (uVar1 < 0x40) {
    FUN_08021824(uVar1 * 0x3c + 0x80008,auStack_88,0x3c);
    local_8 = (uint)local_4e;
    uVar1 = FUN_0800a878(auStack_88,0x3a);
    if (uVar1 == (local_8 & 0xffff)) {
      FUN_08000f6e(DAT_0800fc70,auStack_88,0x40);
    }
  }
  return;
}

