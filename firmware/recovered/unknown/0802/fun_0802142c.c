/**
 * @brief fun_0802142c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802142c, Ghidra name FUN_0802142c, 118 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802142c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = DAT_080214ac;
  iVar2 = DAT_080214a4;
  uVar4 = (uint)*(ushort *)(DAT_080214a4 + 0x18);
  if (param_1 == 0) {
    uVar5 = *(int *)(DAT_080214a4 + 0x1c) - uVar4;
    if (uVar5 < DAT_080214b0) {
      uVar5 = DAT_080214b0;
    }
  }
  else {
    uVar5 = uVar4 + *(int *)(DAT_080214a4 + 0x1c);
    if (DAT_080214a8 < uVar5) {
      uVar5 = uVar5 - uVar4;
    }
  }
  cVar1 = *(char *)(DAT_080214ac + 0x10d);
  FUN_080134cc(uVar5 / 10000 & 0xffff);
  if (*(char *)(iVar3 + 0x10d) != cVar1) {
    FUN_0801b490();
    FUN_0801acde(*(undefined1 *)(iVar3 + 0x10d));
    FUN_08006d24();
  }
  FUN_08021184(uVar5);
  FUN_08020b48(uVar5);
  FUN_08020ce8(uVar5);
  FUN_08020da8(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x20));
  FUN_080212e4(0);
  return;
}

