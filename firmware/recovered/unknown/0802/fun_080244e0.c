/**
 * @brief fun_080244e0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080244e0, Ghidra name FUN_080244e0, 254 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080244e0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 in_d0;
  uint uVar8;
  uint uVar9;
  undefined8 in_d1;
  undefined8 uVar10;
  undefined4 local_28;
  
  uVar5 = (uint)in_d0;
  uVar8 = (uint)((ulonglong)in_d0 >> 0x20);
  iVar6 = (int)in_d1;
  uVar9 = (uint)((ulonglong)in_d1 >> 0x20);
  if ((-1 < (int)(0x7ff00000 - ((uint)(uVar5 != 0) | uVar8 & 0x7fffffff))) &&
     (-1 < (int)(0x7ff00000 - (uVar9 & 0x7fffffff | (uint)(iVar6 != 0))))) {
    bVar4 = DAT_080245e0 == uVar8 * 2;
    uVar1 = uVar8;
    if (bVar4) {
      uVar1 = uVar5;
    }
    if (!bVar4 || uVar1 != 0) {
      iVar3 = uVar9 << 1;
      iVar2 = iVar3;
      if (iVar3 == 0) {
        iVar2 = iVar6;
      }
      if (iVar3 != 0 || iVar2 != 0) goto LAB_08024554;
    }
    FUN_080011c4(1);
    uVar7 = FUN_08025bf8();
    return uVar7;
  }
LAB_08024554:
  uVar10 = FUN_08028d5c(uVar5,uVar8,iVar6,uVar9);
  uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
  local_28 = (undefined4)uVar10;
  if (((~(uVar5 >> 0x14) & 0x7ff) != 0) && ((uVar8 & 0x80000000) != (uVar5 & 0x80000000))) {
    local_28 = FUN_08028fa0(iVar6,uVar5 & 0x80000000 | uVar9 & 0x7fffffff,local_28,uVar5,uVar10);
  }
  return local_28;
}

