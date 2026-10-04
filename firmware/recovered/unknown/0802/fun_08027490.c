/**
 * @brief fun_08027490
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027490, Ghidra name FUN_08027490, 70 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4
FUN_08027490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_08000ea6(param_1);
  if (uVar1 < 0x15) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_08000b74(param_1 + 7,s__2d_2d_f__2d__2d__4d_080274d8,param_5,param_6,param_7,param_4
                         ,param_3,param_2);
    if (iVar3 == 6) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

