/**
 * @brief fun_0800fd10
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800fd10, Ghidra name FUN_0800fd10, 116 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800fd10(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = FUN_0800f378(0x8000,6);
  if (bVar2 < 0x29) {
    FUN_08021824((uint)bVar2 * 0x62 + 0x8010,DAT_0800fd84,0x62);
    uVar1 = *(ushort *)(DAT_0800fd84 + 0x60);
    uVar3 = FUN_0800a878(DAT_0800fd84,0x60);
    if (uVar3 == uVar1) {
      FUN_08000ee4(DAT_0800fd88,DAT_0800fd84,0x20);
      FUN_08000ee4(DAT_0800fd88 + 0x24,DAT_0800fd84 + 0x20,0x20);
      FUN_08000ee4(DAT_0800fd88 + 0x48,DAT_0800fd84 + 0x40,0x20,(uint)uVar1);
      return;
    }
  }
  FUN_0801b41c();
  return;
}

