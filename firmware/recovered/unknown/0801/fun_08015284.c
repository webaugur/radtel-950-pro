/**
 * @brief fun_08015284
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015284, Ghidra name FUN_08015284, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015284(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    FUN_0801cc2a(param_2,param_2 + param_3 & 0xffff,param_1,param_1 + param_4 & 0xffff);
    FUN_08027b68();
    for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
      for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
        FUN_08023aa8(param_5);
      }
    }
  }
  return;
}

