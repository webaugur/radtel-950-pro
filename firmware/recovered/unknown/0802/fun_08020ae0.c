/**
 * @brief fun_08020ae0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020ae0, Ghidra name FUN_08020ae0, 94 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020ae0(uint param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_1c[0] = *(undefined4 *)(DAT_08020b40 + 0x40);
  local_1c[1] = *(undefined4 *)(DAT_08020b40 + 0x44);
  local_1c[2] = *(undefined4 *)(DAT_08020b40 + 0x48);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_080154a4(0xd2,0xed,0x23,0x37,1,0);
  FUN_08000850(&local_28,&DAT_08020b44,local_1c[param_1 & 1]);
  FUN_08014f44(0x23,0xd2,&local_28,0x10,0,0xae9c,1);
  FUN_08015500();
  return;
}

