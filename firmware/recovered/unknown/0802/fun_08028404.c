/**
 * @brief fun_08028404
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028404, Ghidra name FUN_08028404, 24 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08028404(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte in_Q;
  
  uVar1 = param_2 >> 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0xc0000000 - uVar1;
  }
  uVar2 = param_4 >> 1;
  if (-1 < (int)uVar2) {
    uVar2 = 0xc0000000 - uVar2;
  }
  return (uint)(byte)(((int)(uVar2 - uVar1) < 0) << 4 | (uVar2 == uVar1) << 3 |
                      (uVar1 <= uVar2) << 2 | SBORROW4(uVar2,uVar1) << 1 | in_Q) << 0x1b;
}

