/**
 * @brief fun_080040c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080040c0, Ghidra name FUN_080040c0, 1332 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080040c0(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined1 local_44;
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = DAT_080044e4;
  iVar8 = DAT_080044e0;
  local_58 = 0;
  local_54 = 0;
  local_30 = 0x1c;
  local_28 = 10;
  local_2c = 0x3c;
  if (*(char *)(DAT_080044dc + 3) == '\0') {
    cVar4 = FUN_08006278(*(undefined1 *)(DAT_080044e0 + 0x1e),*(undefined1 *)(DAT_080044e4 + 6));
    uVar5 = (uint)*(byte *)(iVar8 + 0x1f);
    if ((*(char *)(iVar2 + 0x4d) == '\x01') && (uVar5 = uVar5 + 0x1e & 0xff, 0x3b < uVar5)) {
      uVar5 = uVar5 % 0x3c;
      cVar4 = cVar4 + '\x01';
    }
    bVar3 = FUN_08000850(local_50,s_T__02d__02d__02d_080044e8,cVar4,uVar5,
                         *(undefined1 *)(iVar8 + 0x20));
    local_50[bVar3] = 0;
    FUN_080154a4(0,0xf0,0xb4,0xcc,1,0);
    FUN_08014d88(0xb4,local_28,local_50,0x18,0,0xffff);
    FUN_08015500();
  }
  else {
    if (*(char *)(DAT_080044dc + 3) == '\x01') {
      FUN_080152cc(0x3a,0xec,0);
    }
    FUN_080154a4(0,0xf0,local_30,0x3a,1,0x1ad);
    FUN_08014d88(0x1e,10,&DAT_08004500,0x18,0x1ad,0xffff);
    local_58 = *(undefined4 *)(iVar2 + 0x11);
    local_54 = CONCAT22(local_54._2_2_,*(undefined2 *)(iVar2 + 0x15));
    bVar3 = FUN_08000850(local_50,&DAT_08004504,&local_58);
    local_50[bVar3] = 0;
    FUN_08014d88(0x1e,0x7c,local_50,0x18,0x1ad,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,local_2c,0x54,1,0);
    FUN_08014d88(local_2c,0x3c,&DAT_08004508,0x18,0,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0x98,0xb0,1,0);
    FUN_08014d88(0x98,0x3c,&DAT_0800450c,0x18,0,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0x58,0x97,1,0);
    FUN_08014d88(0x6c,10,&DAT_08004510,0x18,0,0xffff);
    FUN_08014d88(0x6c,0x6b,&DAT_08004514,0x18,0,0xffff);
    uVar5 = *(ushort *)(iVar8 + 0x15) / 100;
    if ((uVar5 < 0x153) && (0x17 < uVar5)) {
      if (uVar5 - 0x18 < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[1],0,0xe0a3);
      }
      else if (uVar5 - 0x45 < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[2],0,0xe0a3);
      }
      else if (uVar5 - 0x72 < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[3],0,0xe0a3);
      }
      else if (uVar5 - 0x9f < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[4],0,0xe0a3);
      }
      else if (uVar5 - 0xcc < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[5],0,0xe0a3);
      }
      else if (uVar5 - 0xf9 < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[6],0,0xe0a3);
      }
      else if (uVar5 - 0x126 < 0x2d) {
        FUN_08027a94(0x70,0x3c,0xb,0xb,DAT_08004518[7],0,0xe0a3);
      }
    }
    else {
      FUN_08027a94(0x70,0x3c,0xb,0xb,*DAT_08004518,0,0xe0a3);
    }
    FUN_08012afe(0x42,0x76,0x1e,3,0xffff);
    FUN_08015500();
    local_28 = 10;
    local_2c = 0xb4;
    FUN_080154a4(0,0xf0,0xb4,0xf4,1,0);
    cVar4 = FUN_08006278(*(undefined1 *)(iVar8 + 0x1e),*(undefined1 *)(iVar2 + 6));
    uVar5 = (uint)*(byte *)(iVar8 + 0x1f);
    if ((*(char *)(iVar2 + 0x4d) == '\x01') && (uVar5 = uVar5 + 0x1e & 0xff, 0x3b < uVar5)) {
      uVar5 = uVar5 % 0x3c;
      cVar4 = cVar4 + '\x01';
    }
    bVar3 = FUN_08000850(local_50,s_T__02d__02d__02d_080044e8,cVar4,uVar5,
                         *(undefined1 *)(iVar8 + 0x20));
    local_50[bVar3] = 0;
    FUN_08014d88(local_2c,local_28,local_50,0x18,0,0xffff);
    if (*(char *)(iVar8 + 2) == '\x01') {
      if (*(char *)(iVar2 + 5) == '\x01') {
        uVar9 = FUN_080289b0(*(int *)(iVar8 + 0x11) / 10);
        uVar9 = FUN_08028a98((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)DAT_08004658,
                             (int)((ulonglong)DAT_08004658 >> 0x20));
        bVar3 = FUN_08000850(local_50,s_H___2fft_08004660,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20)
                            );
      }
      else {
        iVar6 = *(int *)(iVar8 + 0x11);
        uVar5 = iVar6 % 10 & 0xff;
        if (iVar6 < 0) {
          uVar5 = -uVar5 & 0xff;
        }
        bVar3 = FUN_08000850(local_50,s_H__d__dm_0800464c,iVar6 / 10,uVar5);
      }
      uVar5 = (uint)bVar3;
      if (uVar5 < 0xc) {
        FUN_08000bca(local_50 + uVar5,0xc - uVar5,0x20);
      }
      local_44 = 0;
    }
    else {
      bVar3 = FUN_08000850(local_50,s_H_______0800451c);
      local_50[bVar3] = 0;
    }
    FUN_08014d88(0xcf,local_28,local_50,0x18,0,0xffff);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0xea,0x11e,0,0);
    local_50[0] = *(undefined1 *)(iVar8 + 3);
    cVar4 = *(char *)(iVar8 + 4);
    cVar1 = *(char *)(iVar8 + 5);
    iVar6 = FUN_08003cb4(*(undefined4 *)(iVar8 + 6));
    if ((cVar4 == '\0' && cVar1 == '\0') && iVar6 == 0) {
      bVar3 = FUN_08000850(local_50,&DAT_0800466c);
      local_50[bVar3] = 0;
    }
    else if (*(char *)(iVar2 + 2) == '\x01') {
      uVar7 = FUN_080289f8();
      FUN_0800623c(uVar7,cVar1);
      bVar3 = FUN_08000850(local_50 + 1,&DAT_0800467c,cVar4);
      local_50[bVar3 + 1] = 0;
    }
    else if (*(char *)(iVar2 + 2) == '\x02') {
      bVar3 = FUN_08000850(local_50 + 1,&DAT_08004688,cVar4,cVar1,iVar6);
      local_50[bVar3 + 1] = 0;
    }
    else {
      uVar7 = FUN_080289f8();
      uVar7 = FUN_080061dc(uVar7,cVar4,cVar1);
      bVar3 = FUN_08000850(local_50 + 1,&DAT_08004524,uVar7,extraout_s1);
      local_50[bVar3 + 1] = 0;
    }
    local_40 = 0;
    FUN_08014d88(0xea,local_28,local_50,0x18,0,0xffff);
    local_50[0] = *(undefined1 *)(iVar8 + 10);
    cVar4 = *(char *)(iVar8 + 0xb);
    cVar1 = *(char *)(iVar8 + 0xc);
    iVar8 = FUN_08003cb4(*(undefined4 *)(iVar8 + 0xd));
    if ((cVar4 == '\0' && cVar1 == '\0') && iVar8 == 0) {
      bVar3 = FUN_08000850(local_50,&DAT_0800469c);
      local_50[bVar3] = 0;
    }
    else if (*(char *)(iVar2 + 2) == '\x01') {
      uVar7 = FUN_080289f8();
      FUN_0800623c(uVar7,cVar1);
      bVar3 = FUN_08000850(local_50 + 1,&DAT_0800467c,cVar4);
      local_50[bVar3 + 1] = 0;
    }
    else if (*(char *)(iVar2 + 2) == '\x02') {
      bVar3 = FUN_08000850(local_50 + 1,&DAT_080046ac,cVar4,cVar1,iVar8);
      local_50[bVar3 + 1] = 0;
    }
    else {
      uVar7 = FUN_080289f8();
      uVar7 = FUN_080061dc(uVar7,cVar4,cVar1);
      bVar3 = FUN_08000850(local_50 + 1,&DAT_08004524,uVar7,extraout_s1_00);
      local_50[bVar3 + 1] = 0;
    }
    local_40 = 0;
    FUN_08014d88(0x105,local_28,local_50,0x18,0,0xffff);
    FUN_08015500();
    *(undefined1 *)(DAT_08004648 + 3) = 0;
  }
  return;
}

