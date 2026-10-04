/**
 * @brief fun_0800fe58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fe58, Ghidra name FUN_0800fe58, 138 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fe58(void)

{
  uint uVar1;
  undefined1 local_80;
  undefined2 local_7f;
  undefined1 auStack_7d [101];
  undefined4 local_18;
  
  FUN_08001016(&local_80,0x68);
  uVar1 = FUN_08007166(0x11000,0x4f,0x67);
  FUN_08000ee4(auStack_7d,DAT_0800fee4,0x65);
  local_18 = FUN_0800a878(auStack_7d,0x65);
  local_7f = (undefined2)local_18;
  if (uVar1 < 0x4e) {
    FUN_080219b8(uVar1 * 0x67 + 0x11000,&local_80,1);
    local_80 = 0xa5;
    FUN_080219b8(uVar1 * 0x67 + 0x11067,&local_80,0x67);
    if (uVar1 == 0x29) {
      FUN_08021764(0x11000);
    }
  }
  else {
    FUN_08021764(0x12000);
    local_80 = 0xa5;
    FUN_080219b8(0x11000,&local_80,0x67);
  }
  return;
}

