/**
 * @brief fun_0800f300
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f300, Ghidra name FUN_0800f300, 90 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800f300(void)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte local_78 [100];
  
  iVar3 = DAT_0800f360;
  iVar6 = DAT_0800f35c;
  uVar4 = 0;
  do {
    local_78[uVar4] = *(byte *)(iVar6 + uVar4 + 1);
    *(char *)(iVar3 + uVar4 + 0x3c7) = (char)uVar4;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 100);
  uVar4 = 0;
  do {
    for (uVar5 = 0; (int)uVar5 < (int)(99 - uVar4); uVar5 = uVar5 + 1 & 0xff) {
      bVar2 = local_78[uVar5];
      if (bVar2 < local_78[uVar5 + 1]) {
        local_78[uVar5] = local_78[uVar5 + 1];
        local_78[uVar5 + 1] = bVar2;
        iVar6 = iVar3 + uVar5;
        uVar1 = *(undefined1 *)(iVar6 + 0x3c7);
        *(undefined1 *)(iVar6 + 0x3c7) = *(undefined1 *)(iVar6 + 0x3c8);
        *(undefined1 *)(iVar6 + 0x3c8) = uVar1;
      }
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 99);
  return;
}

