/**
 * @brief fun_08013dc4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013dc4, Ghidra name FUN_08013dc4, 56 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08013dc4(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_08013dfc;
  FUN_0800323c(DAT_08013dfc,0,1,7);
  FUN_080032ba(uVar1,1);
  do {
    iVar2 = FUN_080031d8(uVar1,2);
  } while (iVar2 == 0);
  FUN_08003176(uVar1,2);
  uVar3 = FUN_080031d2(uVar1);
  return (uVar3 & 0xfff) >> 4;
}

