/**
 * @brief fun_08006cc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006cc8, Ghidra name FUN_08006cc8, 86 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08006cc8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_08018340();
  iVar1 = DAT_08006d20;
  iVar2 = *(int *)(DAT_08006d20 + 0xc);
  if ((iVar2 != 0) && (*(int *)(DAT_08006d20 + 4) != 0)) {
    *(undefined1 *)(DAT_08006d20 + 0x11) = 0;
    if (*(byte *)(iVar2 + iVar1 + 0x11) < 0x81) {
      *(int *)(iVar1 + 0xc) = iVar2 + -1;
      iVar2 = 1;
    }
    else {
      *(int *)(iVar1 + 0xc) = iVar2 + -2;
      iVar2 = 2;
    }
    for (uVar3 = *(uint *)(iVar1 + 0xc); uVar3 < *(uint *)(iVar1 + 4); uVar3 = uVar3 + 1) {
      *(undefined1 *)(iVar1 + uVar3 + 0x12) = *(undefined1 *)(uVar3 + iVar2 + iVar1 + 0x12);
    }
    iVar2 = *(int *)(iVar1 + 4) - iVar2;
    *(int *)(iVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + DAT_08006d20 + 0x12) = 0;
    return 0;
  }
  return 1;
}

