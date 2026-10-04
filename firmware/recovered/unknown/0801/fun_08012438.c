/**
 * @brief fun_08012438
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012438, Ghidra name FUN_08012438, 164 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012438(void)

{
  byte bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  pbVar4 = DAT_080124ec;
  puVar3 = DAT_080124e8;
  if (*(char *)(DAT_080124e4 + 1) != '\x02') {
    return;
  }
  switch(*DAT_080124e8) {
  default:
    *(undefined1 *)(_DAT_0800e94c + 1) = 0;
    FUN_0801b334();
    FUN_0800da50();
    FUN_080207ec(0xc);
    FUN_0800b980();
    pcVar2 = _DAT_0800e950;
    if (*_DAT_0800e950 != '\x01') {
      FUN_0800ed5c();
      FUN_0800ad06(10);
      FUN_08012ae6(_DAT_0800e954,0x80);
      FUN_08012ae2(_DAT_0800e958,0x20);
    }
    *pcVar2 = '\x02';
    FUN_0800ff84();
    FUN_0801b70c(0);
    FUN_08023510(0x4a,5);
    return;
  case 1:
    break;
  case 2:
    FUN_0800efa0(*(undefined2 *)(DAT_080124e8 + 2));
    *puVar3 = 4;
    break;
  case 3:
    uVar5 = FUN_08013c24();
    if ((*(ushort *)(puVar3 + 4) < uVar5) &&
       ((iVar6 = FUN_0800edd4(), iVar6 == 2 || (*(short *)(puVar3 + 4) == 0)))) {
      if (*(short *)(puVar3 + 4) == 0) {
        FUN_0800ee00();
      }
      *puVar3 = 2;
      FUN_0801232c();
      FUN_08010e28();
      return;
    }
    break;
  case 4:
    iVar6 = FUN_0800f03c();
    if (iVar6 != 0) {
      FUN_0800ed30(0);
      *puVar3 = 5;
      return;
    }
    break;
  case 5:
    *(undefined2 *)(DAT_080124e8 + 4) = 0;
    FUN_080207ec(0xb);
    puVar3[0x1a] = 0xff;
    puVar3[0x1b] = 0;
    FUN_0801171c();
    *puVar3 = 6;
    return;
  case 6:
    bVar1 = *DAT_080124ec;
    *DAT_080124ec = bVar1 + 1;
    if ((byte)(bVar1 + 1) < 0x12) {
      return;
    }
    *pbVar4 = 0;
    FUN_0800ed80();
    FUN_0801171c();
    return;
  }
  return;
}

