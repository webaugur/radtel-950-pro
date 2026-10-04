/**
 * @brief fun_0800de28
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800de28, Ghidra name FUN_0800de28, 572 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800de28(void)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  pcVar4 = pcRam0800decc;
  *pcRam0800decc = '\0';
  *(undefined1 *)(iRam0800ded0 + 1) = 0xd;
  pcVar4[8] = '\0';
  pcVar4[6] = '\0';
  pcVar5 = pcRam0800ded4;
  pcVar4[7] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  *(undefined4 *)(pcVar4 + 0xc) = uRam0800ded8;
  do {
    while( true ) {
      iVar9 = FUN_08008214();
      if (iVar9 != 0) {
        sVar2 = *(short *)(pcVar4 + 6);
        if ((sVar2 != 0) && (*(short *)(pcVar4 + 6) = sVar2 + -1, sVar2 == 1)) {
          *pcVar4 = '\x02';
        }
        cVar1 = pcVar4[8];
        if ((cVar1 != '\0') && (pcVar4[8] = cVar1 + -1, cVar1 == '\x01')) {
          pcVar4[3] = '\x01';
        }
        FUN_08009810();
      }
      if (pcVar4[3] == '\0') break;
      pcVar4[3] = '\0';
      iVar9 = FUN_08009c8c();
      if (iVar9 == 0) {
        if (*pcVar4 == '\0') {
          if (*pcVar5 == '\x02') {
            *pcVar4 = '\x01';
            FUN_08021a54(2,0x59);
          }
        }
        else if (*pcVar4 == '\x01') {
          FUN_080143c0();
        }
      }
      pcVar4[4] = '\0';
      pcVar4[5] = '\0';
    }
    if (*pcVar4 == '\x03') {
      *pcVar4 = '\0';
      cVar1 = pcVar4[1];
      pcVar4[1] = cVar1 + 1U;
      if (2 < (byte)(cVar1 + 1U)) {
        *pcVar4 = '\x02';
      }
    }
  } while (*pcVar4 != '\x02');
  FUN_08015868(0);
  FUN_08015824(0);
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  FUN_08018fc4();
  pcVar4 = DAT_0800e06c;
  iVar9 = DAT_0800e068;
  if ((*(char *)(DAT_0800e064 + 0x19) == '\0') && (*(char *)(DAT_0800e068 + 0x14) != '\x04')) {
    DAT_0800e06c[0x1d] = '\0';
    uVar8 = DAT_0800e078;
    uVar7 = DAT_0800e074;
    puVar6 = DAT_0800e070;
    if (*(char *)((int)DAT_0800e070 + 0x43) == '\0') {
      FUN_08012ae2(DAT_0800e074,0x80);
      FUN_08012ae2(uVar8,0x20);
    }
    else {
      FUN_08012ae6(DAT_0800e078,0x20);
      FUN_08012ae6(uVar7,0x80);
    }
    FUN_0800da50();
    if (*(char *)(iVar9 + 1) == '\x01') {
      FUN_0800e95c(0);
    }
    FUN_0801b334();
    *(undefined1 *)(iVar9 + 1) = 2;
    if (*pcVar4 == '\x01') {
      pcVar4[4] = '\0';
      pcVar4[5] = '\0';
      *pcVar4 = '\x02';
      FUN_08010fa0();
      return;
    }
    *pcVar4 = '\x02';
    FUN_0801b70c(1);
    if (*(byte *)((int)puVar6 + 0x43) == 1) {
      if (*(char *)((int)puVar6 + 0x21) == '\x01') {
        *(undefined2 *)(pcVar4 + 2) = puVar6[*(byte *)(puVar6 + 0x21) + 0x12];
      }
      else {
        *(undefined2 *)(pcVar4 + 2) = puVar6[0x11];
      }
      uVar10 = (uint)*(ushort *)(pcVar4 + 2);
      if (uVar10 - 0x208 < 0x4a7) {
        pcVar4[1] = '\x01';
      }
      else if (uVar10 - 0x8fc < 0x6c35) {
        pcVar4[1] = '\x02';
      }
      else if (uVar10 - 0x99 < 0x7f) {
        pcVar4[1] = '\0';
      }
      else {
        pcVar4[1] = '\x02';
        pcVar4[2] = -4;
        pcVar4[3] = '\b';
      }
      pcVar4[0x17] = *(char *)(puVar6 + 0x22);
    }
    else if (*(byte *)((int)puVar6 + 0x43) < 2) {
      if (*(char *)((int)puVar6 + 0x21) == '\x01') {
        *(undefined2 *)(pcVar4 + 2) = puVar6[*(byte *)(puVar6 + 0x10) + 1];
      }
      else {
        *(undefined2 *)(pcVar4 + 2) = *puVar6;
      }
      if (0x1130 < *(ushort *)(pcVar4 + 2) - 0x1900) {
        pcVar4[2] = '\0';
        pcVar4[3] = '\x19';
      }
    }
    else {
      if (*(char *)((int)puVar6 + 0x21) == '\x01') {
        bVar3 = *(byte *)((int)puVar6 + 0x95);
        *(undefined2 *)(pcVar4 + 2) = *(undefined2 *)((int)puVar6 + (uint)bVar3 * 5 + 0x4a);
        pcVar4[0x16] = *(char *)((int)puVar6 + (uint)bVar3 * 5 + 0x4c);
        *(undefined2 *)(pcVar4 + 0x18) = *(undefined2 *)((int)puVar6 + (uint)bVar3 * 5 + 0x4d);
      }
      else {
        *(undefined2 *)(pcVar4 + 2) = *(undefined2 *)((int)puVar6 + 0x45);
        pcVar4[0x16] = *(char *)((int)puVar6 + 0x47);
        *(undefined2 *)(pcVar4 + 0x18) = puVar6[0x24];
      }
      if (0x749a < *(ushort *)(pcVar4 + 2) - 0x96) {
        pcVar4[2] = -0x6a;
        pcVar4[3] = '\0';
      }
      pcVar4[0x17] = *(char *)(puVar6 + 0x4c);
    }
    FUN_08011864();
    FUN_0800eccc();
    FUN_0800efa0(*(undefined2 *)(pcVar4 + 2));
    FUN_08010fa0();
    return;
  }
  FUN_080073a4(0);
  return;
}

