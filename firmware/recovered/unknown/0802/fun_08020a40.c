/**
 * @brief fun_08020a40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020a40, Ghidra name FUN_08020a40, 152 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020a40(int param_1,int param_2)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 auStack_48 [6];
  undefined4 auStack_30 [7];
  
  FUN_08000f6e(auStack_30,DAT_08020ad8,0x1c);
  FUN_08000f6e(auStack_48,DAT_08020ad8 + 0x1c,0x18);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_080154a4(10,0x50,0x55,0x69,1,0);
  FUN_08000850(&local_54,&DAT_08020adc,auStack_48[param_2]);
  FUN_08014f44(0x55,10,&local_54,0x10,0,0xae9c,1);
  FUN_08015500();
  FUN_080154a4(10,0x37,0x23,0x34,1,0);
  FUN_08000850(&local_54,&DAT_08020adc,auStack_30[param_1]);
  FUN_08014f44(0x23,10,&local_54,0x10,0,0xae9c,1);
  FUN_08015500();
  return;
}

