/**
 * @brief fun_08029a7a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029a7a, Ghidra name FUN_08029a7a, 62 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08029cfe) */

uint FUN_08029a7a(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint in_fpscr;
  
  if ((in_fpscr & 0x1000000) != 0) {
    return param_1 & 0x80000000;
  }
  if ((in_fpscr & 0x800) == 0) {
    return param_1;
  }
  uVar1 = LZCOUNT(param_1 & 0x7fffffff) - 8;
  uVar1 = FUN_08001d58(((param_1 & 0x7fffffff) << (uVar1 & 0xff)) +
                       (param_1 & 0x80000000 | 0x60000000) + uVar1 * -0x800000);
  if ((param_3 & 0xf) != 9) {
    return uVar1;
  }
  if ((param_3 & 0x100000) != 0) {
    if ((param_3 & 0x70000) == 0) {
      return uVar1 << 0x1d;
    }
    if ((uVar1 & 8) != 0) {
      return uVar1;
    }
    return 2 - uVar1;
  }
  return (uint)(((param_3 | 0x20000000) & uVar1 << 0x10) != 0);
}

