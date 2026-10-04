/**
 * @brief fun_0802f4a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802f4a4, Ghidra name FUN_0802f4a4, 230 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0802f4a4(uint param_1,uint param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int *extraout_r2;
  int *extraout_r2_00;
  int *piVar9;
  uint extraout_r3;
  uint uVar10;
  uint extraout_r3_00;
  uint unaff_r4;
  uint uVar11;
  uint unaff_r5;
  int iVar12;
  uint *unaff_r6;
  int *unaff_r7;
  uint *puVar13;
  uint in_r12;
  uint *puVar14;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar15;
  undefined1 auStack_104 [232];
  uint uStack_1c;
  uint uStack_18;
  int *piStack_14;
  
  puVar14 = &uStack_1c;
  uStack_1c = param_1;
  uVar7 = param_2;
LAB_0802f4a6:
  uStack_18 = param_2;
  piStack_14 = param_3;
  if ((param_1 == 0) && (unaff_r5 != 0)) {
    unaff_lr = 0x802f4ef;
    uVar15 = func_0x07dfac4c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    goto LAB_0802f4ee;
  }
  if (param_3 == (int *)0x0) goto LAB_0802f4ac;
  uVar10 = in_r12 >> 3;
  in_CY = uVar10 <= param_1;
  in_OV = SBORROW4(param_1,uVar10);
  iVar8 = param_1 - uVar10;
  uVar15 = CONCAT44(uVar7,iVar8);
  in_NG = iVar8 < 0;
  in_ZR = iVar8 == 0;
  goto LAB_0802f4f0;
LAB_0802f4ac:
  uVar15 = CONCAT44(uVar7,param_1);
  if (param_4 == 0) {
LAB_0802f4ae:
    uVar15 = CONCAT44(uVar7,param_1);
    if (unaff_r4 == 0) {
LAB_0802f4b0:
      uVar15 = CONCAT44(uVar7,param_1);
      puVar13 = unaff_r6;
      if (param_1 == 0) {
        do {
          param_1 = *puVar13;
          param_4 = puVar13[1];
          unaff_r4 = puVar13[2];
          unaff_r5 = puVar13[3];
          unaff_r6 = (uint *)puVar13[4];
          unaff_r7 = (int *)puVar13[5];
          if (in_NG == in_OV) {
            uVar7 = unaff_r6[0xa5];
            unaff_r6 = unaff_r6 + 0xa4;
            if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto LAB_0802f4ae;
          }
          if (in_OV == '\0') {
            if (param_1 != 0) goto code_r0x0802f470;
            if (uVar7 == 0) {
              _MasterStackPointer = 0;
              _Reset = 0;
              _NMI = 0;
              _HardFault = unaff_r4;
              _MemManage = unaff_r6;
              _BusFault = unaff_r7;
              coprocessor_function(1,0xd,6,in_cr15,in_cr10,in_cr2);
              if ((bool)in_ZR || in_NG != '\0') {
                software_interrupt(0xd4);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xb8,0x802f440);
              (*pcVar3)();
            }
          }
          else {
            if ((param_1 == 0) && (uVar7 != 0)) goto LAB_0802f49a;
            if (param_4 != 0) {
              return param_1;
            }
            if (unaff_r5 != 0) {
              return param_1;
            }
            if ((unaff_r4 != 0) || (unaff_r6 != (uint *)0x0)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xed,0x802f4a2);
              (*pcVar3)();
            }
            if (param_1 != 0) goto LAB_0802f4a6;
            if (uVar7 != 0) goto LAB_0802f4ac;
code_r0x0802f470:
            if (unaff_r6 != (uint *)0x0) goto LAB_0802f4ae;
          }
          if ((param_4 != 0) || (unaff_r5 != 0)) goto LAB_0802f4b0;
          puVar13 = unaff_r6;
          if (unaff_r7 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while( true );
      }
      goto LAB_0802f4f2;
    }
    goto LAB_0802f4f0;
  }
LAB_0802f4ee:
  in_CY = (param_4 & 0x20000000) != 0;
  in_NG = (int)(param_4 << 3) < 0;
  in_ZR = param_4 << 3 == 0;
LAB_0802f4f0:
  puVar14 = (uint *)auStack_104;
LAB_0802f4f2:
  uVar7 = (uint)uVar15;
  if (param_3 == (int *)0x0) {
    software_hlt(0x3a);
    puVar14[-1] = unaff_lr;
    puVar14[-2] = (uint)unaff_r7;
    puVar14[-3] = unaff_r5;
    puVar14[-4] = (uint)(puVar14 + 0xba);
    puVar14[-5] = param_4;
    puVar14[-6] = (uint)((ulonglong)uVar15 >> 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0802f526:
  iVar8 = *unaff_r7;
  uVar10 = unaff_r7[1];
  puVar13 = (uint *)unaff_r7[4];
  coprocessor_loadlong(0,in_cr13,puVar13);
  do {
    uVar15 = CONCAT44(iVar8,uVar7);
    uVar11 = *puVar13;
    software_hlt(0x3d);
    software_hlt(0x3b);
    piVar9 = param_3;
    if (in_NG != in_OV) {
      unaff_lr = 0x802f53d;
      uVar15 = func_0x08603d38(uVar7,iVar8);
      piVar9 = extraout_r2_00;
      uVar10 = extraout_r3_00;
    }
    uVar7 = (uint)uVar15;
    if (in_NG == in_OV) {
LAB_0802f49a:
      uVar7 = func_0x07be9010();
      return uVar7;
    }
    if ((in_NG == '\0') && (uVar7 == 0)) {
      software_hlt(0x39);
      software_hlt(0x23);
      software_hlt(0x24);
      software_hlt(0x22);
      software_hlt(0x27);
      software_hlt(0x21);
    }
    else {
      coprocessor_function2(0xb,0xd,7,in_cr10,in_cr14,in_cr5);
      if (in_NG == in_OV) break;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = (ushort)((uVar11 & 0xff) << 8);
    uVar11 = (uint)(short)(uVar5 | (ushort)(uVar11 >> 8) & 0xff);
    uVar6 = (ushort)((uVar11 & 0xff) << 8);
    iVar12 = (int)(short)(uVar5 >> 8);
    puVar13 = (uint *)(int)(short)((ushort)((uVar11 & 0xff) << 8) | uVar5 >> 8);
    iVar8 = (int)(short)((ushort)(iVar12 << 8) | uVar6 >> 8);
    param_3 = (int *)(int)(short)((ushort)(iVar12 << 8) | uVar6 >> 8);
    uVar7 = (uint)(short)((ushort)(iVar12 << 8) | uVar6 >> 8);
    if (in_NG == in_OV) {
      bVar4 = (uVar10 & 0x20000000) == 0;
      iVar8 = uVar10 << 3;
      puVar1 = puVar14 + 0xbd;
      puVar2 = puVar14 + 0xbd;
      if (puVar2 == (uint *)0x0) {
        return *puVar14;
      }
      puVar14[-1] = unaff_lr;
      puVar14[-2] = (uint)puVar13;
      puVar14[-3] = (uint)puVar2;
      puVar14[-4] = uVar11;
      puVar14[-5] = (uint)puVar1;
      puVar14[-6] = (uint)param_3;
      puVar14[-7] = uVar7;
      puVar14[-8] = (uint)puVar13;
      puVar14[-9] = (uint)puVar2;
      puVar14[-10] = (uint)(puVar14 + 0xb6);
      puVar14[-0xb] = (uint)puVar1;
      puVar14[-0xc] = (uint)(puVar14 + 0xb6);
      puVar14[-0xd] = uVar7;
      if (puVar2 != (uint *)0x0) {
        if (iVar8 == 0 || iVar8 < 0 != (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        return puVar14[-0x3c];
      }
      if (bVar4 || iVar8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar4) {
        func_0x082e786c(uVar7,puVar14 + 0xb6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_movefromRt(4,6,7,in_cr8,in_cr4);
      *puVar1 = 0;
      puVar14[0xbe] = (uint)(puVar14 + 0xb0);
      puVar14[0xbf] = (uint)(puVar14 + 0xb0);
      if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_storelong(1,in_cr12,puVar14 + 0xb0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xea,0x802f5de);
      (*pcVar3)();
    }
  } while( true );
  coprocessor_loadlong(0,in_cr12,(int)((ulonglong)uVar15 >> 0x20));
  param_3 = (int *)*piVar9;
  unaff_r7 = (int *)piVar9[4];
  goto LAB_0802f526;
}

