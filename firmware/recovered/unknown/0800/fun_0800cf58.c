/**
 * @brief fun_0800cf58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800cf58, Ghidra name FUN_0800cf58, 92 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800cf58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  if (param_1 != 0) {
    uStack_14 = 0x2965;
    FUN_080154a4(0xd3,0xe4,299,0x13a,1);
  }
  if (*(char *)(DAT_0800cfb4 + 99) == '\0') {
    uVar2 = DAT_0800cfbc;
    uVar1 = FUN_08027b14(299,0xd5,0xd,0xf);
  }
  else {
    uVar2 = DAT_0800cfb8;
    uVar1 = FUN_08027b14(299,0xd5,0xd,0xf);
  }
  if (param_1 != 0) {
    FUN_08015500((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),uVar2,uStack_14);
    return;
  }
  return;
}

