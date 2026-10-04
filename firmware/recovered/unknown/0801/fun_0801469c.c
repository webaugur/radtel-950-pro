/**
 * @brief fun_0801469c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801469c, Ghidra name FUN_0801469c, 42 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801469c(undefined1 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_080146c8;
  for (uVar2 = *(uint *)(DAT_080146c8 + 4); *(uint *)(iVar1 + 0xc) < uVar2; uVar2 = uVar2 - 1) {
    *(undefined1 *)(iVar1 + uVar2 + 0x12) = *(undefined1 *)(iVar1 + uVar2 + 0x11);
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  *(undefined1 *)(iVar3 + iVar1 + 0x12) = param_1;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  return 0;
}

