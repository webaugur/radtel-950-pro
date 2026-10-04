/**
 * @brief fun_0801ead8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ead8, Ghidra name FUN_0801ead8, 94 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801ead8(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((PTR_DAT_0801eb38[0x4a] == -0x5b) && ((byte)PTR_DAT_0801eb3c[0xfa] == 2)) {
    uVar1 = *(ushort *)(PTR_DAT_0801eb3c + 0x33c);
  }
  else {
    uVar1 = *(ushort *)PTR_DAT_0801eb3c;
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    if ((1 << uVar2 & (uint)uVar1) != 0) {
      if (*(uint *)(PTR_DAT_0801eb40 + 3) == uVar3) {
        PTR_DAT_0801eb44[(byte)PTR_DAT_0801eb3c[0xfa]] = (char)uVar2;
        break;
      }
      uVar3 = uVar3 + 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 10);
  FUN_08008c28();
  FUN_08008970();
  FUN_08018038();
  FUN_0800b604(1);
  return 1;
}

