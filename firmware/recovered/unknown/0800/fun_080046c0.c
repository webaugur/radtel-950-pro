/**
 * @brief fun_080046c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080046c0, Ghidra name FUN_080046c0, 5126 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Removing unreachable block (ram,0x08005326) */
/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x080055b6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_080046c0(int param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  undefined8 in_d0;
  undefined4 uVar20;
  undefined4 in_s3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 uVar21;
  undefined1 local_208 [2];
  undefined1 uStack_206;
  char cStack_205;
  byte local_204;
  undefined1 local_200;
  char local_1ff;
  ushort local_1fe;
  undefined1 local_1fc;
  undefined1 local_1fb;
  ushort local_1fa;
  undefined8 local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined2 local_1e8;
  ushort local_1e6;
  undefined1 local_1e4;
  char local_1e3;
  ushort local_1e2;
  undefined1 local_1e0;
  short local_1df;
  short local_1dd;
  short local_1db;
  undefined1 auStack_1d4 [14];
  undefined1 auStack_1c6 [6];
  char local_1c0 [45];
  undefined1 auStack_193 [5];
  undefined4 local_18e;
  undefined2 local_18a;
  char local_187 [9];
  char local_17e;
  undefined1 auStack_17a [7];
  undefined1 auStack_173 [4];
  char local_16f [3];
  undefined1 auStack_16c [6];
  char local_166;
  undefined1 auStack_165 [3];
  undefined1 auStack_162 [7];
  undefined1 auStack_15b [7];
  undefined1 auStack_154 [7];
  undefined1 auStack_14d [73];
  uint local_104;
  undefined2 local_100;
  undefined1 local_fe;
  byte local_ec [20];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d4;
  byte local_c8 [5];
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  if (param_1 == 1) {
    FUN_08003d28();
    return;
  }
  uStack_38 = (undefined4)unaff_d8;
  uStack_34 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
  uStack_30 = (undefined4)unaff_d9;
  uStack_2c = (undefined4)((ulonglong)unaff_d9 >> 0x20);
  uVar12 = uStack_2c;
  uVar20 = (undefined4)((ulonglong)in_d0 >> 0x20);
  fVar19 = (float)in_d0;
  if (param_1 == 2) {
    uStack_2c = (undefined4)unaff_d10;
    local_28 = (uint)((ulonglong)unaff_d10 >> 0x20);
    local_3c = (undefined1 *)uStack_38;
    uStack_38 = uStack_34;
    uStack_34 = uStack_30;
    uStack_30 = uVar12;
    FUN_08001016(auStack_1d4,0xe8);
    FUN_080152cc(0x3a,0xec,0);
    local_1f8 = 0x1ad00000001;
    FUN_080154a4(0,0xf0,0x1c,0x3a);
    iVar8 = _DAT_080056c8;
    local_1f8 = 0xffff000001ad;
    if (*(char *)(_DAT_080056c8 + 8) == '\x01') {
      pcVar16 = &DAT_080056e4;
    }
    else {
      pcVar16 = s_Real_Time_Beacon_080056cb + 1;
    }
    FUN_08014d88(0x1e,4,pcVar16,0x18);
    FUN_08015500();
    if (*(byte *)(DAT_080056e0 + 4) < 100) {
      FUN_0800f510(*(undefined1 *)((uint)*(byte *)(DAT_080056e0 + 4) + DAT_080056e0 + 0x3c7),
                   auStack_1d4,0xcd);
    }
    else {
      FUN_0800f510(*(undefined1 *)(DAT_080056e0 + 0x3c7),auStack_1d4,0xcd);
    }
    iVar10 = FUN_080062c4(auStack_1d4,&local_1e8);
    if (iVar10 == 0) {
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0xa8,0xc0);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        pcVar16 = &DAT_0800571c;
      }
      else {
        pcVar16 = s_No_Data_08005714;
      }
      FUN_08014d88(0xa8,0x50,pcVar16,0x18);
      FUN_08015500();
    }
    else if (param_2 == 1) {
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0x3c,0x7c);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        puVar14 = &DAT_08005734;
      }
      else {
        puVar14 = &DAT_08005724;
      }
      FUN_08014d88(0x3c,8,puVar14,0x18);
      if (local_1dd == 0) {
        FUN_08000850(local_c8,s_______0800573c);
      }
      else {
        FUN_08000850(local_c8,&DAT_0800572c);
      }
      local_be = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x3c,0x58,local_c8,0x18);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        puVar14 = &DAT_0800574c;
      }
      else {
        puVar14 = &DAT_08005744;
      }
      FUN_08014d88(0x5a,8,puVar14,0x18);
      iVar11 = DAT_08005748;
      iVar10 = DAT_08005708;
      if (*(char *)(DAT_08005708 + 1) == '\0') {
        FUN_08000850(local_c8,s_______0800573c);
      }
      else if (*(char *)(DAT_08005748 + 2) == '\x01') {
        FUN_08006184(*(undefined1 *)(DAT_08005748 + 4),*(undefined1 *)(DAT_08005748 + 5),
                     *(uint *)(DAT_08005748 + 6) / 100 & 0xff);
        fVar5 = fVar19;
        if (*(char *)(iVar11 + 3) == 'S') {
          fVar5 = (float)FUN_08027ec0(fVar19,uVar20);
        }
        FUN_08006184(*(undefined1 *)(iVar11 + 0xb),*(undefined1 *)(iVar11 + 0xc),
                     *(uint *)(iVar11 + 0xd) / 100 & 0xff);
        fVar6 = fVar19;
        if (*(char *)(iVar11 + 10) == 'W') {
          fVar6 = (float)FUN_08027ec0(fVar19,uVar20);
        }
        FUN_08006184(local_1e6 / 100 & 0xff,(uint)local_1e6 % 100,local_1e4);
        if (local_1e8._1_1_ == 'S') {
          in_d0 = FUN_08027ec0(fVar19,uVar20);
        }
        FUN_08006184(local_1e2 / 100 & 0xff,(uint)local_1e2 % 100,local_1e0);
        if (local_1e3 == 'W') {
          fVar19 = (float)FUN_08027ec0(fVar19,uVar20);
        }
        uVar12 = FUN_08012bcc(fVar5,uVar20,fVar6,in_s3,(int)in_d0,(int)((ulonglong)in_d0 >> 0x20),
                              fVar19);
        FUN_08000850(local_c8,&DAT_0800572c,uVar12);
      }
      else {
        FUN_08000850(local_c8,s_______0800573c);
      }
      local_be = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x5a,0x80,local_c8,0x18);
      FUN_08015500();
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0x78,0xb8);
      local_1f8._0_4_ = 0;
      local_1f8._4_4_ = 0xffff;
      if (*(char *)(iVar8 + 8) == '\x01') {
        pcVar16 = &DAT_08005760;
      }
      else {
        pcVar16 = s_TIME__08005758;
      }
      FUN_08014d88(0x78,8,pcVar16,0x18);
      if ((local_18e._1_1_ == '\0') && (local_18e._2_1_ == '\0')) {
        FUN_08000850(local_c8,s__________08005768);
      }
      else {
        local_1f0 = local_18e;
        uVar12 = local_1f0;
        local_1ec = CONCAT22(local_1ec._2_2_,local_18a);
        local_1f0._3_1_ = (undefined1)((uint)local_18e >> 0x18);
        uVar3 = local_1f0._3_1_;
        local_1f0 = uVar12;
        cVar4 = FUN_08006278(uVar3,*(undefined1 *)(iVar10 + 6));
        local_1f0 = CONCAT13(cVar4,(undefined3)local_1f0);
        if (*(char *)(iVar10 + 0x4d) == '\x01') {
          uVar7 = (local_1ec & 0xff) + 0x1e;
          uVar15 = uVar7 & 0xff;
          local_1ec = CONCAT31(local_1ec._1_3_,(char)uVar7);
          if (0x3b < uVar15) {
            local_1ec = CONCAT31(local_1ec._1_3_,(char)(uVar15 % 0x3c));
            local_1f0 = CONCAT13(cVar4 + '\x01',(undefined3)local_1f0);
          }
        }
        local_1f8 = CONCAT44(local_1f8._4_4_,local_1ec >> 8) & 0xffffffff000000ff;
        FUN_08000850(local_c8,s__02d__02d__02d_08005774,local_1f0._3_1_,local_1ec & 0xff);
      }
      local_be = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x78,0x58,local_c8,0x18);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        pcVar16 = &DAT_08005b84;
      }
      else {
        pcVar16 = s_DATE__08005784;
      }
      FUN_08014d88(0x96,8,pcVar16,0x18);
      if ((local_18e._1_1_ == '\0') && (local_18e._2_1_ == '\0')) {
        FUN_08000850(local_c8,s_______08005b98);
      }
      else {
        FUN_08000850(local_c8,s__02d__02d_08005b8c,local_1f0._1_1_,local_1f0._2_1_);
      }
      local_c3 = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x96,0x58,local_c8,0x18);
      FUN_08015500();
    }
    else if (param_2 == 2) {
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0x3c,0x54);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        pcVar16 = &DAT_08005bb0;
      }
      else {
        pcVar16 = s_PATH_INFO__08005ba0;
      }
      FUN_08014d88(0x3c,8,pcVar16,0x18);
      FUN_08015500();
      uVar7 = 0;
      do {
        FUN_08001064(local_c8,auStack_1c6 + uVar7 * 7,6);
        local_c2 = 0;
        uVar15 = FUN_08000ea6(local_c8);
        if (((uVar15 & 0xff) != 0) && (local_1c0[uVar7 * 7] != '\0')) {
          FUN_08000850(local_c8 + (uVar15 & 0xff),&DAT_08005bac);
        }
        local_1f8 = 1;
        uVar15 = uVar7 * 0x1e + 0x5a;
        FUN_080154a4(0,0xf0,uVar15 & 0xffff,uVar7 * 0x1e + 0x72 & 0xffff);
        local_1f8 = 0xffff00000000;
        FUN_08014d88(uVar15 & 0xffff,8,local_c8,0x18);
        FUN_08015500();
        uVar7 = uVar7 + 1 & 0xffff;
      } while (uVar7 < 6);
    }
    else if (param_2 == 3) {
      uVar7 = 0;
      local_40 = auStack_154;
      if (local_16f[0] == '!') {
        local_1f8 = 1;
        FUN_080154a4(0,0xf0,0x3c,0x54);
        FUN_08000850(local_c8,s___COMMENT_TEXT___08005bd0);
        local_1f8 = 0xaf1c00000000;
        FUN_08014d88(0x3c,0xe,local_c8,0x18);
        FUN_08015500();
        iVar8 = FUN_080070d4();
        if (iVar8 == 1) {
          uVar7 = FUN_08000850(local_c8,&DAT_080056fc,local_40);
          uVar7 = uVar7 & 0xff;
        }
        else {
          uVar7 = FUN_08000850(local_c8,&DAT_080056fc,auStack_15b);
          uVar7 = uVar7 & 0xff;
        }
      }
      else if ((local_16f[0] == '/') || (local_16f[0] == '@')) {
        local_1f8 = 1;
        FUN_080154a4(0,0xf0,0x3c,0x54);
        FUN_08000850(local_c8,s___COMMENT_TEXT___08005bd0);
        local_1f8 = 0xaf1c00000000;
        FUN_08014d88(0x3c,0xe,local_c8,0x18);
        FUN_08015500();
        iVar8 = FUN_080070d4(local_40);
        if (iVar8 == 1) {
          uVar7 = FUN_08000850(local_c8,&DAT_080056fc,auStack_14d);
          uVar7 = uVar7 & 0xff;
        }
        else {
          uVar7 = FUN_08000850(local_c8,&DAT_080056fc,local_40);
          uVar7 = uVar7 & 0xff;
        }
      }
      else if (local_16f[0] == '`') {
        local_1f8 = 1;
        FUN_080154a4(0,0xf0,0x3c,0x54);
        FUN_08000850(local_c8,s___STATUS_TEXT___08005bc0);
        local_1f8 = 0xaf1c00000000;
        FUN_08014d88(0x3c,0x14,local_c8,0x18);
        FUN_08015500();
        if ((local_166 != '\'') && (local_166 != '\x1d')) {
          uVar7 = FUN_08000850(local_c8,&DAT_080056fc,auStack_162);
          uVar7 = uVar7 & 0xff;
        }
      }
      bVar18 = uVar7 == 0;
      do {
        if (bVar18) {
          return;
        }
        local_c8[uVar7] = 0;
        uVar17 = 0;
        uVar15 = 0;
        local_48 = 0x5f;
        for (uVar9 = 0; uVar9 < uVar7; uVar9 = uVar9 + 1 & 0xffff) {
          bVar2 = local_c8[uVar9];
          if (bVar2 < 0xa1) {
            if (bVar2 - 0x20 < 0x5f) {
              local_ec[uVar15] = bVar2;
              uVar15 = uVar15 + 1 & 0xffff;
            }
            else {
              local_ec[uVar15] = 0x20;
              uVar15 = uVar15 + 1 & 0xffff;
            }
          }
          else if (uVar15 < 0xf) {
            pbVar1 = local_c8 + uVar9;
            uVar9 = uVar9 + 1 & 0xffff;
            uVar13 = uVar15 + 1 & 0xffff;
            local_ec[uVar15] = *pbVar1;
            local_ec[uVar13] = local_c8[uVar9];
            uVar15 = uVar13 + 1 & 0xffff;
          }
          else {
            local_ec[uVar15] = 0x20;
            uVar9 = uVar9 - 1 & 0xffff;
            uVar15 = uVar15 + 1 & 0xffff;
          }
          if (0xf < uVar15) {
            local_ec[uVar15] = 0;
            local_44 = local_48 + uVar17 * 0x1c;
            local_1f8 = 1;
            FUN_080154a4(0,0xf0,local_44 & 0xffff,local_44 + 0x18 & 0xffff);
            local_1f8 = 0xffff00000000;
            FUN_08014d88(local_44 & 0xffff,0x10,local_ec,0x18);
            FUN_08015500();
            uVar17 = uVar17 + 1 & 0xff;
            uVar15 = 0;
          }
        }
        bVar18 = true;
      } while (uVar15 == 0);
      local_ec[uVar15] = 0;
      uVar7 = local_48 + uVar17 * 0x1c;
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,uVar7 & 0xffff,uVar7 + 0x18 & 0xffff);
      local_1f8 = 0xffff00000000;
      FUN_08014d88(uVar7 & 0xffff,0x10,local_ec,0x18);
      FUN_08015500();
    }
    else if (param_2 == 4) {
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0x3c,0x54);
      FUN_08000850(local_c8,s___RAW_DATA___08005be4);
      local_1f8 = 0xaf1c00000000;
      FUN_08014d88(0x3c,0x27,local_c8,0x18);
      FUN_08015500();
      uVar7 = FUN_08000850(local_c8,&DAT_080056fc,local_16f);
      local_4c = (uVar7 & 0xff) >> 4;
      local_50 = uVar7 & 0xf;
      for (uVar7 = 0; uVar7 < local_4c; uVar7 = uVar7 + 1 & 0xffff) {
        uVar15 = 0;
        do {
          local_ec[uVar15] = local_c8[uVar15 + uVar7 * 0x10];
          uVar15 = uVar15 + 1 & 0xffff;
        } while (uVar15 < 0x10);
        local_ec[uVar15] = 0;
        local_1f8 = 1;
        uVar15 = uVar7 * 0x1c + 0x5f;
        FUN_080154a4(0,0xf0,uVar15 & 0xffff,uVar7 * 0x1c + 0x77 & 0xffff);
        local_1f8 = 0xffff00000000;
        FUN_08014d88(uVar15 & 0xffff,0x10,local_ec,0x18);
        FUN_08015500();
      }
      if (local_50 != 0) {
        for (uVar15 = 0; uVar15 < local_50; uVar15 = uVar15 + 1 & 0xffff) {
          local_ec[uVar15] = local_c8[uVar15 + uVar7 * 0x10];
        }
        local_ec[uVar15] = 0;
        local_1f8 = 1;
        uVar15 = uVar7 * 0x1c + 0x5f;
        FUN_080154a4(0,0xf0,uVar15 & 0xffff,uVar7 * 0x1c + 0x77 & 0xffff);
        local_1f8 = 0xffff00000000;
        FUN_08014d88(uVar15 & 0xffff,0x10,local_ec,0x18);
        FUN_08015500();
      }
    }
    else {
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0x3c,0x7c);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        pcVar16 = &DAT_08006000;
      }
      else {
        pcVar16 = s_CALL__080056f3 + 1;
      }
      FUN_08014d88(0x3c,8,pcVar16,0x18);
      FUN_08000850(local_c8,&DAT_080056fc,auStack_1d4);
      local_c2 = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x3c,0x58,local_c8,0x18);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        puVar14 = &DAT_08006008;
      }
      else {
        puVar14 = &DAT_08005700;
      }
      FUN_08014d88(0x5a,8,puVar14,0x18);
      if (local_1db == 0) {
        FUN_08000850(local_c8,s__________08006030);
      }
      else if (*(char *)(DAT_08005708 + 3) == '\x01') {
        uVar21 = FUN_080289f8();
        uVar21 = FUN_0802841c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)DAT_08006010,
                              (int)((ulonglong)DAT_08006010 >> 0x20));
        FUN_08000850(local_c8,s___1fKn_08006018,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else if (*(char *)(DAT_08005708 + 3) == '\x02') {
        uVar21 = FUN_080289f8();
        uVar21 = FUN_0802841c((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)DAT_08006020,
                              (int)((ulonglong)DAT_08006020 >> 0x20));
        FUN_08000850(local_c8,s___1fMPH_08006028,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else {
        FUN_08000850(local_c8,s__dKm_h_0800570c,local_1db);
      }
      local_c0 = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x5a,0x58,local_c8,0x18);
      FUN_08015500();
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0x78,0xb8);
      local_1f8 = 0xffff00000000;
      if (*(char *)(iVar8 + 8) == '\x01') {
        puVar14 = &DAT_0800604c;
      }
      else {
        puVar14 = &DAT_0800603c;
      }
      FUN_08014d88(0x78,8,puVar14,0x18);
      if (local_1df == 0) {
        FUN_08000850(local_c8,s__________08006064);
      }
      else if (*(char *)(DAT_08006044 + 5) == '\x01') {
        uVar21 = FUN_080289b0();
        uVar21 = FUN_08028a98((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)DAT_08006054,
                              (int)((ulonglong)DAT_08006054 >> 0x20));
        FUN_08000850(local_c8,s___1fft_0800605c,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else {
        FUN_08000850(local_c8,&DAT_08006048,(int)local_1df);
      }
      local_bf = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x78,0x58,local_c8,0x18);
      local_1f8 = 0xffff00000000;
      if (*(char *)(DAT_08006070 + 8) == '\x01') {
        puVar14 = &DAT_08006084;
      }
      else {
        puVar14 = &DAT_08006074;
      }
      FUN_08014d88(0x96,8,puVar14,0x18);
      iVar10 = DAT_08006080;
      iVar8 = DAT_08006044;
      if (*(char *)(DAT_08006044 + 1) != '\0') {
        if (*(char *)(DAT_08006080 + 2) != '\x01') {
          FUN_08005e1c();
          return;
        }
        FUN_08006184(*(undefined1 *)(DAT_08006080 + 4),*(undefined1 *)(DAT_08006080 + 5),
                     *(uint *)(DAT_08006080 + 6) / 100 & 0xff);
        FUN_08027ed8(fVar19,uVar20);
        FUN_08006184(*(undefined1 *)(iVar10 + 0xb),*(undefined1 *)(iVar10 + 0xc),
                     *(uint *)(iVar10 + 0xd) / 100 & 0xff);
        FUN_08027ed8(fVar19,uVar20);
        FUN_08005db0((uint)local_1e6,local_1e6 / 100);
        return;
      }
      if (DAT_0800607c == 0.0) {
        FUN_08000850(local_c8,s__________08006030);
      }
      else if (*(char *)(DAT_08006044 + 4) == '\x01') {
        uVar21 = FUN_080297fc(DAT_0800607c / DAT_08006098);
        FUN_08000850(local_c8,s___3fnmi_0800609c,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else if (*(char *)(DAT_08006044 + 4) == '\x02') {
        uVar21 = FUN_080297fc(DAT_0800607c / DAT_080060a4);
        FUN_08000850(local_c8,s___3fmi_080060a8,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else if ((int)DAT_0800607c < DAT_0800608c) {
        uVar21 = FUN_080297fc(DAT_0800607c);
        FUN_08000850(local_c8,s___0fm_08006090,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else {
        uVar21 = FUN_080297fc(DAT_0800607c / DAT_080060b0);
        FUN_08000850(local_c8,s___3fkm_080060b4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      local_be = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0x96,0x58,local_c8,0x18);
      FUN_08015500();
      local_1f8 = 1;
      FUN_080154a4(0,0xf0,0xb4,0xf4);
      iVar10 = DAT_08006070;
      local_1f8._0_4_ = 0;
      local_1f8._4_4_ = 0xffff;
      if (*(char *)(DAT_08006070 + 8) == '\x01') {
        pcVar16 = &DAT_0800615c;
      }
      else {
        pcVar16 = s_LONG__080060bc;
      }
      FUN_08014d88(0xb4,8,pcVar16,0x18);
      uVar7 = local_1e2 / 100 & 0xff;
      uVar15 = (uint)local_1e2 % 100;
      iVar11 = FUN_08006790(local_1e0);
      if ((uVar7 == 0 && uVar15 == 0) && iVar11 == 0) {
        uVar7 = FUN_08000850(local_c8,s__________08006030);
        uVar7 = uVar7 & 0xffff;
      }
      else {
        cVar4 = *(char *)(iVar8 + 2);
        if (cVar4 == '\x01') {
          uVar12 = FUN_080289f8();
          FUN_0800623c(uVar12,uVar15);
          uVar7 = FUN_08000850(local_c8,&DAT_08006164,uVar7);
          uVar7 = uVar7 & 0xffff;
        }
        else if (cVar4 == '\x02') {
          local_1f8 = CONCAT44(local_1f8._4_4_,iVar11);
          uVar7 = FUN_08000850(local_c8,&DAT_08006170,uVar7,uVar15);
          uVar7 = uVar7 & 0xffff;
        }
        else {
          uVar12 = FUN_080289f8();
          FUN_080061dc(uVar12,uVar7,uVar15);
          uVar7 = FUN_08000850(local_c8,&DAT_080060c4,fVar19,uVar20);
          uVar7 = uVar7 & 0xffff;
        }
      }
      local_c8[uVar7] = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0xb4,0x58,local_c8,0x18);
      local_1f8._0_4_ = 0;
      local_1f8._4_4_ = 0xffff;
      if (*(char *)(iVar10 + 8) == '\x01') {
        puVar14 = &DAT_0800617c;
      }
      else {
        puVar14 = &DAT_080060cc;
      }
      FUN_08014d88(0xd2,8,puVar14,0x18);
      uVar7 = local_1e6 / 100 & 0xff;
      uVar15 = (uint)local_1e6 % 100;
      iVar10 = FUN_08006790(local_1e4);
      if ((uVar7 == 0 && uVar15 == 0) && iVar10 == 0) {
        uVar7 = FUN_08000850(local_c8,s__________08006030);
        uVar7 = uVar7 & 0xffff;
      }
      else {
        cVar4 = *(char *)(iVar8 + 2);
        if (cVar4 == '\x01') {
          uVar12 = FUN_080289f8();
          FUN_0800623c(uVar12,uVar15);
          uVar7 = FUN_08000850(local_c8,&DAT_08006164,uVar7);
          uVar7 = uVar7 & 0xffff;
        }
        else if (cVar4 == '\x02') {
          local_1f8 = CONCAT44(local_1f8._4_4_,iVar10);
          uVar7 = FUN_08000850(local_c8,&DAT_08006170,uVar7,uVar15);
          uVar7 = uVar7 & 0xffff;
        }
        else {
          uVar12 = FUN_080289f8();
          FUN_080061dc(uVar12,uVar7,uVar15);
          uVar7 = FUN_08000850(local_c8,&DAT_080060c4,fVar19,uVar20);
          uVar7 = uVar7 & 0xffff;
        }
      }
      local_c8[uVar7] = 0;
      local_1f8 = 0xffff00000000;
      FUN_08014d88(0xd2,0x58,local_c8,0x18);
      FUN_08015500();
    }
    return;
  }
  if (param_1 == 3) {
    local_28 = param_2;
    FUN_08001016(&local_1ec,0xe8);
    FUN_080152cc(0x3a,0xec,0);
    FUN_08000ee4(&local_1ec,DAT_08004b04,0xe5);
    FUN_08000f6e(&local_200,DAT_08004b04 + 0xe5,0x14);
    FUN_080154a4(0,0xf0,0x1c,0x3a);
    FUN_08000850(local_ec + 0xc,&DAT_08004b08,local_200);
    local_ec[0xe] = 0;
    FUN_08014d88(0x1f,0xc,local_ec + 0xc,0x18);
    local_104 = local_1ec;
    local_100 = local_1e8;
    local_fe = 0;
    if ((char)local_1e6 == '\0') {
      FUN_08000850(local_ec + 0xc,&DAT_08004b18,&local_104);
    }
    else {
      FUN_08000850(local_ec + 0xc,s__s__d_08004b0c,&local_104);
    }
    local_d7 = 0;
    FUN_08014d88(0x1f,0x24,local_ec + 0xc,0x18);
    FUN_08015500();
    if (local_28 % 3 == 1) {
      uVar7 = 0;
      local_3c = auStack_16c;
      if (local_187[0] == '!') {
        FUN_080154a4(0,0xf0,0x44,0x5c);
        FUN_08000850(local_ec + 0xc,s___COMMENT_TEXT___0800506c);
        FUN_08014d88(0x44,0xe,local_ec + 0xc,0x18);
        FUN_08015500();
        iVar8 = FUN_080070d4();
        if (iVar8 == 1) {
          uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08004b18,local_3c);
          uVar7 = uVar7 & 0xff;
        }
        else {
          uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08004b18,auStack_173);
          uVar7 = uVar7 & 0xff;
        }
      }
      else if ((local_187[0] == '/') || (local_187[0] == '@')) {
        FUN_080154a4(0,0xf0,0x44,0x5c);
        FUN_08000850(local_ec + 0xc,s___COMMENT_TEXT___0800506c);
        FUN_08014d88(0x44,0xe,local_ec + 0xc,0x18);
        FUN_08015500();
        iVar8 = FUN_080070d4(local_3c);
        if (iVar8 == 1) {
          uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08004b18,auStack_165);
          uVar7 = uVar7 & 0xff;
        }
        else {
          uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08004b18,local_3c);
          uVar7 = uVar7 & 0xff;
        }
      }
      else if (local_187[0] == '`') {
        FUN_080154a4(0,0xf0,0x44,0x5c);
        FUN_08000850(local_ec + 0xc,s___STATUS_TEXT___0800505c);
        FUN_08014d88(0x44,0x14,local_ec + 0xc,0x18);
        FUN_08015500();
        if ((local_17e != '\'') && (local_17e != '\x1d')) {
          uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08004b18,auStack_17a);
          uVar7 = uVar7 & 0xff;
        }
      }
      if (uVar7 != 0) {
        local_ec[uVar7 + 0xc] = 0;
        local_44 = uVar7 >> 4;
        local_48 = uVar7 & 0xf;
        for (uVar7 = 0; uVar7 < local_44; uVar7 = uVar7 + 1 & 0xffff) {
          uVar15 = 0;
          do {
            *(byte *)((int)&local_104 + uVar15) = local_ec[uVar15 + uVar7 * 0x10 + 0xc];
            uVar15 = uVar15 + 1 & 0xffff;
          } while (uVar15 < 0x10);
          *(undefined1 *)((int)&local_104 + uVar15) = 0;
          uVar15 = uVar7 * 0x1c + 0x67;
          FUN_080154a4(0,0xf0,uVar15 & 0xffff,uVar7 * 0x1c + 0x7f & 0xffff);
          FUN_08014d88(uVar15 & 0xffff,0xe,&local_104,0x18);
          FUN_08015500();
        }
        if (local_48 != 0) {
          for (uVar15 = 0; uVar15 < local_48; uVar15 = uVar15 + 1 & 0xffff) {
            *(byte *)((int)&local_104 + uVar15) = local_ec[uVar15 + uVar7 * 0x10 + 0xc];
          }
          *(undefined1 *)((int)&local_104 + uVar15) = 0;
          uVar15 = uVar7 * 0x1c + 0x67;
          FUN_080154a4(0,0xf0,uVar15 & 0xffff,uVar7 * 0x1c + 0x7f & 0xffff);
          FUN_08014d88(uVar15 & 0xffff,0xe,&local_104,0x18);
          FUN_08015500();
        }
      }
    }
    else if (local_28 % 3 == 2) {
      FUN_080154a4(0,0xf0,0x44,0x5c);
      FUN_08000850(local_ec + 0xc,s___RAW_DATA___08005294);
      FUN_08014d88(0x44,0x27,local_ec + 0xc,0x18);
      FUN_08015500();
      uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08004b18,local_187);
      local_44 = (uVar7 & 0xff) >> 4;
      for (uVar15 = 0; uVar15 < local_44; uVar15 = uVar15 + 1 & 0xffff) {
        uVar9 = 0;
        do {
          *(byte *)((int)&local_104 + uVar9) = local_ec[uVar9 + uVar15 * 0x10 + 0xc];
          uVar9 = uVar9 + 1 & 0xffff;
        } while (uVar9 < 0x10);
        *(undefined1 *)((int)&local_104 + uVar9) = 0;
        uVar9 = uVar15 * 0x1c + 0x67;
        FUN_080154a4(0,0xf0,uVar9 & 0xffff,uVar15 * 0x1c + 0x7f & 0xffff);
        FUN_08014d88(uVar9 & 0xffff,0xe,&local_104,0x18);
        FUN_08015500();
      }
      if ((uVar7 & 0xf) != 0) {
        for (uVar9 = 0; uVar9 < (uVar7 & 0xf); uVar9 = uVar9 + 1 & 0xffff) {
          *(byte *)((int)&local_104 + uVar9) = local_ec[uVar9 + uVar15 * 0x10 + 0xc];
        }
        *(undefined1 *)((int)&local_104 + uVar9) = 0;
        uVar7 = uVar15 * 0x1c + 0x67;
        FUN_080154a4(0,0xf0,uVar7 & 0xffff,uVar15 * 0x1c + 0x7f & 0xffff);
        FUN_08014d88(uVar7 & 0xffff,0xe,&local_104,0x18);
        FUN_08015500();
      }
    }
    else {
      local_40 = (undefined1 *)0x92;
      FUN_080154a4(0x92,0xf0,0x3c,0x96);
      FUN_08014d88(0x3c,local_40,auStack_193,0x10);
      uVar12 = local_1c0._26_4_;
      iVar8 = DAT_08004b14;
      if ((local_1c0[0x1b] == '\0') && (local_1c0[0x1c] == '\0')) {
        FUN_08000850(local_ec + 0xc,s_______08004b1c);
      }
      else {
        local_204 = local_1c0[0x1e];
        cStack_205 = SUB41(local_1c0._26_4_,3);
        cVar4 = FUN_08006278(cStack_205,*(undefined1 *)(DAT_08004b14 + 6));
        _local_208 = (undefined3)uVar12;
        _local_208 = CONCAT13(cVar4,_local_208);
        if ((*(char *)(iVar8 + 0x4d) == '\x01') &&
           (local_204 = local_1c0[0x1e] + 0x1e, 0x3b < local_204)) {
          local_204 = local_204 % 0x3c;
          _local_208 = CONCAT13(cVar4 + '\x01',_local_208);
        }
        FUN_08000850(local_ec + 0xc,s__02d__02d_08004b24,local_208[1],uStack_206);
      }
      local_d6 = 0;
      FUN_08014d88(0x5a,local_40,local_ec + 0xc,0x10);
      iVar10 = DAT_08004b34;
      if ((*(char *)(iVar8 + 1) != '\0') && (*(char *)(DAT_08004b34 + 2) == '\x01')) {
        FUN_08006184(*(undefined1 *)(DAT_08004b34 + 4),*(undefined1 *)(DAT_08004b34 + 5),
                     *(uint *)(DAT_08004b34 + 6) / 100 & 0xff);
        fVar5 = (float)FUN_08027ed8(fVar19,uVar20);
        if (*(char *)(iVar10 + 3) == 'S') {
          fVar5 = -fVar5;
        }
        FUN_08006184(*(undefined1 *)(iVar10 + 0xb),*(undefined1 *)(iVar10 + 0xc),
                     *(uint *)(iVar10 + 0xd) / 100 & 0xff);
        FUN_08027ed8(fVar19,uVar20);
        FUN_08006184(local_1fe / 100 & 0xff,(uint)local_1fe % 100,local_1fc);
        fVar6 = (float)FUN_08027ed8(fVar19,uVar20);
        if (local_1ff == 'S') {
          fVar6 = -fVar6;
        }
        FUN_08006184(local_1fa / 100 & 0xff,(uint)local_1fa % 100,(undefined1)local_1f8);
        FUN_08027ed8(fVar19,uVar20);
        FUN_0801306c(fVar5,uVar20,fVar6);
      }
      uVar7 = in_fpscr & 0xfffffff | (uint)(fVar19 == 0.0) << 0x1e;
      if ((byte)(uVar7 >> 0x1e) == 0) {
        if (*(char *)(iVar8 + 4) == '\x01') {
          uVar21 = FUN_080297fc(fVar19 / DAT_08004b44);
          FUN_08000850(local_ec + 0xc,s___1fnmi_08004b48,(int)uVar21,
                       (int)((ulonglong)uVar21 >> 0x20));
        }
        else if (*(char *)(iVar8 + 4) == '\x02') {
          uVar21 = FUN_080297fc(fVar19 / DAT_08004b50);
          FUN_08000850(local_ec + 0xc,s___1fmi_08004b54,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20)
                      );
        }
        else if ((int)fVar19 < DAT_08004b38) {
          uVar21 = FUN_080297fc(fVar19);
          FUN_08000850(local_ec + 0xc,s___0fm_08004b3c,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20))
          ;
        }
        else {
          uVar21 = FUN_080297fc(fVar19 / DAT_08004b5c);
          FUN_08000850(local_ec + 0xc,s___1fKm_08004b60,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20)
                      );
        }
      }
      else if (*(char *)(iVar8 + 4) == '\x01') {
        FUN_08000850(local_ec + 0xc,s__nmi_08004b70);
      }
      else if (*(char *)(iVar8 + 4) == '\x02') {
        FUN_08000850(local_ec + 0xc,s__mi_08004b78);
      }
      else {
        FUN_08000850(local_ec + 0xc,s__Km_08004b68);
      }
      local_d6 = 0;
      FUN_08014d88(0x78,local_40,local_ec + 0xc,0x10);
      FUN_08015500();
      FUN_080154a4(local_40,0xf0,0x96);
      if ((local_1c0[0x1b] == '\0') && (local_1c0[0x1c] == '\0')) {
        FUN_08000850(local_ec + 0xc,s_______08004ba0);
      }
      else {
        FUN_08000850(local_ec + 0xc,s__02d__02d_08004b80,cStack_205,local_204);
      }
      local_d6 = 0;
      FUN_08014d88(0x96,local_40,local_ec + 0xc,0x10);
      iVar10 = DAT_08004b8c;
      if (*(char *)(DAT_08004b8c + 8) == '\x01') {
        puVar14 = &DAT_08004ba8;
      }
      else {
        puVar14 = &DAT_08004b90;
      }
      FUN_08014d88(0xb4,local_40,puVar14,0x10);
      uVar15 = (uint)local_1f8._5_2_;
      if (uVar15 == 0) {
        if (*(char *)(iVar8 + 3) == '\x01') {
          FUN_08000850(local_ec + 0xc,s__Kn_08004fe4);
        }
        else if (*(char *)(iVar8 + 3) == '\x02') {
          FUN_08000850(local_ec + 0xc,s__MPH_08004fec);
        }
        else {
          FUN_08000850(local_ec + 0xc,s__Km_h_08004fc8);
        }
      }
      else if (*(char *)(iVar8 + 3) == '\x01') {
        fVar19 = (float)VectorUnsignedToFloat(uVar15,(byte)(uVar7 >> 0x16) & 3);
        uVar21 = FUN_080297fc(fVar19 / DAT_08004bb0);
        FUN_08000850(local_ec + 0xc,s___1fKn_08004bb4,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else if (*(char *)(iVar8 + 3) == '\x02') {
        fVar19 = (float)VectorUnsignedToFloat(uVar15,(byte)(uVar7 >> 0x16) & 3);
        uVar21 = FUN_080297fc(fVar19 / DAT_08004bbc);
        FUN_08000850(local_ec + 0xc,s___1fMPH_08004fc0,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20))
        ;
      }
      else {
        FUN_08000850(local_ec + 0xc,s__dKm_h_08004b98);
      }
      local_d8 = 0;
      FUN_08014d88(0xb4,0xba,local_ec + 0xc,0x10);
      if (*(char *)(iVar10 + 8) == '\x01') {
        puVar14 = &DAT_08004ff4;
      }
      else {
        puVar14 = &DAT_08004fd4;
      }
      FUN_08014d88(0xd2,local_40,puVar14,0x10);
      if (local_1f8._3_2_ == -1) {
        FUN_08000850(local_ec + 0xc,&DAT_08004ffc);
      }
      else {
        FUN_08000850(local_ec + 0xc,&DAT_08004fdc);
      }
      local_d6 = 0;
      FUN_08014d88(0xd2,0xba,local_ec + 0xc,0x10);
      FUN_08015500();
      FUN_080154a4(local_40,0xf0,0xf0,0x122);
      if (*(char *)(iVar10 + 8) == '\x01') {
        puVar14 = &DAT_08005048;
      }
      else {
        puVar14 = &DAT_08005004;
      }
      FUN_08014d88(0xf0,local_40,puVar14,0x10);
      if (*(char *)(iVar8 + 5) == '\x01') {
        fVar19 = (float)VectorSignedToFloat((int)local_1f8._1_2_,(byte)(uVar7 >> 0x16) & 3);
        uVar21 = FUN_080297fc(fVar19 * DAT_08005050);
        FUN_08000850(local_ec + 0xc,s___1fft_08005054,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      }
      else {
        FUN_08000850(local_ec + 0xc,&DAT_0800500c,(int)local_1f8._1_2_);
      }
      local_d8 = 0;
      FUN_08014d88(0xf0,0xba,local_ec + 0xc,0x10);
      FUN_08000850(local_ec + 0xc,&DAT_08004b18,local_1c0 + 0x22);
      local_d4 = 0;
      FUN_08014d88(0x10e,0x98,local_ec + 0xc,0x10);
      FUN_08015500();
      FUN_080154a4(0,0x8c,0x50,0x78);
      FUN_08012afe(0x46,0x78,0x14,2);
      FUN_08012afe(0x46,0x78,0x28,2);
      FUN_0801cbe8(0x46,0x50,0x78,0xffff);
      FUN_08015500();
      FUN_080154a4(0,0x8c,0x78,0xa0);
      FUN_08012afe(0x46,0x78,0x14,2);
      FUN_08012afe(0x46,0x78,0x28,2);
      FUN_0801caec(0x1e,0x78,0x6e,0xffff);
      FUN_0801cbe8(0x46,0x78,0xa0,0xffff);
      FUN_08014d88(0x78,0x10,&DAT_08005010);
      FUN_08014d88(0x78,0x74,&DAT_08005014,0x10);
      FUN_08015500();
      FUN_080154a4(0,0x8c,0x3a,0x4a);
      FUN_08014d88(0x3a,0x40,&DAT_08005018,0x10);
      FUN_08015500();
      FUN_080154a4(0,0x8c,0xa6,0xb6);
      FUN_08014d88(0xa6,0x40,&DAT_0800501c,0x10);
      FUN_08015500();
      FUN_080154a4(0,0x8c,0xbe,0xfe);
      uVar7 = (uint)local_1fe;
      FUN_08006790(local_1fc,uVar7 / 100,uVar7 % 100,uVar7 / 100 & 0xff);
      uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08005020,local_1ff);
      local_ec[(uVar7 & 0xff) + 0xc] = 0;
      FUN_08014d88(0xbe,0x1e,local_ec + 0xc,0x10);
      uVar7 = (uint)local_1fa;
      FUN_08006790((undefined1)local_1f8,uVar7 / 100,uVar7 % 100,uVar7 / 100 & 0xff);
      uVar7 = FUN_08000850(local_ec + 0xc,&DAT_08005034,local_1fb);
      local_ec[(uVar7 & 0xff) + 0xc] = 0;
      FUN_08014d88(0xd7,0x1e,local_ec + 0xc,0x10);
      FUN_08015500();
    }
    *(undefined1 *)(DAT_080052a4 + 3) = 0;
    return;
  }
  FUN_080040c0();
  return;
}

