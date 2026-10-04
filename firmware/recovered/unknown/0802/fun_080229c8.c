/**
 * @brief fun_080229c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080229c8, Ghidra name FUN_080229c8, 156 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080229c8(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  FUN_0801b334();
  FUN_0800da50();
  iVar2 = DAT_08022a64;
  iVar4 = DAT_08022a64 + (uint)*(byte *)(DAT_08022a64 + 0xfa) * 0x58;
  if (*(char *)(iVar4 + 0x130) == '\x01') {
    if (*(char *)(iVar4 + 0x132) == '\0') {
      *(undefined1 *)(iVar4 + 0x132) = 2;
    }
    else if (*(char *)(iVar4 + 0x132) == '\x02') {
      *(undefined1 *)(iVar4 + 0x132) = 1;
    }
    else {
      *(undefined1 *)(iVar4 + 0x132) = 0;
    }
  }
  else {
    iVar4 = DAT_08022a64 + (uint)*(byte *)(DAT_08022a64 + 0xfa) * 0x24;
    bVar1 = *(byte *)(iVar4 + 0x2e0);
    if ((bVar1 & 0xf) == 0) {
      bVar3 = 2;
    }
    else if ((bVar1 & 0xf) == 2) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    *(byte *)(iVar4 + 0x2e0) = bVar1 & 0xf0 | bVar3;
    *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0xfa) * 0x58 + 0x132) = bVar3;
  }
  FUN_080089e8();
  FUN_0800d088(*(undefined1 *)(iVar2 + 0xfa),0,1);
  return;
}

