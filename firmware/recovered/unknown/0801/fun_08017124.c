/**
 * @brief fun_08017124
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08017124, Ghidra name FUN_08017124, 12 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08017124(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = param_2 % 100;
    param_2 = param_2 / 100;
    *(char *)(param_1 + uVar1) = (char)uVar2 + (char)(uVar2 / 10) * -10 + (char)(uVar2 / 10 << 4);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}

