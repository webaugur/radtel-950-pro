/**
 * @brief fun_08023308
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023308, Ghidra name FUN_08023308, 282 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023308(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_08023424;
  iVar2 = DAT_08023424 + (uint)*(byte *)(DAT_08023424 + 0xfa) * 0x58;
  if (0xf < *(byte *)(iVar2 + 0x139)) {
    *(undefined1 *)(iVar2 + 0x139) = 0xf;
  }
  FUN_0801b564();
  iVar2 = iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x58;
  uVar3 = *(uint *)(iVar2 + 0x110) / 10000;
  uVar4 = (uint)*(ushort *)(DAT_08023428 + (uint)*(byte *)(iVar2 + 0x139) * 2) +
          *(uint *)(iVar2 + 0x110);
  *(uint *)(iVar2 + 0x110) = uVar4;
  uVar4 = uVar4 / 10000;
  iVar2 = iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x58;
  if (param_1 == 0) {
    if (((*(char *)(DAT_08023434 + 0x4a) == -0x5b) && (*(byte *)(iVar1 + 0xfa) == 2)) ||
       (*(char *)(DAT_08023434 + 0x62) == '\0')) {
      if (0x27f < uVar4) {
        *(undefined4 *)(iVar2 + 0x110) = DAT_0802343c;
      }
    }
    else if (uVar3 < 0x550) {
      if (0x54f < uVar4) {
        *(undefined4 *)(iVar2 + 0x110) = DAT_08023438;
      }
    }
    else {
      iVar2 = FUN_08012fb8(uVar3 & 0xffff);
      if (*(ushort *)(DAT_08023440 + (iVar2 * 2 + 1) * 2) <= uVar4) {
        *(undefined4 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x58 + 0x110) =
             *(undefined4 *)(DAT_08023440 + iVar2 * 8 + 0x14);
      }
    }
  }
  else if (((uint)*(ushort *)(DAT_0802342c + 0x2b) * 10 <= uVar4) ||
          (uVar4 < (uint)*(ushort *)(DAT_0802342c + 0x29) * 10)) {
    *(uint *)(iVar2 + 0x110) = DAT_08023430 * (uint)*(ushort *)(DAT_0802342c + 0x29);
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

