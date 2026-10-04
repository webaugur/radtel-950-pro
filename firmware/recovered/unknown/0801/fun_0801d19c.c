/**
 * @brief fun_0801d19c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801d19c, Ghidra name FUN_0801d19c, 96 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801d19c(void)

{
  undefined2 uVar1;
  int iVar2;
  
  *(undefined1 *)(*(int *)(DAT_0801d1fc + 4) + DAT_0801d1fc + 0x12) = 0;
  iVar2 = FUN_08000d3a();
  iVar2 = (iVar2 / 10) * 10;
  if (iVar2 < 0x6a68) {
    if (iVar2 < DAT_0801d200) {
      iVar2 = DAT_0801d200;
    }
  }
  else {
    iVar2 = 0x6a68;
  }
  uVar1 = (undefined2)iVar2;
  *(undefined2 *)(DAT_0801d204 + 0x18) = uVar1;
  if (*(char *)(DAT_0801d208 + 0x21) == '\x01') {
    *(undefined2 *)((uint)*(byte *)(DAT_0801d208 + 0x95) * 5 + DAT_0801d208 + 0x4d) = uVar1;
  }
  else {
    *(undefined2 *)(DAT_0801d208 + 0x48) = uVar1;
  }
  FUN_08027734();
  FUN_08018038();
  return 1;
}

