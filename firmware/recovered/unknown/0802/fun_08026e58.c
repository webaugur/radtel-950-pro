/**
 * @brief fun_08026e58
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026e58, Ghidra name FUN_08026e58, 36 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08026e58(int param_1,uint param_2,uint param_3)

{
  uint extraout_r2;
  uint uVar1;
  uint extraout_r3;
  undefined8 uVar2;
  
  uVar1 = 0;
  while( true ) {
    if (param_3 <= uVar1) {
      return 1;
    }
    if ((uVar1 != param_2) &&
       (uVar2 = FUN_08026e7c(*(undefined1 *)(param_1 + uVar1)),
       param_2 = (uint)((ulonglong)uVar2 >> 0x20), param_3 = extraout_r2, uVar1 = extraout_r3,
       (int)uVar2 == 0)) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return 0;
}

