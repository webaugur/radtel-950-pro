/**
 * @brief fun_080213d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080213d8, Ghidra name FUN_080213d8, 68 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080213d8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_0801c4f0(param_1);
  iVar2 = DAT_0802141c;
  uVar1 = *(undefined1 *)(DAT_0802141c + 0x62);
  if ((uint)(DAT_08021420 + param_1) < DAT_08021424) {
    *(undefined1 *)(DAT_0802141c + 0x62) = 0;
  }
  else {
    *(undefined1 *)(DAT_0802141c + 0x62) = 1;
  }
  puVar3 = DAT_08021428;
  FUN_0800a07c(param_1,*DAT_08021428);
  *(undefined1 *)(iVar2 + 0x62) = uVar1;
  FUN_0801a9a4(puVar3[0x10],1);
  return;
}

