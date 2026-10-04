/**
 * @brief fun_08021b10
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021b10, Ghidra name FUN_08021b10, 74 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08021b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  uint local_14;
  
  uVar1 = DAT_08021b5c;
  local_1c = (undefined2)param_2;
  local_1a = (undefined2)((uint)param_2 >> 0x10);
  local_20 = param_1;
  local_18 = param_3;
  local_14 = param_4;
  FUN_08022ca4(DAT_08021b5c);
  FUN_08022da8(&local_20);
  local_1c = 0;
  local_1a = 0;
  local_14 = local_14 & 0xffff0000;
  local_18 = 0xc0000;
  local_20 = param_1;
  FUN_08022be0(uVar1,&local_20);
  FUN_08022ba8(uVar1,0x525,1);
  FUN_08022adc(uVar1,1);
  return CONCAT26(local_1a,CONCAT24(local_1c,local_20));
}

