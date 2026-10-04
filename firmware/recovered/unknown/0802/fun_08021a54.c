/**
 * @brief fun_08021a54
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021a54, Ghidra name FUN_08021a54, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021a54(undefined1 param_1,undefined1 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = DAT_08021aa8;
  *(undefined1 *)(DAT_08021aa8 + 0xe) = 0xa5;
  *(undefined1 *)(iVar2 + 0xf) = param_1;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x11) = 0;
  *(undefined1 *)(iVar2 + 0x12) = 0;
  *(undefined1 *)(iVar2 + 0x13) = 1;
  *(undefined2 *)(iVar2 + 0xc) = 7;
  *(undefined1 *)(iVar2 + 0x14) = param_2;
  uVar3 = FUN_0800a878(iVar2 + 0xf,6);
  uVar1 = *(ushort *)(iVar2 + 0xc);
  *(ushort *)(iVar2 + 0xc) = uVar1 + 1;
  *(char *)((uint)uVar1 + iVar2 + 0xe) = (char)((ushort)uVar3 >> 8);
  uVar1 = *(ushort *)(iVar2 + 0xc);
  *(ushort *)(iVar2 + 0xc) = uVar1 + 1;
  *(char *)((uint)uVar1 + iVar2 + 0xe) = (char)uVar3;
  FUN_08022dd6(iVar2 + 0xe,*(undefined2 *)(iVar2 + 0xc));
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined2 *)(DAT_08021aac + 6) = 0;
  return;
}

