/**
 * @brief fun_08014088
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08014088, Ghidra name FUN_08014088, 130 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08014088(void)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  short local_c;
  undefined1 local_a;
  undefined1 local_9;
  
  FUN_08012aea(&local_c);
  uVar1 = DAT_0801410c;
  local_c = 0x400;
  local_a = 2;
  local_9 = 0x18;
  FUN_080125d4(DAT_0801410c,&local_c);
  local_c = (short)((int)uVar1 >> 0x13);
  local_9 = 0x48;
  FUN_080125d4(uVar1,&local_c);
  FUN_08022da8(&local_1c);
  uVar1 = DAT_08014110;
  local_1c = 0x2580;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_12 = 0xc;
  FUN_08022be0(DAT_08014110,&local_1c);
  FUN_08022ba8(uVar1,0x525,1);
  FUN_08022adc(uVar1,1);
  return;
}

