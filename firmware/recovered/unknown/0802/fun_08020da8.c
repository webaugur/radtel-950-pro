/**
 * @brief fun_08020da8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020da8, Ghidra name FUN_08020da8, 130 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020da8(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_080154a4(0,0xf0,0x110,0x126,1,0);
  uVar1 = DAT_08020e2c;
  FUN_08000850(&local_24,s__03d__05d_08020e30,param_1 / DAT_08020e2c,
               param_1 - DAT_08020e2c * (param_1 / DAT_08020e2c));
  FUN_08014d88(0x110,2,&local_24,0x10,0,0xffff);
  FUN_08000850(&local_24,s__03d__05d_08020e30,param_2 / uVar1,param_2 - uVar1 * (param_2 / uVar1));
  FUN_08014d88(0x110,0xa6,&local_24,0x10,0,0xffff);
  FUN_08015500();
  return;
}

