/**
 * @brief fun_08028f3c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08028f3c, Ghidra name FUN_08028f3c, 98 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08028f3c(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_4 | param_2;
  if ((int)uVar2 < 0) {
    if ((int)(uVar2 + 0x100000) < 0) {
      bVar1 = (param_4 & 0x7fffffff) == 0;
      bVar3 = param_3 == 0 && bVar1;
      if (param_3 == 0 && bVar1) {
        bVar3 = param_1 == 0 && (param_2 & 0x7fffffff) == 0;
      }
      if (!bVar3) {
        bVar3 = param_2 == param_4;
      }
      if (bVar3) {
        return;
      }
      return;
    }
    if (param_4 << 1 < 0xffe00000 && param_2 << 1 < 0xffe00000) {
      return;
    }
  }
  else {
    if (-1 < (int)(uVar2 + 0x100000)) {
      if (param_4 == param_2) {
        return;
      }
      return;
    }
    if (-1 < (int)(param_4 + 0x100000) && -1 < (int)(param_2 + 0x100000)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_08028c58(param_3,param_4,param_1,param_2);
}

