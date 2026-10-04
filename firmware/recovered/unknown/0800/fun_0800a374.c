/**
 * @brief fun_0800a374
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a374, Ghidra name FUN_0800a374, 490 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0800a4f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0800a374(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char in_CY;
  char cVar14;
  undefined4 extraout_s1;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_4c;
  undefined2 local_48;
  
  uVar2 = DAT_0800a570;
  uVar20 = DAT_0800a568;
  uVar19 = DAT_0800a560;
  uVar7 = FUN_0800352c(param_3,4);
  uVar18 = FUN_080289f8(0x5a - uVar7 / DAT_0800a578);
  uVar8 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar16 = (undefined4)uVar19;
  FUN_08028a20((int)uVar18,uVar8,uVar16,uVar11);
  if (in_CY == '\0') {
    uVar18 = FUN_08027ec0((int)uVar18,uVar8);
    *(undefined1 *)(param_4 + 1) = 0x53;
  }
  else {
    *(undefined1 *)(param_4 + 1) = 0x4e;
  }
  uVar8 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar4 = FUN_080288d4((int)uVar18,uVar8);
  uVar19 = FUN_080289f8();
  uVar18 = FUN_08028fa0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar8);
  uVar12 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar17 = (undefined4)uVar20;
  uVar18 = FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar17,uVar12);
  uVar8 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar5 = FUN_080288d4((int)uVar18,uVar8);
  *(ushort *)(param_4 + 2) = (uVar4 & 0xff) * 100 + (uVar5 & 0xff);
  uVar19 = FUN_080289f8();
  uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar18 = FUN_08028fa0((int)uVar19,uVar10,(int)uVar18,uVar8);
  uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar15 = (undefined4)uVar2;
  FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar15,uVar13);
  uVar3 = FUN_080288d4();
  *(undefined1 *)(param_4 + 4) = uVar3;
  cVar14 = 0xfffffffb < param_3;
  FUN_0800352c(param_3 + 4,4);
  uVar18 = FUN_080289f8();
  uVar18 = FUN_0802841c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)_DAT_0800a57c,
                        (int)((ulonglong)_DAT_0800a57c >> 0x20));
  uVar18 = FUN_0802819c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)FUN_0800a582,
                        (int)((ulonglong)FUN_0800a582 >> 0x20));
  uVar8 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_08028a20((int)uVar18,uVar8,uVar16,uVar11);
  if (cVar14 == '\0') {
    uVar18 = FUN_08027ec0((int)uVar18,uVar8);
    *(undefined1 *)(param_4 + 5) = 0x57;
  }
  else {
    *(undefined1 *)(param_4 + 5) = 0x45;
  }
  uVar8 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar4 = FUN_080288d4((int)uVar18,uVar8);
  uVar20 = FUN_080289f8();
  uVar18 = FUN_08028fa0((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar18,uVar8);
  uVar18 = FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar17,uVar12);
  *(ushort *)(param_4 + 6) = (uVar5 & 0xff) + (uVar4 & 0xff) * 100;
  uVar18 = FUN_08028fa0((int)uVar19,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar15,uVar13);
  uVar3 = FUN_080288d4();
  *(undefined1 *)(param_4 + 8) = uVar3;
  bVar1 = *(byte *)(param_3 + 9);
  if (bVar1 != 0x20) {
    if (*(char *)(param_3 + 10) != ' ') {
      if (bVar1 != 0x7b) {
        *(ushort *)(param_4 + 0xb) = (bVar1 - 0x21) * 4;
        uVar8 = FUN_080289f8(*(byte *)(param_3 + 10) - 0x21);
        uVar8 = FUN_080246b8((int)uRam0800a58c,param_2,uVar8);
        uVar18 = FUN_080291f8(uVar8,extraout_s1,(int)DAT_0800a594,
                              (int)((ulonglong)DAT_0800a594 >> 0x20));
        FUN_08028a98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar15,uVar13);
        uVar6 = FUN_080288d4();
        *(undefined2 *)(param_4 + 0xd) = uVar6;
      }
    }
  }
  iVar9 = FUN_08000d54(param_3 + 0xc,&DAT_0800a59c);
  if (*(char *)(iVar9 + 1) == 'A') {
    if (*(char *)(iVar9 + 2) == '=') {
      local_4c = *(undefined4 *)(iVar9 + 3);
      local_48 = *(undefined2 *)(iVar9 + 7);
      uVar6 = FUN_08021adc(&local_4c,6);
      *(undefined2 *)(param_4 + 9) = uVar6;
    }
  }
  return 1;
}

