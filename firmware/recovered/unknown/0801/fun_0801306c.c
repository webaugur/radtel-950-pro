/**
 * @brief fun_0801306c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801306c, Ghidra name FUN_0801306c, 354 bytes.
 *       Not linked into rt950-firmware.
 */

float FUN_0801306c(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  float extraout_s2_00;
  undefined4 extraout_s3;
  float extraout_s4;
  undefined4 extraout_s5;
  float extraout_s5_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_1 != param_3) || (fVar2 = DAT_080131d0, param_2 != param_4)) {
    FUN_08025f34();
    FUN_08025f34(extraout_s5);
    uVar1 = FUN_08025f34(extraout_s2);
    fVar2 = (float)FUN_08025f34(extraout_s3,extraout_s1,uVar1);
    fVar5 = (extraout_s4 + extraout_s2_00) * 0.5;
    fVar6 = (extraout_s4 - extraout_s2_00) * 0.5;
    fVar7 = (extraout_s5_00 - fVar2) * 0.5;
    fVar2 = (float)FUN_08000754(fVar6);
    fVar6 = (float)FUN_080006dc(fVar6);
    fVar3 = (float)FUN_08000754(fVar5);
    fVar5 = (float)FUN_080006dc(fVar5);
    fVar4 = (float)FUN_08000754(fVar7);
    fVar7 = (float)FUN_080006dc(fVar7);
    fVar8 = fVar2 * fVar2 * fVar7 * fVar7 + fVar5 * fVar5 * fVar4 * fVar4;
    fVar9 = fVar6 * fVar6 * fVar7 * fVar7 + fVar3 * fVar3 * fVar4 * fVar4;
    fVar4 = (float)FUN_08023fe0(SQRT(fVar8),SQRT(fVar9));
    fVar7 = SQRT(fVar8 * fVar9) / fVar4;
    fVar4 = fVar4 * 2.0 * DAT_080131d4;
    fVar2 = (float)FUN_080242f8((((fVar7 * 3.0 - 1.0) / (fVar9 * 2.0)) * fVar3 * fVar3 * fVar6 *
                                 fVar6 - ((fVar7 * 3.0 + 1.0) / (fVar8 * 2.0)) * fVar5 * fVar5 *
                                         fVar2 * fVar2) * DAT_080131d8);
    fVar2 = fVar2 * fVar4;
  }
  return fVar2;
}

