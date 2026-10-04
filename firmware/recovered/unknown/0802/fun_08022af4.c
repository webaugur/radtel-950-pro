/**
 * @brief fun_08022af4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022af4, Ghidra name FUN_08022af4, 64 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08022af4(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = (param_2 & 0xff) >> 5;
  uVar1 = 1 << (param_2 & 0x1f);
  if (uVar2 == 1) {
    uVar1 = param_1[6] & uVar1;
  }
  else if (uVar2 == 2) {
    uVar1 = param_1[8] & uVar1;
  }
  else {
    uVar1 = param_1[10] & uVar1;
  }
  if ((uVar1 != 0) && (((uint)*param_1 & 1 << (param_2 >> 8 & 0xff)) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

