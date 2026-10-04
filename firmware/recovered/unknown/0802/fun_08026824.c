/**
 * @brief fun_08026824
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026824, Ghidra name FUN_08026824, 196 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026824(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,int param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint uVar2;
  
  uVar2 = 7 - param_8;
  uVar1 = FUN_08025ff2((param_2 / 10) % 10,uVar2 & 4);
  *param_1 = uVar1;
  uVar1 = FUN_08025ff2(param_2 % 10,uVar2 & 2);
  param_1[1] = uVar1;
  uVar1 = FUN_08025ff2((extraout_r2 / 10) % 10,uVar2 & 1);
  param_1[2] = uVar1;
  if (param_5 == 0x4e) {
    param_1[3] = (char)extraout_r2_00 + (char)(extraout_r2_00 / 10) * -10 + 'P';
  }
  else {
    param_1[3] = (char)extraout_r2_00 + (char)(extraout_r2_00 / 10) * -10 + '0';
  }
  if (param_6 - 10U < 0x5a) {
    param_1[4] = (char)(extraout_r3 / 10) + (char)((extraout_r3 / 10) / 10) * -10 + '0';
  }
  else {
    param_1[4] = (char)(extraout_r3 / 10) + (char)((extraout_r3 / 10) / 10) * -10 + 'P';
  }
  if (param_7 == 0x57) {
    param_1[5] = (char)extraout_r3 + (char)(extraout_r3 / 10) * -10 + 'P';
  }
  else {
    param_1[5] = (char)extraout_r3 + (char)(extraout_r3 / 10) * -10 + '0';
  }
  return;
}

