/**
 * @brief fun_0802ed96
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802ed96, Ghidra name FUN_0802ed96, 24 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0802ed96(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *extraout_r2;
  uint uVar8;
  uint extraout_r3;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar13;
  undefined4 uStack_1a0;
  undefined4 uStack_16c;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_6c;
  undefined4 *puStack_68;
  int iStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  software_interrupt(0xf9);
  iVar5 = *param_4;
  iStack_78 = param_4[2];
  iStack_74 = param_4[3];
  piVar11 = (int *)param_4[4];
  piVar7 = param_3 + 0xad;
  *param_3 = &iStack_7c;
  param_3[1] = unaff_pc;
  iStack_7c = iVar5;
  piStack_70 = piVar11;
  iStack_6c = iVar5;
  puStack_68 = param_3;
  iStack_64 = iStack_78;
  piStack_60 = piVar11;
  uStack_5c = param_1;
  uStack_58 = param_2;
LAB_0802f528:
  iVar6 = *piVar11;
  uVar8 = piVar11[1];
  puVar12 = (uint *)piVar11[4];
  coprocessor_loadlong(0,in_cr13,puVar12);
  do {
    uVar13 = CONCAT44(iVar6,iVar5);
    uVar9 = *puVar12;
    software_hlt(0x3d);
    software_hlt(0x3b);
    piVar11 = piVar7;
    if (in_NG != in_OV) {
      uVar13 = func_0x08603d38(iVar5,iVar6);
      piVar11 = extraout_r2;
      uVar8 = extraout_r3;
    }
    iVar5 = (int)uVar13;
    if (in_NG == in_OV) {
      uVar13 = func_0x07be9010();
      return uVar13;
    }
    if ((in_NG == '\0') && (iVar5 == 0)) {
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
    uVar3 = (ushort)((uVar9 & 0xff) << 8);
    iVar5 = (int)(short)((ushort)(uVar9 >> 8) & 0xff);
    uVar4 = (ushort)(iVar5 << 8);
    iVar10 = (int)(short)(uVar3 >> 8);
    puVar12 = (uint *)(int)(short)((ushort)(iVar5 << 8) | uVar3 >> 8);
    iVar6 = (int)(short)((ushort)(iVar10 << 8) | uVar4 >> 8);
    piVar7 = (int *)(int)(short)((ushort)(iVar10 << 8) | uVar4 >> 8);
    iVar5 = (int)(short)((ushort)(iVar10 << 8) | uVar4 >> 8);
    if (in_NG == in_OV) {
      bVar2 = (uVar8 & 0x20000000) == 0;
      iVar6 = uVar8 << 3;
      if (&stack0x00000000 == (undefined1 *)0xfffffd88) {
        return CONCAT44(iStack_78,iStack_7c);
      }
      if (&stack0x00000000 != (undefined1 *)0xfffffd88) {
        if (iVar6 == 0 || iVar6 < 0 != (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        return CONCAT44(uStack_1a0,uStack_16c);
      }
      if (bVar2 || iVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar2) {
        func_0x082e786c(iVar5,0xffffffe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_movefromRt(4,6,7,in_cr8,in_cr4);
      if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_storelong(1,in_cr12,0xffffffcc);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xea,0x802f5de);
      (*pcVar1)();
    }
  } while( true );
  coprocessor_loadlong(0,in_cr12,(int)((ulonglong)uVar13 >> 0x20));
  piVar7 = (int *)*piVar11;
  piVar11 = (int *)piVar11[4];
  goto LAB_0802f528;
}

