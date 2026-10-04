/**
 * @brief fun_0801b20e
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b20e, Ghidra name FUN_0801b20e, 136 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x0800e800) */
/* WARNING: Removing unreachable block (ram,0x0800e80a) */
/* WARNING: Removing unreachable block (ram,0x0800e804) */
/* WARNING: Removing unreachable block (ram,0x0800e80e) */
/* WARNING: Removing unreachable block (ram,0x0800e81c) */
/* WARNING: Removing unreachable block (ram,0x0800e7b0) */
/* WARNING: Removing unreachable block (ram,0x0800e7ba) */
/* WARNING: Removing unreachable block (ram,0x0800e7be) */
/* WARNING: Removing unreachable block (ram,0x0800e7e8) */
/* WARNING: Removing unreachable block (ram,0x0800e7ec) */
/* WARNING: Removing unreachable block (ram,0x0800e7fe) */

void FUN_0801b20e(uint *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = DAT_0800e824;
  iVar1 = DAT_0800e820;
  iVar4 = *DAT_0800e824;
  iVar5 = DAT_0800e820 + 0x20;
  param_1[1] = 0xff;
  *param_1 = 0xff;
  if (iVar4 == 0) {
    return;
  }
  iVar3 = piVar2[1];
  param_1[1] = (uint)*(byte *)(iVar1 + iVar3);
  *param_1 = (uint)*(byte *)(iVar5 + iVar3);
  piVar2[1] = iVar3 + 1U & 0x1f;
  *piVar2 = iVar4 + -1;
  return;
}

