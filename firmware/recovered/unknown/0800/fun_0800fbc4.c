/**
 * @brief fun_0800fbc4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fbc4, Ghidra name FUN_0800fbc4, 82 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fbc4(void)

{
  uint uVar1;
  undefined1 auStack_88 [80];
  uint local_38;
  uint local_8;
  
  FUN_08001016(auStack_88,0x80);
  uVar1 = FUN_0800f378(0x82000,8);
  if (uVar1 < 0x30) {
    FUN_08021824(DAT_0800fc18 + uVar1 * 0x52,auStack_88,0x52);
    local_8 = local_38;
    uVar1 = FUN_0800a878(auStack_88,0x50);
    if (uVar1 == (local_8 & 0xffff)) {
      FUN_08000f6e(DAT_0800fc1c,auStack_88,0x50);
    }
  }
  return;
}

