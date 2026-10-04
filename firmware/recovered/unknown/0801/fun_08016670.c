/**
 * @brief fun_08016670
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016670, Ghidra name FUN_08016670, 68 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08016670(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    FUN_08015ea0(param_1,param_2,&DAT_080166b8,0);
    return 0;
  }
  if (*(char *)(DAT_080166b4 + 8) == '\x01') {
    uVar2 = *(undefined4 *)(param_3 + 0x18);
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x14);
  }
  FUN_08015ea0(param_1,param_2 + 1U & 0xff,uVar2,0);
  uVar1 = FUN_08000ea6(uVar2);
  if (0x10 < uVar1) {
    return 0x10;
  }
  uVar2 = FUN_08000ea6(uVar2);
  return uVar2;
}

