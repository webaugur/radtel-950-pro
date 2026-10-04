/**
 * @brief fun_08025c88
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025c88, Ghidra name FUN_08025c88, 166 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08025c88(float *param_1,undefined8 *param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_20;
  
  uVar3 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar8 = (undefined4)*param_2;
  FUN_080268f0(uVar8,uVar3,&local_20);
  local_20 = local_20 + 0x7e;
  cVar5 = local_20 == 0;
  uVar9 = (undefined4)DAT_08025d30;
  uVar4 = (undefined4)((ulonglong)DAT_08025d30 >> 0x20);
  if (((int)local_20 < 1) && (FUN_08028798(uVar8,uVar3,uVar9,uVar4), cVar5 == '\0')) {
    uVar1 = FUN_08029ab8(0x808,0);
    fVar2 = (float)FUN_08027ed8(uVar8,uVar3);
    FUN_08029ab8(0x808,uVar1 & 0x808);
    if (fVar2 == 0.0) {
      FUN_080011c4(2);
    }
  }
  else {
    uVar7 = 0xfe < local_20;
    if ((int)local_20 < 0xff) {
      fVar2 = (float)FUN_08027ed8(uVar8,uVar3);
    }
    else {
      uVar6 = 0;
      FUN_080011c4();
      FUN_08028f3c(uVar8,uVar3,uVar9,uVar4);
      fVar2 = DAT_08025d38;
      if (!(bool)uVar7 || (bool)uVar6) {
        fVar2 = DAT_08025d3c;
      }
    }
  }
  *param_1 = fVar2;
  return;
}

