/**
 * @brief fun_0800d088
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d088, Ghidra name FUN_0800d088, 216 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800d088(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)(DAT_0800d160 + 0x51) == '\0') {
    if ((param_2 == 0) && (param_1 != 0)) {
      if (param_1 == 1) {
        iVar5 = 0x7a;
      }
      else {
        iVar5 = 0xd3;
      }
    }
    else {
      iVar5 = 0x21;
    }
  }
  else if ((param_2 == 0) && (param_1 != 0)) {
    if (param_1 == 1) {
      iVar5 = 0x7b;
    }
    else {
      iVar5 = 0xd5;
    }
  }
  else {
    iVar5 = 0x21;
  }
  iVar6 = param_1;
  iVar7 = param_3;
  if (param_3 != 0) {
    param_2 = FUN_08013e30(param_1);
    iVar6 = 1;
    FUN_080154a4(0x3c,0x4b,iVar5,iVar5 + 0xb,1,param_2);
  }
  iVar2 = param_1 * 0xb;
  cVar1 = *(char *)(DAT_0800d164 + param_1 * 0x58 + 0x132);
  if (cVar1 == '\x01') {
    uVar3 = FUN_08013e30(param_1,iVar2,5,0xffff,iVar6,param_2,iVar7,param_4);
    uVar4 = DAT_0800d16c;
    uVar8 = extraout_r3_00;
    uVar9 = extraout_r2_00;
    FUN_08014120(iVar5,0x3e,0xb);
  }
  else if (cVar1 == '\x02') {
    uVar3 = FUN_08013e30(param_1,iVar2,5,0xffff,iVar6,param_2,iVar7,param_4);
    uVar4 = DAT_0800d170;
    uVar8 = extraout_r3_01;
    uVar9 = extraout_r2_01;
    FUN_08014120(iVar5,0x3e,0xb);
  }
  else {
    uVar3 = FUN_08013e30(param_1,iVar2,5,0xffff,iVar6,param_2,iVar7,param_4);
    uVar4 = DAT_0800d168;
    uVar8 = extraout_r3;
    uVar9 = extraout_r2;
    FUN_08014120(iVar5,0x3e,0xb);
  }
  if (param_3 != 0) {
    uVar4 = FUN_08015500(uVar4,uVar3,uVar8,uVar9);
    return uVar4;
  }
  return uVar4;
}

