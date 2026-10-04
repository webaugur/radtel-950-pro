/**
 * @brief fun_0800b448
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b448, Ghidra name FUN_0800b448, 90 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_0800b448(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined2 local_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_24 = 0;
  local_20 = 0;
  uStack_1c = 0;
  local_28 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  FUN_08000850(&local_24,s__03d__05d_0800b4a8,param_3 / DAT_0800b4a4,
               param_3 - DAT_0800b4a4 * (param_3 / DAT_0800b4a4));
  local_28 = CONCAT11((undefined1)uStack_1c,local_20._3_1_);
  local_20 = local_20 & 0xffffff;
  uStack_26 = 0;
  FUN_08014b60(param_2,param_1,&local_24,param_4);
  FUN_08014c68(param_2 + 0xeU & 0xffff,param_1 + 0x8eU & 0xffff,&local_28,param_4);
  return CONCAT44(local_24,CONCAT13(uStack_25,CONCAT12(uStack_26,local_28)));
}

