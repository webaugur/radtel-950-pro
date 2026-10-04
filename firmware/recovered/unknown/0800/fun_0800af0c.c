/**
 * @brief fun_0800af0c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800af0c, Ghidra name FUN_0800af0c, 24 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800af0c(undefined4 param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(DAT_0800af24 + 1);
  if (bVar1 < 7) {
    if (4 < bVar1) {
      bVar1 = 4;
    }
  }
  else {
    bVar1 = 3;
  }
  FUN_0800aeb8(bVar1,param_1);
  return;
}

