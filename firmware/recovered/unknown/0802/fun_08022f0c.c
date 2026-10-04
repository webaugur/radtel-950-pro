/**
 * @brief fun_08022f0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022f0c, Ghidra name FUN_08022f0c, 106 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022f0c(void)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  
  FUN_08012aea(&local_c);
  local_a = 2;
  local_c = 0x800;
  local_9 = 0x48;
  FUN_080125d4(DAT_08022f78,&local_c);
  FUN_08022da8(&local_1c);
  uVar1 = DAT_08022f7c;
  local_1c = 0x1c200;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_12 = 0xc;
  FUN_08022be0(DAT_08022f7c,&local_1c);
  FUN_08022ba8(uVar1,0x525,1);
  FUN_08022adc(uVar1,1);
  return;
}

