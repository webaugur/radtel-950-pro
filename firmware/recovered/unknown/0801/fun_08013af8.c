/**
 * @brief fun_08013af8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013af8, Ghidra name FUN_08013af8, 134 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 * FUN_08013af8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_08013b80;
  iVar2 = FUN_080090ec((uint)*(byte *)(DAT_08013b80 + 1) * 99 + param_1 & 0xffff,0);
  puVar1 = DAT_08013b84;
  if (iVar2 == 0) {
    FUN_08000850(DAT_08013b84 + 3,&DAT_08013b90,param_1 + 1);
    *puVar1 = 2;
    puVar1[1] = 0x11;
    puVar1[2] = 0x20;
  }
  else {
    iVar3 = FUN_080090ec((uint)*(byte *)(iVar3 + 1) * 99 + param_1 & 0xffff,1);
    if (iVar3 == 0) {
      FUN_08000850(puVar1 + 3,s_CH__03d_08013b88,param_1 + 1);
      *puVar1 = 2;
      puVar1[1] = 0x11;
      puVar1[2] = 0x20;
    }
    else {
      FUN_08000850(puVar1 + 3,s_CH__03d_08013b88,param_1 + 1);
      *puVar1 = 2;
      puVar1[1] = 0x10;
      puVar1[2] = 0x20;
    }
  }
  return DAT_08013b84;
}

