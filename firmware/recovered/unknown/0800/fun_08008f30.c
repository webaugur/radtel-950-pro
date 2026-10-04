/**
 * @brief fun_08008f30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08008f30, Ghidra name FUN_08008f30, 312 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08008f30(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  pcVar3 = DAT_08009070;
  pcVar2 = DAT_08009068;
  if (*DAT_08009068 != '\x01') {
    return 0;
  }
  if ((DAT_08009068[0x19] != '\0') && ((DAT_08009068[1] != '\x01' || (*DAT_0800906c != '\x01')))) {
    return 0;
  }
  cVar1 = DAT_08009068[0x1c];
  DAT_08009070[0x33] = cVar1;
  if (*(char *)(DAT_08009074 + 0xfa) != cVar1) {
    FUN_08021d40(0,1);
    pcVar3[0x34] = '\x01';
  }
  iVar4 = DAT_08009078;
  *(undefined1 *)(DAT_08009078 + 0xf) = 1;
  FUN_0801a134();
  iVar8 = DAT_08009078;
  if (*pcVar3 != '\x01') {
    *(undefined1 *)(iVar4 + 0xf) = 0;
    return 0;
  }
  *(undefined4 *)(DAT_08009078 + 0x105) = *(undefined4 *)(pcVar2 + 0x11);
  *(undefined2 *)(iVar8 + 0x109) = *(undefined2 *)(pcVar2 + 0x15);
  *(char *)(iVar4 + 0x10b) = pcVar2[0x17];
  iVar5 = DAT_08009084;
  FUN_08000e5e(DAT_08009084,s_APRS_0800907c);
  iVar7 = DAT_08009084 + 7;
  FUN_08000fd2(iVar7,0x38);
  iVar8 = DAT_08009078;
  cVar1 = pcVar2[0x18];
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') goto LAB_0800905a;
        if ((pcVar2[0x32] != '\0') && (pcVar2[0x32] != -1)) {
          iVar8 = DAT_08009084 + 0xe;
          FUN_08001064(iVar8,DAT_08009068 + 0x32,6);
          bVar6 = FUN_08000ea6(iVar8);
          *(undefined1 *)((uint)bVar6 + iVar4 + 0x11a) = 0;
          *(char *)(iVar4 + 0x120) = pcVar2[0x38];
        }
      }
      if ((pcVar2[0x2b] != '\0') && (pcVar2[0x2b] != -1)) {
        FUN_08001064(iVar7,DAT_08009068 + 0x2b,6);
        bVar6 = FUN_08000ea6(iVar7);
        *(undefined1 *)((uint)bVar6 + iVar4 + 0x113) = 0;
        *(char *)(iVar4 + 0x119) = pcVar2[0x31];
      }
      goto LAB_0800905a;
    }
    *(undefined4 *)(DAT_08009078 + 0x11a) = s_WIDE2_08009088._0_4_;
    *(undefined1 *)(iVar8 + 0x11e) = 0x32;
    *(undefined1 *)(iVar4 + 0x120) = 1;
  }
  iVar8 = DAT_08009078;
  *(undefined4 *)(DAT_08009078 + 0x113) = s_WIDE1_08009090._0_4_;
  *(undefined1 *)(iVar8 + 0x117) = 0x31;
  *(undefined1 *)(iVar4 + 0x119) = 1;
LAB_0800905a:
  FUN_080071c0(iVar5,DAT_08009084 + 0x5e);
  return 1;
}

