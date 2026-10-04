/**
 * @brief fun_080295ce
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080295ce, Ghidra name FUN_080295ce, 64 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_080295ce(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r6;
  uint in_r12;
  uint in_fpscr;
  undefined8 uVar2;
  
  if ((in_fpscr & 0x1000000) != 0) {
    return 0;
  }
  if ((in_fpscr & 0x800) == 0) {
    return param_1;
  }
  uVar2 = FUN_08028f2a(param_1,param_2);
  uVar1 = FUN_08001d58((int)uVar2,
                       ((uint)((ulonglong)uVar2 >> 0x20) | unaff_r6) + (unaff_r4 + 0x5ff) * 0x100000
                      );
  if ((in_r12 & 0xf) != 9) {
    return uVar1;
  }
  if ((in_r12 & 0x100000) != 0) {
    if ((in_r12 & 0x70000) == 0) {
      return uVar1 << 0x1d;
    }
    if ((uVar1 & 8) != 0) {
      return uVar1;
    }
    return 2 - uVar1;
  }
  return (uint)(((in_r12 | 0x20000080) & uVar1 << 0x10) != 0);
}

