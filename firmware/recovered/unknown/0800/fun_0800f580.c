/**
 * @brief fun_0800f580
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f580, Ghidra name FUN_0800f580, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f580(void)

{
  bool bVar1;
  uint uVar2;
  undefined1 uStack_7c;
  ushort local_7b;
  undefined1 auStack_79 [101];
  uint local_14;
  
  bVar1 = false;
  FUN_08001016(&uStack_7c,0x68);
  uVar2 = FUN_08007166(0x11000,0x4f,0x67);
  if (uVar2 < 0x4f) {
    FUN_08021824(uVar2 * 0x67 + 0x11000,&uStack_7c,0x67);
    local_14 = (uint)local_7b;
    uVar2 = FUN_0800a878(auStack_79,0x65);
    if (uVar2 == (local_14 & 0xffff)) {
      FUN_08000ee4(DAT_0800f5f8,auStack_79,0x65);
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_08001016(DAT_0800f5f8,0x65);
    FUN_08021764(0x11000);
    FUN_08021764(0x21000);
  }
  return;
}

