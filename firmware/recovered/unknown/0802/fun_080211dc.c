/**
 * @brief fun_080211dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080211dc, Ghidra name FUN_080211dc, 66 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080211dc(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_08021170();
  uVar2 = FUN_0802115c();
  puVar1 = DAT_08021220;
  uVar5 = 0;
  do {
    if (*(int *)(DAT_08021220 + 8) == *(int *)(DAT_08021224 + uVar5 * 4 + 0x18)) {
      iVar4 = 1;
      break;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 10);
  if (iVar4 != 0) {
    *DAT_08021220 = (short)iVar4;
    uVar3 = FUN_08021290(iVar4);
    puVar1[4] = uVar3;
    puVar1[1] = uVar2;
    return 1;
  }
  return 0;
}

