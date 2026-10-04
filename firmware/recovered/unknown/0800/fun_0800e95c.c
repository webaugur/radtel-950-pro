/**
 * @brief fun_0800e95c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e95c, Ghidra name FUN_0800e95c, 192 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e95c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_0800ea1c;
  if (*(char *)(DAT_0800ea1c + 1) == '\x01') {
    FUN_08010044();
    FUN_0800fda8();
    uVar3 = (uint)*(byte *)(DAT_0800ea20 + 0xfa);
    iVar4 = DAT_0800ea20 + uVar3 * 0x58;
    if (*(char *)(iVar4 + 0x130) == '\x01') {
      if (*(char *)(DAT_0800ea24 + 6) == '\0') {
        FUN_0800fee8((ushort)*(byte *)(uVar3 + DAT_0800ea24 + 0xd) * 99 +
                     *(short *)(DAT_0800ea20 + 0x108),DAT_0800ea20 + uVar3 * 0x20 + 0x270,
                     iVar4 + 0x149);
      }
      else {
        FUN_0800fee8(*(undefined2 *)(DAT_0800ea20 + 0x108),DAT_0800ea20 + uVar3 * 0x20 + 0x270,
                     iVar4 + 0x149);
      }
    }
    else {
      FUN_080105cc();
    }
    iVar4 = FUN_0802029c(0xff);
    if (iVar4 == 1) {
      FUN_0802029c(0);
      FUN_0800ff30();
    }
    FUN_08008970();
    *(undefined1 *)(iVar1 + 1) = 0;
    *(undefined1 *)(iVar1 + 0x14) = 1;
    *(undefined2 *)(DAT_0800ea28 + 0x4e) = 0;
    puVar2 = DAT_0800ea2c;
    *DAT_0800ea2c = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    FUN_0800a1a8();
    FUN_0801b334();
    FUN_0800a178();
    if (param_1 != 0) {
      FUN_0800b980();
      return;
    }
  }
  return;
}

