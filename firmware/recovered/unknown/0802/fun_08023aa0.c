/**
 * @brief fun_08023aa0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023aa0, Ghidra name FUN_08023aa0, 8 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x0800e800) */
/* WARNING: Removing unreachable block (ram,0x0800e80a) */
/* WARNING: Removing unreachable block (ram,0x0800e804) */
/* WARNING: Removing unreachable block (ram,0x0800e80e) */
/* WARNING: Removing unreachable block (ram,0x0800e81c) */
/* WARNING: Removing unreachable block (ram,0x0800e7ba) */
/* WARNING: Removing unreachable block (ram,0x0800e7be) */
/* WARNING: Removing unreachable block (ram,0x0800e7c6) */
/* WARNING: Removing unreachable block (ram,0x0800e7d0) */
/* WARNING: Removing unreachable block (ram,0x0800e7c4) */

void FUN_08023aa0(undefined1 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = DAT_0800e824;
  iVar4 = DAT_0800e820 + 0x20;
  uVar3 = *DAT_0800e824;
  if (*DAT_0800e824 < 0x20) {
    uVar2 = (uint)(byte)DAT_0800e824[1] + *DAT_0800e824 & 0x1f;
    *(undefined1 *)(DAT_0800e820 + uVar2) = param_1[4];
    *(undefined1 *)(iVar4 + uVar2) = *param_1;
    *puVar1 = uVar3 + 1;
    return;
  }
  return;
}

