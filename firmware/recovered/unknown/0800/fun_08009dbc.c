/**
 * @brief fun_08009dbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009dbc, Ghidra name FUN_08009dbc, 380 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08009dbc(void)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  
  puVar4 = PTR_DAT_08009f18;
  bVar7 = *PTR_DAT_08009f18 + 1;
  *PTR_DAT_08009f18 = bVar7;
  puVar6 = PTR_DAT_08009f20;
  puVar5 = PTR_DAT_08009f1c;
  if ((uint)bVar7 % 10 == 0) {
    if (*(short *)(PTR_DAT_08009f20 + 7) != 0) {
      *(short *)(PTR_DAT_08009f20 + 7) = *(short *)(PTR_DAT_08009f20 + 7) + -1;
    }
    if (puVar5[0x10] != '\0') {
      puVar5[0x10] = puVar5[0x10] + -1;
    }
    if (*(short *)(puVar6 + 0x24) != 0) {
      *(short *)(puVar6 + 0x24) = *(short *)(puVar6 + 0x24) + -1;
    }
    if (puVar6[0x68] != '\0') {
      puVar6[0x68] = puVar6[0x68] + -1;
    }
  }
  if (99 < bVar7) {
    *puVar4 = 0;
    if (PTR_DAT_08009f24[1] != '\0') {
      PTR_DAT_08009f24[1] = PTR_DAT_08009f24[1] + -1;
    }
    if (puVar6[0x67] != '\0') {
      puVar6[0x67] = puVar6[0x67] + -1;
    }
    if (*(short *)(puVar6 + 5) != 0) {
      *(short *)(puVar6 + 5) = *(short *)(puVar6 + 5) + -1;
    }
    if (*(short *)(puVar6 + 0x26) != 0) {
      *(short *)(puVar6 + 0x26) = *(short *)(puVar6 + 0x26) + -1;
    }
    if (PTR_DAT_08009f28[0x15] != '\0') {
      PTR_DAT_08009f28[0x15] = PTR_DAT_08009f28[0x15] + -1;
    }
    cVar1 = puVar6[1];
    if ((cVar1 == '\x15') && (*(short *)(puVar6 + 0x30) != 0)) {
      *(short *)(puVar6 + 0x30) = *(short *)(puVar6 + 0x30) + -1;
    }
    puVar4 = PTR_DAT_08009f2c;
    if (((((cVar1 == '\0') || (cVar1 == '\x02')) || (cVar1 == '\v')) || (cVar1 == '\x03')) &&
       ((*PTR_DAT_08009f2c == '\0' && (*(short *)(puVar6 + 0x30) != 0)))) {
      *(short *)(puVar6 + 0x30) = *(short *)(puVar6 + 0x30) + -1;
    }
    if (*(short *)(puVar6 + 0x16) != 0) {
      *(short *)(puVar6 + 0x16) = *(short *)(puVar6 + 0x16) + -1;
    }
    if (*(short *)(puVar6 + 0xd) != 0) {
      *(short *)(puVar6 + 0xd) = *(short *)(puVar6 + 0xd) + -1;
    }
    if (*(short *)(puVar6 + 0x1a) != 0) {
      *(short *)(puVar6 + 0x1a) = *(short *)(puVar6 + 0x1a) + -1;
    }
    if ((*(short *)(PTR_DAT_08009f30 + 2) != 0) && (*puVar6 == '\0')) {
      *(short *)(PTR_DAT_08009f30 + 2) = *(short *)(PTR_DAT_08009f30 + 2) + -1;
    }
    if ((*(int *)PTR_DAT_08009f34 != 0) && (puVar6[0x14] != '\x04')) {
      *(int *)PTR_DAT_08009f34 = *(int *)PTR_DAT_08009f34 + -1;
    }
    if (*(short *)(PTR_DAT_08009f38 + 0x4e) != 0) {
      *(short *)(PTR_DAT_08009f38 + 0x4e) = *(short *)(PTR_DAT_08009f38 + 0x4e) + -1;
    }
    if (PTR_DAT_08009f3c[0xe] != '\0') {
      PTR_DAT_08009f3c[0xe] = PTR_DAT_08009f3c[0xe] + -1;
    }
    sVar2 = *(short *)(puVar4 + 2);
    if (sVar2 != 0) {
      *(short *)(puVar4 + 2) = sVar2 + -1;
    }
    if (*(short *)(PTR_DAT_08009f40 + 2) != 0) {
      *(short *)(PTR_DAT_08009f40 + 2) = *(short *)(PTR_DAT_08009f40 + 2) + -1;
    }
    if (*(short *)(puVar6 + 9) != 0) {
      *(short *)(puVar6 + 9) = *(short *)(puVar6 + 9) + -1;
    }
    FUN_08009c3c();
    *(int *)(puVar5 + 0x1c) = *(int *)(puVar5 + 0x1c) + 1;
    if (*(short *)(puVar5 + 0x14) != 0) {
      *(short *)(puVar5 + 0x14) = *(short *)(puVar5 + 0x14) + -1;
    }
  }
  FUN_080090d8();
  FUN_08008ab4();
  FUN_0800db1c();
  if (*(short *)(PTR_DAT_08009f44 + 0x16) != 0) {
    *(short *)(PTR_DAT_08009f44 + 0x16) = *(short *)(PTR_DAT_08009f44 + 0x16) + -1;
  }
  if (puVar6[0x2a] != '\0') {
    puVar6[0x2a] = puVar6[0x2a] + -1;
  }
  FUN_08022b84();
  piVar3 = DAT_08007934;
  if (((DAT_08007934[2] == 0) && (*DAT_08007934 != 0)) &&
     (DAT_08007934[1] = DAT_08007934[1] + 1, 3 < (uint)piVar3[1])) {
    piVar3[2] = 1;
  }
  return;
}

