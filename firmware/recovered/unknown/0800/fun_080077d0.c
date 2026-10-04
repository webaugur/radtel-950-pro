/**
 * @brief fun_080077d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080077d0, Ghidra name FUN_080077d0, 138 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080077d0(void)

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
  
  FUN_0801a648(0x4000);
  FUN_08012aea(&local_c);
  uVar1 = DAT_0800785c;
  local_c = 0x200;
  local_a = 2;
  local_9 = 0x18;
  FUN_080125d4(DAT_0800785c,&local_c);
  local_c = (short)((int)uVar1 >> 0x14);
  local_9 = 0x48;
  FUN_080125d4(uVar1,&local_c);
  FUN_08022da8(&local_1c);
  uVar1 = DAT_08007860;
  local_1c = 0x1c200;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_12 = 0xc;
  FUN_08022be0(DAT_08007860,&local_1c);
  FUN_08022ba8(uVar1,0x525,1);
  FUN_08022adc(uVar1,1);
  return;
}

