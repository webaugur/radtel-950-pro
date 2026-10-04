/**
 * @brief fun_0801efbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801efbc, Ghidra name FUN_0801efbc, 112 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801efbc(void)

{
  bool bVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint in_r3;
  uint local_18;
  
  iVar5 = DAT_0801f02c;
  bVar1 = true;
  local_18 = in_r3;
  if (*(int *)(DAT_0801f02c + 4) == 6) {
    local_18 = (uint)*(uint3 *)(DAT_0801f02c + 0x12);
    sVar3 = FUN_08000bb0(&local_18);
    local_18 = (uint)*(uint3 *)(iVar5 + 0x15);
    sVar4 = FUN_08000bb0(&local_18);
    iVar5 = FUN_08009598(sVar3 * 10,sVar4 * 10);
    psVar2 = DAT_0801f030;
    if (iVar5 == 0) {
      *DAT_0801f030 = sVar3;
      psVar2[1] = sVar4;
      FUN_08018038();
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_08017914();
  }
  return 1;
}

