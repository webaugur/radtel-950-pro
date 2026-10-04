/**
 * @brief fun_08013d88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013d88, Ghidra name FUN_08013d88, 56 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08013d88(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_08013dc0;
  FUN_0800323c(DAT_08013dc0,1,1,7);
  FUN_080032ba(uVar1,1);
  do {
    iVar2 = FUN_080031d8(uVar1,2);
  } while (iVar2 == 0);
  FUN_08003176(uVar1,2);
  uVar3 = FUN_080031d2(uVar1);
  return (uVar3 & 0xfff) >> 4;
}

