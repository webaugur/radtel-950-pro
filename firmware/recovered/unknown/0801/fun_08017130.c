/**
 * @brief fun_08017130
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017130, Ghidra name FUN_08017130, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08017130(int param_1,uint param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  
  while( true ) {
    uVar2 = param_2 - unaff_r5 * param_4;
    uVar1 = (ulonglong)param_2;
    param_2 = (uint)(uVar1 / unaff_r5);
    *(char *)(param_1 + param_3) =
         ((char)uVar2 - (char)unaff_r4 * (char)(uVar2 / unaff_r4)) + (char)(uVar2 / unaff_r4 << 4);
    param_3 = param_3 + 1 & 0xff;
    if (3 < param_3) break;
    param_4 = (int)((uVar1 / unaff_r5) / (ulonglong)unaff_r5);
  }
  return;
}

