/**
 * @brief fun_0800091c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800091c, Ghidra name FUN_0800091c, 104 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800091c(int *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  uVar3 = 0;
  uVar1 = *param_3;
  pbVar4 = BYTE_ARRAY_08000984;
  if (param_2 != 0x75) {
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
      pbVar4 = &DAT_08000988;
    }
    else if (*param_1 << 0x1e < 0) {
      pbVar4 = (byte *)0x800098c;
    }
    else {
      if (-1 < *param_1 << 0x1d) goto LAB_08000954;
      pbVar4 = (byte *)0x8000990;
    }
    uVar3 = 1;
  }
LAB_08000954:
  iVar2 = 0;
  for (; uVar1 != 0; uVar1 = uVar1 / 10) {
    *(char *)((int)param_1 + iVar2 + 0x24) = (char)uVar1 + (char)(uVar1 / 10) * -10 + '0';
    iVar2 = iVar2 + 1;
  }
  FUN_080011d0(param_1,iVar2,pbVar4,uVar3);
  return;
}

