/**
 * @brief fun_0802a058
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802a058, Ghidra name FUN_0802a058, 4 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_0802a058(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  *(int *)(param_1 * 2) = param_1;
  uVar1 = FUN_08001d58();
  if ((param_4 & 0xf) != 9) {
    return uVar1;
  }
  if ((param_4 & 0x100000) == 0) {
    return (uint)((param_4 & uVar1 << 0x10) != 0);
  }
  if ((param_4 & 0x70000) == 0) {
    return uVar1 << 0x1d;
  }
  if ((uVar1 & 8) != 0) {
    return uVar1;
  }
  return 2 - uVar1;
}

