/**
 * @brief fun_080242f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080242f8, Ghidra name FUN_080242f8, 442 bytes.
 *       Not linked into rt950-firmware.
 */

float FUN_080242f8(float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  bVar4 = false;
  if (DAT_080244a4 < (int)param_1 * 2 + 0x99000000U) {
    if ((~(uint)param_1 & 0x7f800000) == 0) {
      if (param_1 != -INFINITY) {
        return param_1 + param_1;
      }
      return DAT_080244dc;
    }
    if ((uint)((int)param_1 * 2) < 0x67000000) {
      return 1.0;
    }
    if (DAT_080244d8 < (uint)((int)param_1 << 1)) {
      FUN_080011c4(2);
      if (((uint)param_1 & 0x80000000) != 0) {
        fVar6 = (float)FUN_08025c74();
        return fVar6;
      }
      goto LAB_08025c64;
    }
    bVar4 = true;
  }
  if (((uint)param_1 & 0x80000000) == 0) {
    fVar6 = 0.5;
  }
  else {
    fVar6 = -0.5;
  }
  uVar5 = (uint)(fVar6 + param_1 * DAT_080244a8);
  fVar6 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (param_1 - fVar6 * DAT_080244ac) - fVar6 * DAT_080244b0;
  uVar2 = uVar5 & 3;
  iVar1 = (int)uVar5 >> 2;
  fVar6 = *(float *)(DAT_080244c4 + 0x8024376 + uVar2 * 4) +
          *(float *)(DAT_080244c8 + 0x8024382 + uVar2 * 4) *
          (DAT_080244c0 + fVar6 * (DAT_080244bc + fVar6 * (DAT_080244b8 + fVar6 * DAT_080244b4))) *
          fVar6 + *(float *)(DAT_080244cc + 0x8024392 + uVar2 * 4);
  if (!bVar4) {
    fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorFloatToUnsigned(DAT_080244d4 + fVar7 * DAT_080244d0,3);
    return fVar7 * fVar6;
  }
  iVar3 = iVar1 - ((int)uVar5 >> 0x1f) >> 1;
  fVar6 = (float)((iVar1 - iVar3) * 0x800000 + 0x3f800000) *
          (float)(iVar3 * 0x800000 + 0x3f800000) * fVar6;
  if (fVar6 == 0.0) {
    FUN_080011c4(2);
    fVar6 = (float)FUN_08025c74();
    return fVar6;
  }
  if (fVar6 != INFINITY) {
    iVar1 = FUN_08023aec(fVar6);
    if (iVar1 == 4) {
      FUN_08025c74();
    }
    return fVar6;
  }
  FUN_080011c4(2);
LAB_08025c64:
  return DAT_08025c70 * DAT_08025c70;
}

