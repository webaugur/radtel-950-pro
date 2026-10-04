/**
 * @brief fun_08009f48
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009f48, Ghidra name FUN_08009f48, 292 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009f48(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = DAT_0800a074;
  if (*(char *)(DAT_0800a06c + 0x19) == '\0') {
    return 0;
  }
  if (*DAT_0800a070 == '\0') {
    return 0;
  }
  cVar1 = DAT_0800a074[1];
  if ((((cVar1 == '\x04') || (cVar1 == '\x11')) || (cVar1 == '\x03')) || (cVar1 == '\v')) {
    return 0;
  }
  iVar4 = FUN_080138f8();
  if (iVar4 == 2) {
    return 0;
  }
  iVar5 = FUN_08009d74();
  iVar4 = DAT_0800a078;
  if (iVar5 == 1) {
    return 0;
  }
  if ((*(char *)(DAT_0800a078 + 0x10a) != '\0') && (*(char *)(DAT_0800a078 + 0x10a) != '\x01')) {
    return 0;
  }
  if (puVar2[0x28] == '\x01') {
    uVar3 = FUN_080138f8();
    puVar2[0x52] = uVar3;
    if (puVar2[0x2b] == '\0') {
      puVar2[0x2b] = 1;
    }
  }
  else {
    puVar2[0x52] = *(undefined1 *)(DAT_0800a078 + 0xfa);
  }
  if (puVar2[0x52] == '\0') {
    puVar6 = *(undefined4 **)(iVar4 + 0x184);
    *(undefined4 *)(puVar2 + 0x54) = *puVar6;
    *(undefined4 *)(puVar2 + 0x5c) = puVar6[2];
    puVar2[0x58] = *(undefined1 *)(puVar6 + 1);
    puVar2[0x60] = *(undefined1 *)(iVar4 + 0x18a);
    uVar3 = *(undefined1 *)(iVar4 + 0x1a0);
  }
  else {
    puVar6 = *(undefined4 **)(iVar4 + 300);
    *(undefined4 *)(puVar2 + 0x54) = *puVar6;
    *(undefined4 *)(puVar2 + 0x5c) = puVar6[2];
    puVar2[0x58] = *(undefined1 *)(puVar6 + 1);
    puVar2[0x60] = *(undefined1 *)(iVar4 + 0x132);
    uVar3 = *(undefined1 *)(iVar4 + 0x148);
  }
  if (puVar2[0x60] == '\0') {
    puVar2[0x60] = 1;
  }
  iVar5 = FUN_0800948c(*(undefined4 *)(puVar2 + 0x54),uVar3);
  if (((iVar5 == 1) && (iVar5 = FUN_08008d1c(), iVar5 == 1)) &&
     (DAT_0800a074[*(byte *)(iVar4 + 0x10b) + 0xf] == '\x01')) {
    if ((uint)*(byte *)(iVar4 + 0x10a) != (uint)*(byte *)(iVar4 + 0x10b)) {
      if (puVar2[1] == '\a') {
        FUN_0801b334();
        puVar2[1] = 0;
      }
      FUN_0800e828(0);
      *puVar2 = 2;
      puVar2[4] = 0;
      puVar2[0x51] = 1;
      return 1;
    }
    return 0;
  }
  return 0;
}

