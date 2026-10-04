/**
 * @brief fun_08009810
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009810, Ghidra name FUN_08009810, 188 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08009810(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_080098cc;
  iVar2 = FUN_08012ace(DAT_080098cc,1);
  if (iVar2 != 0) {
    FUN_0800ad06(0x32);
    iVar2 = FUN_08012ace(uVar1,1);
    if (iVar2 != 0) {
      FUN_0800da50();
      FUN_08010044();
      uVar3 = (uint)*(byte *)(DAT_080098d0 + 0xfa);
      iVar2 = DAT_080098d0 + uVar3 * 0x58;
      if (*(char *)(iVar2 + 0x130) == '\x01') {
        FUN_0800fee8((ushort)*(byte *)(uVar3 + DAT_080098e8) * 99 + *(short *)(DAT_080098d0 + 0x108)
                     ,DAT_080098d0 + uVar3 * 0x20 + 0x270,iVar2 + 0x149);
      }
      else {
        FUN_080105cc();
      }
      FUN_0800fda8();
      FUN_08010520();
      FUN_08012ae2(DAT_080098d4,0x40);
      FUN_08012ae2(DAT_080098d8,8);
      FUN_0800ad06(100);
      FUN_08012ae2(DAT_080098dc,0x800);
      FUN_0800ad06(500);
      DataSynchronizationBarrier(0xf);
      *DAT_080098e0 = *DAT_080098e0 & 0x700 | DAT_080098e4;
      DataSynchronizationBarrier(0xf);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return;
}

