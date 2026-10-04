/**
 * @brief fun_0801320c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801320c, Ghidra name FUN_0801320c, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801320c(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_08013284;
  if (*(char *)(DAT_08013284 + 1) == '\a') {
    FUN_0800b980();
    iVar3 = DAT_08013288;
    uVar6 = *(uint *)(DAT_08013288 + 4);
    if (uVar6 == 0) {
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      *(char *)(iVar2 + 0x36) = (char)uVar6;
      FUN_08000bca(iVar2 + 0x37,0x10,0xff);
      for (uVar4 = 0; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        bVar1 = *(byte *)(iVar3 + uVar4 + 0x12);
        uVar5 = (uint)bVar1;
        if (uVar5 - 0x3a < 0xb) {
          *(byte *)(iVar2 + uVar4 + 0x37) = bVar1 - 0x37;
        }
        else if (uVar5 == 0x2a) {
          *(undefined1 *)(iVar2 + uVar4 + 0x37) = 0xe;
        }
        else if (uVar5 == 0x23) {
          *(undefined1 *)(iVar2 + uVar4 + 0x37) = 0xf;
        }
        else {
          *(byte *)(iVar2 + uVar4 + 0x37) = bVar1 & 0xf;
        }
      }
      *(undefined1 *)(iVar2 + 1) = 0;
    }
  }
  return;
}

