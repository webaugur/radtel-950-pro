/**
 * @brief fun_08006c6c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006c6c, Ghidra name FUN_08006c6c, 82 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08006c6c(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  
  FUN_080073a4(5);
  FUN_08018340();
  iVar2 = DAT_08006cc4;
  pbVar1 = DAT_08006cc0;
  if (*DAT_08006cc0 == 0) {
    uVar4 = FUN_08006cc8();
    return uVar4;
  }
  if (*(char *)(DAT_08006cc4 + 1) == '\x01') {
    *(undefined1 *)(DAT_08006cc4 + 1) = 0;
    *(undefined1 *)(iVar2 + 3) = 0;
  }
  else {
    bVar3 = *DAT_08006cc0 - 1;
    *DAT_08006cc0 = bVar3;
    pbVar1[bVar3 + 1] = 0;
  }
  if (*pbVar1 != 0) {
    FUN_0801fc70();
    FUN_0800c35c();
    return 0;
  }
  FUN_0800a178();
  FUN_08020324(2);
  return 0;
}

