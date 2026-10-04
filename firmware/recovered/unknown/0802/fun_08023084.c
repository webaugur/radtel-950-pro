/**
 * @brief fun_08023084
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023084, Ghidra name FUN_08023084, 328 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023084(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = DAT_080231cc;
  iVar1 = DAT_080231cc + (uint)*(byte *)(DAT_080231cc + 0xfa) * 0x58;
  if (0xf < *(byte *)(iVar1 + 0x139)) {
    *(undefined1 *)(iVar1 + 0x139) = 0xf;
  }
  FUN_0801b564();
  iVar1 = DAT_080231d0;
  iVar2 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x58;
  uVar5 = *(uint *)(iVar2 + 0x110) / 10000;
  uVar4 = *(uint *)(iVar2 + 0x110) -
          (uint)*(ushort *)(DAT_080231d0 + (uint)*(byte *)(iVar2 + 0x139) * 2);
  *(uint *)(iVar2 + 0x110) = uVar4;
  uVar6 = uVar4 / 10000;
  iVar2 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x58;
  if (param_1 == 0) {
    if (((*(char *)(DAT_080231d8 + 0x4a) == -0x5b) && (*(byte *)(iVar3 + 0xfa) == 2)) ||
       (*(char *)(DAT_080231d8 + 0x62) == '\0')) {
      if (uVar6 < 0xb4) {
        *(uint *)(iVar2 + 0x110) = DAT_080231e0 + uVar4;
      }
    }
    else if (uVar5 - 0x438 < 0x118) {
      if (uVar6 < 0x438) {
        *(uint *)(iVar2 + 0x110) =
             DAT_080231dc - (uint)*(ushort *)(iVar1 + (uint)*(byte *)(iVar2 + 0x139) * 2);
      }
    }
    else {
      iVar1 = FUN_08012fb8(uVar5 & 0xffff);
      if (uVar6 < *(ushort *)(DAT_080231e4 + iVar1 * 4)) {
        iVar3 = iVar3 + (uint)*(byte *)(iVar3 + 0xfa) * 0x58;
        *(int *)(iVar3 + 0x110) =
             (*(int *)(DAT_080231e4 + (iVar1 * 2 + 1) * 4 + 0x14) -
             *(int *)(DAT_080231e4 + iVar1 * 8 + 0x14)) + *(int *)(iVar3 + 0x110);
      }
    }
  }
  else if ((uVar6 < (uint)*(ushort *)(DAT_080231d4 + 0x29) * 10) ||
          ((uint)*(ushort *)(DAT_080231d4 + 0x2b) * 10 < uVar6)) {
    *(uint *)(iVar2 + 0x110) =
         (uint)*(ushort *)(DAT_080231d4 + 0x2b) * 100000 -
         (uint)*(ushort *)(iVar1 + (uint)*(byte *)(iVar2 + 0x139) * 2);
  }
  FUN_08007dc0();
  FUN_080231e8();
  if (param_1 == 0) {
    FUN_0800d1f4();
  }
  else {
    FUN_0800c16c();
  }
  FUN_0801c9a0();
  return;
}

