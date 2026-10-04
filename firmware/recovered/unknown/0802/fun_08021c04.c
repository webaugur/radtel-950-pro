/**
 * @brief fun_08021c04
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021c04, Ghidra name FUN_08021c04, 300 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021c04(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar4 = DAT_08021d30;
  cVar2 = *(char *)(DAT_08021d30 + (uint)*(byte *)(DAT_08021d30 + 0xfa) * 0x58 + 0x130);
  FUN_0800da50();
  iVar5 = DAT_08021d34;
  if (*(char *)(iVar4 + 0xfa) == '\x02') {
    iVar6 = FUN_08009580(2);
    if (iVar6 == 0) {
      *(byte *)(iVar5 + 0x1a) = *(byte *)(iVar5 + 0x1a) & 0xcf;
    }
    else {
      bVar1 = *(byte *)(iVar5 + 0x1a);
      if ((bVar1 & 0x30) == 0) {
        *(byte *)(iVar5 + 0x1a) = (bVar1 & 0xcf) + 0x10;
      }
      else {
        *(byte *)(iVar5 + 0x1a) = bVar1 & 0xcf;
      }
    }
  }
  else if (*(char *)(iVar4 + 0xfa) == '\x01') {
    iVar6 = FUN_08009580(1);
    if (iVar6 == 0) {
      *(byte *)(iVar5 + 0x1a) = *(byte *)(iVar5 + 0x1a) & 0xf3;
    }
    else {
      bVar1 = *(byte *)(iVar5 + 0x1a);
      if ((bVar1 & 0xc) == 0) {
        *(byte *)(iVar5 + 0x1a) = (bVar1 & 0xf3) + 4;
      }
      else {
        *(byte *)(iVar5 + 0x1a) = bVar1 & 0xf3;
      }
    }
  }
  else {
    iVar6 = FUN_08009580(0);
    if (iVar6 == 0) {
      *(byte *)(iVar5 + 0x1a) = *(byte *)(iVar5 + 0x1a) & 0xfc;
    }
    else {
      bVar1 = *(byte *)(iVar5 + 0x1a);
      if ((bVar1 & 3) == 0) {
        *(byte *)(iVar5 + 0x1a) = (bVar1 & 0xfc) + 1;
      }
      else {
        *(byte *)(iVar5 + 0x1a) = bVar1 & 0xfc;
      }
    }
  }
  FUN_0800864c((uint)*(byte *)(iVar4 + 0xfa),1,
               *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 2 + 0x102));
  *(undefined2 *)(iVar4 + 0x108) =
       *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 2 + 0x102);
  cVar3 = *(char *)(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 0x58 + 0x130);
  *(char *)(DAT_08021d38 + 0x20) = cVar3;
  if (*(char *)(iVar5 + 7) == '\0') {
    FUN_080073a4(6);
  }
  else {
    if (cVar3 == '\x01') {
      uVar7 = 0x3b;
    }
    else {
      uVar7 = 0x3c;
    }
    FUN_080234ac(uVar7);
  }
  if ((*(char *)(iVar4 + (uint)*(byte *)(iVar4 + 0xfa) * 0x58 + 0x130) != cVar2) ||
     (*(char *)(DAT_08021d3c + 0x1e) != '\0')) {
    FUN_0800c524();
  }
  FUN_08010044();
  FUN_0801c9a0();
  return;
}

