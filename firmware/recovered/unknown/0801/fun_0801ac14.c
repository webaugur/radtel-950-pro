/**
 * @brief fun_0801ac14
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801ac14, Ghidra name FUN_0801ac14, 310 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801ac14(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 1) {
    cVar2 = '\x06';
  }
  else {
    cVar2 = '\a';
  }
  if (*DAT_08006c64 == '\x01') {
    if (cVar2 == DAT_08006c68[1]) {
      return;
    }
    if (cVar2 == '\x06') {
      DAT_08006c68[1] = '\x06';
      iVar3 = 6;
    }
    else {
      DAT_08006c68[1] = '\a';
      iVar3 = 7;
    }
  }
  else {
    if (cVar2 == *DAT_08006c68) {
      return;
    }
    if (cVar2 == '\x06') {
      *DAT_08006c68 = '\x06';
      iVar3 = 6;
    }
    else {
      *DAT_08006c68 = '\a';
      iVar3 = 7;
    }
  }
  iVar1 = DAT_0801baf0;
  uVar4 = (**(code **)(DAT_0801baf0 + 4))(0x31);
  if (iVar3 != 6) {
    if (iVar3 == 8) {
      (**(code **)(iVar1 + 8))(0x31,uVar4 | 1);
      uVar4 = (**(code **)(iVar1 + 4))(0x73);
      (**(code **)(iVar1 + 8))(0x73,uVar4 | 0x10);
      uVar4 = (**(code **)(iVar1 + 4))(0x43);
      (**(code **)(iVar1 + 8))(0x43,uVar4 & 0x800f | 0x5a20);
      uVar4 = (**(code **)(iVar1 + 4))(0x2b);
      (**(code **)(iVar1 + 8))(0x2b,uVar4 | 0x700);
      uVar4 = (**(code **)(iVar1 + 4))(0x7e);
      (**(code **)(iVar1 + 8))(0x7e,uVar4 & 0xff8 | 0xb000);
      uVar4 = (**(code **)(iVar1 + 4))(0x28);
                    /* WARNING: Could not recover jumptable at 0x0801baec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 8))(0x28,uVar4 & 0xfffffeff);
      return;
    }
    (**(code **)(iVar1 + 8))(0x31,uVar4 & 0xfffffffe);
    (**(code **)(iVar1 + 8))(0x42,0x6b5a);
    (**(code **)(iVar1 + 8))(0x2a,0x7400);
                    /* WARNING: Could not recover jumptable at 0x0801ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 8))(0x2b,0);
    return;
  }
  (**(code **)(iVar1 + 8))(0x31,uVar4 | 1);
  (**(code **)(iVar1 + 8))(0x42,0x6f5c);
  (**(code **)(iVar1 + 8))(0x2a,0x7434);
                    /* WARNING: Could not recover jumptable at 0x0801ba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x2b,0x500);
  return;
}

