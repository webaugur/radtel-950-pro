/**
 * @brief fun_0800087c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800087c, Ghidra name FUN_0800087c, 44 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800087c(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[6];
  if ((int)(*param_1 << 0x1b) < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(uVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}

