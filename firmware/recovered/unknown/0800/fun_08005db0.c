/**
 * @brief fun_08005db0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08005db0, Ghidra name FUN_08005db0, 108 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08005db0(uint param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  uint unaff_r7;
  uint uVar4;
  undefined1 unaff_r8;
  undefined4 uVar5;
  float fVar6;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined8 uVar7;
  uint in_stack_00000010;
  undefined1 uStack00000014;
  ushort uStack00000016;
  undefined1 in_stack_00000018;
  
  uVar5 = FUN_08006184(param_1 / unaff_r7 & 0xff,param_1 - unaff_r7 * param_2,uStack00000014);
  FUN_08027ed8(uVar5,extraout_s1);
  uVar2 = (uint)uStack00000016;
  uVar5 = FUN_08006184(uVar2 / unaff_r7 & 0xff,uVar2 - unaff_r7 * (uVar2 / unaff_r7),
                       in_stack_00000018);
  FUN_08027ed8(uVar5,extraout_s1_00);
  fVar6 = (float)FUN_0801306c();
  if (fVar6 == 0.0) {
    FUN_08000850(&stack0x00000130,s__________08006030);
  }
  else if (*(char *)(unaff_r6 + 4) == '\x01') {
    uVar7 = FUN_080297fc(fVar6 / DAT_08006098);
    FUN_08000850(&stack0x00000130,s___3fnmi_0800609c,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  }
  else if (*(char *)(unaff_r6 + 4) == '\x02') {
    uVar7 = FUN_080297fc(fVar6 / DAT_080060a4);
    FUN_08000850(&stack0x00000130,s___3fmi_080060a8,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  }
  else if ((int)fVar6 < DAT_0800608c) {
    uVar7 = FUN_080297fc(fVar6);
    FUN_08000850(&stack0x00000130,s___0fm_08006090,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  }
  else {
    uVar7 = FUN_080297fc(fVar6 / DAT_080060b0);
    FUN_08000850(&stack0x00000130,s___3fkm_080060b4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  }
  FUN_08014d88();
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xb4,0xf4);
  FUN_08014d88(0xb4);
  uVar2 = uStack00000016 / 100 & 0xff;
  uVar4 = (uint)uStack00000016 % 100;
  iVar3 = FUN_08006790(in_stack_00000018);
  if ((uVar2 == 0 && uVar4 == 0) && iVar3 == 0) {
    uVar1 = FUN_08000850(&stack0x00000130,s__________08006030);
    uVar2 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x01') {
    uVar5 = FUN_080289f8();
    FUN_0800623c(uVar5,uVar4);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006164,uVar2);
    uVar2 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x02') {
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006170,uVar2,uVar4);
    uVar2 = (uint)uVar1;
  }
  else {
    uVar5 = FUN_080289f8();
    uVar5 = FUN_080061dc(uVar5,uVar2,uVar4);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_080060c4,uVar5,extraout_s1_01);
    uVar2 = (uint)uVar1;
  }
  (&stack0x00000130)[uVar2] = unaff_r8;
  FUN_08014d88(0xb4,0x58,&stack0x00000130,0x18);
  FUN_08014d88(0xd2);
  uVar2 = (in_stack_00000010 >> 0x10) / 100 & 0xff;
  uVar4 = (in_stack_00000010 >> 0x10) % 100;
  iVar3 = FUN_08006790(uStack00000014);
  if ((uVar2 == 0 && uVar4 == 0) && iVar3 == 0) {
    uVar1 = FUN_08000850(&stack0x00000130,s__________08006030);
    uVar2 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x01') {
    uVar5 = FUN_080289f8();
    FUN_0800623c(uVar5,uVar4);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006164,uVar2);
    uVar2 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x02') {
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006170,uVar2,uVar4);
    uVar2 = (uint)uVar1;
  }
  else {
    uVar5 = FUN_080289f8();
    uVar5 = FUN_080061dc(uVar5,uVar2,uVar4);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_080060c4,uVar5,extraout_s1_02);
    uVar2 = (uint)uVar1;
  }
  (&stack0x00000130)[uVar2] = unaff_r8;
  FUN_08014d88(0xd2,0x58,&stack0x00000130,0x18);
  FUN_08015500();
  return;
}

