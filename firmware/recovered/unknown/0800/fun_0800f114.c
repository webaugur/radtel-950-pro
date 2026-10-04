/**
 * @brief fun_0800f114
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f114, Ghidra name FUN_0800f114, 150 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f114(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_080073a4(1);
  iVar1 = DAT_0800f1ac;
  *(undefined1 *)(DAT_0800f1ac + 1) = 1;
  FUN_080179a0();
  FUN_0800a1a8();
  FUN_0800da50();
  piVar2 = DAT_0800f1b8;
  iVar3 = *(int *)(DAT_0800f1b4 + (*(byte *)(DAT_0800f1b0 + param_1 + 0x1b) - 7) * 4);
  *DAT_0800f1b8 = iVar3;
  if ((iVar3 == DAT_0800f1bc) && (iVar3 = FUN_08009270(), iVar3 == 4)) {
    FUN_0800e95c(1);
    return;
  }
  *(undefined1 *)(iVar1 + 2) = 0;
  *(undefined1 *)(iVar1 + 3) = 0;
  FUN_08001016(DAT_0800f1b8 + 0x14,0x17);
  piVar2[2] = 0;
  FUN_08001016(DAT_0800f1b8 + 3,0x14);
  FUN_08001016(DAT_0800f1b8 + 8,0x14);
  FUN_08001016(DAT_0800f1b8 + 0xd,0x14);
  piVar2 = DAT_0800f1b8;
  *(undefined4 *)((int)DAT_0800f1b8 + -0xa3) = 0;
  *(undefined1 *)((int)piVar2 + -0x9f) = 0;
  FUN_08000fd2((int)piVar2 + -0x9e,0x9c);
  FUN_08022df0(1);
  FUN_08019a50();
  return;
}

