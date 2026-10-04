/**
 * @brief fun_0802dc1a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802dc1a, Ghidra name FUN_0802dc1a, 822 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0802dc1a(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r7;
  int unaff_r10;
  undefined8 unaff_d13;
  undefined8 in_d19;
  
  iVar1 = DAT_0802dc88;
  iVar3 = unaff_r4 * 0x80000;
  if (-1 < iVar3) {
    *(short *)(unaff_r7 + 0x24) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = param_3;
  if (DAT_0802debc != 0) {
    puVar2 = (undefined4 *)(DAT_0802dc88 >> 0x14);
  }
  if (unaff_r4 < 0x16) {
    *param_3 = param_1;
    param_3[1] = param_1;
    param_3[2] = param_2;
    param_3[3] = param_3;
    param_3[4] = (uint)*(ushort *)(param_3 + 8);
    param_3[5] = iVar1;
    *(ushort *)(param_3 + 2) = (ushort)*(byte *)(iVar3 + 9);
    iVar1 = iRam00000044;
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _IRQ = 0;
    iVar3 = *(int *)(iRam00000044 + 0x74);
    *(char *)(iVar3 + 0x1c) = (char)s_Hello_world__0802e539._7_4_;
    *(undefined1 *)(iVar1 + 9) = 0;
    *(int *)(iVar1 + 0x44) = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)((param_2 >> 4) * 2) = param_2 >> 4;
  *(undefined4 *)(((int)puVar2 + -5 >> 0x14) + 0x1e) = 0;
  VectorRoundShiftRightAccumulate(in_d19,unaff_d13,1);
  *(undefined2 *)(_MasterStackPointer + 0x3c) = 0;
  (*(code *)0x0)(unaff_r10 << 0xf);
  return;
}

