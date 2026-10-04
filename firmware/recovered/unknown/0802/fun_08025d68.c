/**
 * @brief fun_08025d68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025d68, Ghidra name FUN_08025d68, 194 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08025d68(byte *param_1,undefined2 *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  dword dVar3;
  dword dVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  dVar4 = DWORD_08025e30;
  uVar10 = 0;
  iVar11 = 0;
  iVar8 = (int)*(short *)(DWORD_08025e2c + 2);
  uVar9 = (uint)*(byte *)DWORD_08025e2c;
  uVar1 = *(ushort *)(DWORD_08025e30 + uVar9 * 2);
  bVar2 = false;
  iVar12 = param_3 << 1;
  while( true ) {
    dVar3 = DWORD_08025e2c;
    if (iVar12 < 1) break;
    bVar2 = !bVar2;
    if (bVar2) {
      pbVar5 = param_1 + 1;
      uVar10 = (uint)*param_1;
      uVar6 = (uint)(*param_1 >> 4);
    }
    else {
      uVar6 = uVar10 & 0xf;
      pbVar5 = param_1;
    }
    uVar9 = uVar9 + *(int *)((DWORD_08025e30 - 0x40) + uVar6 * 4);
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
    if (0x3a < (int)uVar9) {
      uVar9 = 0x3a;
    }
    uVar7 = (uint)(uVar1 >> 3);
    if ((int)(uVar6 << 0x1d) < 0) {
      uVar7 = uVar7 + uVar1 & 0xffff;
    }
    if ((int)(uVar6 << 0x1e) < 0) {
      uVar7 = uVar7 + (uVar1 >> 1) & 0xffff;
    }
    if ((uVar6 & 1) != 0) {
      uVar7 = uVar7 + (uVar1 >> 2) & 0xffff;
    }
    if ((uVar6 & 8) == 0) {
      iVar8 = iVar8 + uVar7;
      if (0x7ff < iVar8) {
        iVar8 = 0x7ff;
      }
    }
    else {
      iVar8 = iVar8 - uVar7;
      if (iVar8 < _BYTE_ARRAY_08025e34) {
        iVar8 = _BYTE_ARRAY_08025e34;
      }
    }
    uVar1 = *(ushort *)(dVar4 + uVar9 * 2);
    *param_2 = (short)iVar8;
    iVar11 = iVar11 + 1;
    param_1 = pbVar5;
    param_2 = param_2 + 1;
    iVar12 = iVar12 + -1;
  }
  *(short *)(DWORD_08025e2c + 2) = (short)iVar8;
  *(char *)dVar3 = (char)uVar9;
  return iVar11;
}

