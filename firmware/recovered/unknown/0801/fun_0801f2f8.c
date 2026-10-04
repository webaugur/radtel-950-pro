/**
 * @brief fun_0801f2f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f2f8, Ghidra name FUN_0801f2f8, 102 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801f2f8(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0801f360;
  if (*(short *)(DAT_0801f360 + 2) == 0) {
    iVar2 = DAT_0801f364 + (uint)*(byte *)(DAT_0801f364 + 0xfa) * 0x58;
    if (DAT_0801f360[1] == '\x01') {
      if (*(char *)(iVar2 + 0x130) == '\x01') {
        FUN_080085c8(1,0);
      }
      else {
        FUN_08023308(1);
      }
    }
    else if (*(char *)(iVar2 + 0x130) == '\x01') {
      FUN_08008404(1,0);
    }
    else {
      FUN_08023084(1);
    }
    FUN_0801b3f0();
    FUN_0801b3fc();
    *puVar1 = 1;
    *(undefined2 *)(puVar1 + 2) = 2;
  }
  return;
}

