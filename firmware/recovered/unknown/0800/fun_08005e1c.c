/**
 * @brief fun_08005e1c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08005e1c, Ghidra name FUN_08005e1c, 620 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08005e1c(float param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r6;
  uint uVar5;
  undefined1 unaff_r8;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar6;
  uint in_stack_00000010;
  undefined1 uStack00000014;
  undefined1 in_stack_00000018;
  
  if (param_1 == 0.0) {
    FUN_08000850(&stack0x00000130,s__________08006030);
  }
  else if (*(char *)(unaff_r6 + 4) == '\x01') {
    uVar6 = FUN_080297fc();
    FUN_08000850(&stack0x00000130,s___3fnmi_0800609c,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
  else if (*(char *)(unaff_r6 + 4) == '\x02') {
    uVar6 = FUN_080297fc();
    FUN_08000850(&stack0x00000130,s___3fmi_080060a8,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
  else if ((int)param_1 < DAT_0800608c) {
    uVar6 = FUN_080297fc();
    FUN_08000850(&stack0x00000130,s___0fm_08006090,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
  else {
    uVar6 = FUN_080297fc();
    FUN_08000850(&stack0x00000130,s___3fkm_080060b4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
  FUN_08014d88();
  FUN_08015500();
  FUN_080154a4(0,0xf0,0xb4,0xf4);
  FUN_08014d88(0xb4);
  uVar4 = (_uStack00000014 >> 0x10) / 100 & 0xff;
  uVar5 = (_uStack00000014 >> 0x10) % 100;
  iVar2 = FUN_08006790(in_stack_00000018);
  if ((uVar4 == 0 && uVar5 == 0) && iVar2 == 0) {
    uVar1 = FUN_08000850(&stack0x00000130,s__________08006030);
    uVar4 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x01') {
    uVar3 = FUN_080289f8();
    FUN_0800623c(uVar3,uVar5);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006164,uVar4);
    uVar4 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x02') {
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006170,uVar4,uVar5);
    uVar4 = (uint)uVar1;
  }
  else {
    uVar3 = FUN_080289f8();
    uVar3 = FUN_080061dc(uVar3,uVar4,uVar5);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_080060c4,uVar3,extraout_s1);
    uVar4 = (uint)uVar1;
  }
  (&stack0x00000130)[uVar4] = unaff_r8;
  FUN_08014d88(0xb4,0x58,&stack0x00000130,0x18);
  FUN_08014d88(0xd2);
  uVar4 = (in_stack_00000010 >> 0x10) / 100 & 0xff;
  uVar5 = (in_stack_00000010 >> 0x10) % 100;
  iVar2 = FUN_08006790(uStack00000014);
  if ((uVar4 == 0 && uVar5 == 0) && iVar2 == 0) {
    uVar1 = FUN_08000850(&stack0x00000130,s__________08006030);
    uVar4 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x01') {
    uVar3 = FUN_080289f8();
    FUN_0800623c(uVar3,uVar5);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006164,uVar4);
    uVar4 = (uint)uVar1;
  }
  else if (*(char *)(unaff_r6 + 2) == '\x02') {
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_08006170,uVar4,uVar5);
    uVar4 = (uint)uVar1;
  }
  else {
    uVar3 = FUN_080289f8();
    uVar3 = FUN_080061dc(uVar3,uVar4,uVar5);
    uVar1 = FUN_08000850(&stack0x00000130,&DAT_080060c4,uVar3,extraout_s1_00);
    uVar4 = (uint)uVar1;
  }
  (&stack0x00000130)[uVar4] = unaff_r8;
  FUN_08014d88(0xd2,0x58,&stack0x00000130,0x18);
  FUN_08015500();
  return;
}

