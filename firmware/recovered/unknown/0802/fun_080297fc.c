/**
 * @brief fun_080297fc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080297fc, Ghidra name FUN_080297fc, 146 bytes.
 *       Not linked into rt950-firmware.
 */

ulonglong FUN_080297fc(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (uint)((param_1 & 0x80000000) != 0) * -0x80000000;
  uVar2 = (param_1 & 0x7fffffff) >> 3;
  uVar4 = param_1 << 1 ^ param_1;
  if (uVar4 != 0) {
    param_1 = param_1 << 0x1d;
    param_2 = (uVar1 | uVar2) + 0x38000000;
  }
  if (uVar4 != 0 && (uVar4 & 0x7f000000) != 0) {
    return CONCAT44(param_2,param_1);
  }
  if ((uVar2 & 0x8000000) != 0) {
    FUN_08029876(uVar1 | param_1 >> 0x1d | uVar2 << 3,param_2);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    return CONCAT44(uVar4,uVar4) & 0xffffffff7fffffff;
  }
  uVar4 = uVar4 ^ uVar4 << 2;
  uVar2 = (uVar4 ^ uVar4 << 1) & 7 | uVar2 << 3;
  iVar3 = LZCOUNT(uVar2);
  uVar2 = uVar2 << iVar3;
  return CONCAT44(uVar1 + 0x36b00000 + (0x1d - iVar3) * 0x100000 + (uVar2 >> 0xb),uVar2 << 0x15);
}

