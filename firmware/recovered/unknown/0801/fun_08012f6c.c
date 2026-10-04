/**
 * @brief fun_08012f6c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012f6c, Ghidra name FUN_08012f6c, 72 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08012f6c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *DAT_08012fb4;
  for (uVar1 = 0; uVar1 < (uint)DAT_08012fb4[2]; uVar1 = uVar1 + 1) {
    iVar3 = *(int *)(DAT_08012fb4[uVar1 + 3] * 0x21 + iVar3 + 0x1d);
  }
  uVar1 = FUN_08013020();
  iVar5 = 0;
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08027402(iVar3);
    if (iVar2 != 0) {
      iVar5 = iVar5 + 1;
    }
    iVar3 = iVar3 + 0x21;
  }
  return iVar5;
}

