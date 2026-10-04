/**
 * @brief fun_0801b910
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b910, Ghidra name FUN_0801b910, 132 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b910(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = DAT_0801b994;
  *(int *)(DAT_0801b994 + 8) = param_1;
  if (*(char *)(iVar3 + 0x55) == -0x60) {
    bVar1 = *(byte *)(iVar3 + 0x57);
    bVar2 = *(byte *)(iVar3 + 0x56);
    lVar5 = FUN_080007ee(param_1,0,100);
    lVar5 = lVar5 * (int)((uint)bVar2 | (int)(short)((ushort)bVar1 << 8));
    iVar4 = FUN_080007ee((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),DAT_0801b998,0);
    *(int *)(iVar3 + 8) = param_1 + iVar4;
  }
  iVar4 = DAT_0801b99c;
  (**(code **)(DAT_0801b99c + 8))(0x38,*(undefined2 *)(iVar3 + 8));
  (**(code **)(iVar4 + 8))(0x39,*(uint *)(iVar3 + 8) >> 0x10);
  if (*(char *)(iVar4 + 0x21) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0801b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar4 + 8))(0x43,0x4008);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0801b992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 8))(0x43,0x3028);
  return;
}

