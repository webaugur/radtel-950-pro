/**
 * @brief fun_08023fe0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023fe0, Ghidra name FUN_08023fe0, 508 bytes.
 *       Not linked into rt950-firmware.
 */

float FUN_08023fe0(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = 0xe8000000;
  bVar4 = 0xe4ffffff < (int)param_1 * 2 + 0xe8000000U;
  if (!bVar4) {
    uVar2 = (int)param_2 * 2 + 0xe8000000;
  }
  fVar9 = param_1;
  fVar5 = param_2;
  if (bVar4 || 0xe4ffffff < uVar2) {
    if (0xff000000 < (uint)((int)param_1 << 1) || 0xff000000 < (uint)((int)param_2 << 1)) {
      return param_1 + param_2;
    }
    if ((((uint)param_1 | (uint)param_2) & 0x7fffffff) == 0) {
      param_2 = (float)((uint)param_2 | 0x7f800000);
      fVar5 = param_2;
    }
    else if (ABS(param_1) == INFINITY && ABS(param_2) == INFINITY) {
      fVar9 = (float)((uint)param_1 & 0xbfffffff);
      param_2 = (float)((uint)param_2 & 0xbfffffff);
      param_1 = fVar9;
      fVar5 = param_2;
    }
    else if (ABS(param_1) == INFINITY || ABS(param_2) == 0.0) {
      fVar9 = (float)((uint)param_1 | 0x7f800000);
      param_2 = (float)((uint)param_2 & 0x80000000);
    }
    else if (-1 < ((int)param_2 * 2 ^ (int)param_1 << 1)) {
      fVar5 = DAT_08024228;
      if ((int)param_2 * 2 < 0) {
        fVar5 = DAT_0802422c;
      }
      param_2 = param_2 * fVar5;
      fVar9 = param_1 * fVar5;
      param_1 = param_1 * fVar5;
      fVar5 = param_2;
    }
  }
  iVar3 = ((uint)ABS(fVar9) >> 0x17) - ((uint)ABS(param_2) >> 0x17);
  if (0x1b < iVar3) {
    fVar5 = DAT_080241d8;
    if (((uint)fVar9 & 0x80000000) == 0) {
      fVar5 = DAT_080241dc;
    }
    return fVar5;
  }
  if (-0x1b < iVar3) {
    if ((uint)((int)fVar9 * 2) < (uint)((int)param_2 * 2) || (int)fVar9 * 2 + (int)param_2 * -2 == 0
       ) {
      fVar7 = DAT_08024200;
      fVar8 = DAT_08024200;
      if ((((uint)param_2 & 0x80000000) != 0) &&
         (fVar7 = DAT_08024208, fVar8 = DAT_08024204, ((uint)fVar9 & 0x80000000) == 0)) {
        fVar7 = DAT_08024210;
        fVar8 = DAT_0802420c;
      }
    }
    else {
      fVar7 = DAT_080241ec;
      fVar8 = DAT_080241e8;
      if (((uint)fVar9 & 0x80000000) == 0) {
        fVar7 = DAT_080241f4;
        fVar8 = DAT_080241f0;
      }
      fVar6 = -param_1;
      fVar1 = -fVar9;
      fVar9 = param_2;
      param_2 = fVar1;
      param_1 = fVar5;
      fVar5 = fVar6;
    }
    if ((uint)(((int)param_2 - (int)fVar9) * 2) < 0x1000000) {
      if ((((uint)fVar9 ^ (uint)param_2) & 0x80000000) == 0) {
        fVar9 = 0.5;
        fVar8 = fVar8 + DAT_080241f8;
        fVar7 = fVar7 + DAT_080241fc;
      }
      else {
        fVar9 = -0.5;
        fVar8 = fVar8 - DAT_080241f8;
        fVar7 = fVar7 - DAT_080241fc;
      }
      param_1 = (param_1 - fVar9 * fVar5) / (fVar5 + param_1 * fVar9);
    }
    else {
      param_1 = param_1 / fVar5;
    }
    fVar9 = param_1 * param_1;
    return fVar7 + param_1 * fVar9 *
                   (DAT_08024224 +
                   fVar9 * (DAT_08024220 +
                           fVar9 * (DAT_0802421c + fVar9 * (DAT_08024218 + fVar9 * DAT_08024214))))
           + param_1 + fVar8;
  }
  if (((uint)param_2 & 0x80000000) == 0) {
    iVar3 = FUN_08023aec(param_1 / fVar5);
    if (iVar3 == 4) {
      FUN_08025c74();
    }
    return param_1 / fVar5;
  }
  fVar5 = DAT_080241e0;
  if (((uint)fVar9 & 0x80000000) != 0) {
    fVar5 = DAT_080241e4;
  }
  return fVar5;
}

