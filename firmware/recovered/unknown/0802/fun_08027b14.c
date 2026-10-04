/**
 * @brief fun_08027b14
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027b14, Ghidra name FUN_08027b14, 84 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08027b14(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    FUN_0801548c(param_2,param_2 + param_3 & 0xffff,param_1,param_1 + param_4 & 0xffff);
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
        iVar1 = (uVar3 * param_3 + uVar2) * 2;
        FUN_080157c0(CONCAT11(*(undefined1 *)(param_5 + iVar1 + 1),*(undefined1 *)(param_5 + iVar1))
                    );
      }
    }
  }
  return;
}

