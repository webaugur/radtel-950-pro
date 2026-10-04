/**
 * @brief fun_08018cc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018cc8, Ghidra name FUN_08018cc8, 224 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018cc8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  iVar2 = DAT_08018d5c;
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 0x15) {
    *(undefined1 *)(DAT_08018d5c + 1) = 0;
    FUN_080073a4(2);
    *(undefined2 *)(iVar2 + 2) = 0;
    FUN_0801f2f8();
    FUN_0800beb4();
LAB_0800c06c:
    if ((((*DAT_0800c094 == '\0') && (cVar1 = DAT_0800c094[1], cVar1 != '\x14')) &&
        (cVar1 != '\x02')) && (((cVar1 != '\a' && (cVar1 != '\x0f')) && (cVar1 != '\v')))) {
      FUN_0800d2a8(0);
      return;
    }
    return;
  }
  if ((int)uVar4 < 0x16) {
    if (uVar4 == 2) {
      FUN_0801f0f0(**(undefined4 **)(DAT_08018d60 + 0x18));
      FUN_080073a4(3);
      return;
    }
    if (uVar4 != 0x12) {
      if (uVar4 != 0x13) goto LAB_08018cec;
      *(undefined1 *)(DAT_08018d5c + 1) = 1;
      FUN_080073a4();
      *(undefined2 *)(iVar2 + 2) = 0;
      FUN_0801f2f8();
      FUN_0800beb4();
      goto LAB_0800c06c;
    }
  }
  else if (uVar4 != 0x1c) {
    if (uVar4 == 0x1d) {
      FUN_0801f1ac();
      FUN_080073a4(4);
      return;
    }
LAB_08018cec:
    if (uVar4 < 0xa0) {
      FUN_080073a4(0);
      return;
    }
    return;
  }
  FUN_080234f8(0x28,6);
  puVar3 = DAT_0801f390;
  *DAT_0801f390 = 0;
  *(undefined2 *)(puVar3 + 2) = 0;
  iVar2 = DAT_0801f394;
  *(undefined1 *)(DAT_0801f394 + 1) = 0;
  *(undefined1 *)(iVar2 + 0x14) = 0;
  FUN_08008488(0,1);
  FUN_0800b980();
  return;
}

