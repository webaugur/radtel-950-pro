/**
 * @brief fun_08022df0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022df0, Ghidra name FUN_08022df0, 96 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08022df0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_08022e50;
  uVar4 = 0;
  while( true ) {
    FUN_08012fe8();
    iVar2 = FUN_08027402();
    if (iVar2 == 1) break;
    if (param_1 == 0) {
      iVar2 = iVar1 + *(int *)(iVar1 + 8) * 4;
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        uVar4 = 1;
        iVar2 = FUN_08013020();
        *(int *)(iVar1 + *(int *)(iVar1 + 8) * 4 + 0xc) = iVar2 + -1;
      }
      else {
        *(int *)(iVar2 + 0xc) = iVar3 + -1;
      }
    }
    else if (param_1 == 1) {
      iVar2 = FUN_08013020();
      iVar3 = iVar1 + *(int *)(iVar1 + 8) * 4;
      if (*(uint *)(iVar3 + 0xc) < iVar2 - 1U) {
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) + 1;
      }
      else {
        uVar4 = 1;
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
    }
  }
  return uVar4;
}

