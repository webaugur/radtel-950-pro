/**
 * @brief fun_08001d58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001d58, Ghidra name FUN_08001d58, 44 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08001d6e) */

undefined8
FUN_08001d58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  undefined1 local_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0800283e(DAT_08001d84 & param_5,local_20,&uStack_18,&uStack_10,param_5);
  return 0;
}

