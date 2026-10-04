/**
 * @brief fun_08021074
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021074, Ghidra name FUN_08021074, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021074(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_0801baf0;
  if (param_1 == 1) {
    iVar3 = 6;
  }
  else if (param_1 == 2) {
    iVar3 = 8;
  }
  else {
    iVar3 = 7;
  }
  uVar2 = (**(code **)(DAT_0801baf0 + 4))(0x31);
  if (iVar3 != 6) {
    if (iVar3 != 8) {
      (**(code **)(iVar1 + 8))(0x31,uVar2 & 0xfffffffe);
      (**(code **)(iVar1 + 8))(0x42,0x6b5a);
      (**(code **)(iVar1 + 8))(0x2a,0x7400);
                    /* WARNING: Could not recover jumptable at 0x0801ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 8))(0x2b,0);
      return;
    }
    (**(code **)(iVar1 + 8))(0x31,uVar2 | 1);
    uVar2 = (**(code **)(iVar1 + 4))(0x73);
    (**(code **)(iVar1 + 8))(0x73,uVar2 | 0x10);
    uVar2 = (**(code **)(iVar1 + 4))(0x43);
    (**(code **)(iVar1 + 8))(0x43,uVar2 & 0x800f | 0x5a20);
    uVar2 = (**(code **)(iVar1 + 4))(0x2b);
    (**(code **)(iVar1 + 8))(0x2b,uVar2 | 0x700);
    uVar2 = (**(code **)(iVar1 + 4))(0x7e);
    (**(code **)(iVar1 + 8))(0x7e,uVar2 & 0xff8 | 0xb000);
    uVar2 = (**(code **)(iVar1 + 4))(0x28);
                    /* WARNING: Could not recover jumptable at 0x0801baec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 8))(0x28,uVar2 & 0xfffffeff);
    return;
  }
  (**(code **)(iVar1 + 8))(0x31,uVar2 | 1);
  (**(code **)(iVar1 + 8))(0x42,0x6f5c);
  (**(code **)(iVar1 + 8))(0x2a,0x7434);
                    /* WARNING: Could not recover jumptable at 0x0801ba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x2b,0x500);
  return;
}

