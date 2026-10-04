/**
 * @brief fun_080238bc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080238bc, Ghidra name FUN_080238bc, 222 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080238bc(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0x11) {
    if (0x11 < iVar4) {
      if (iVar4 != 0x12) {
        cVar1 = *DAT_08023960;
        pcVar2 = DAT_08023960;
        if (iVar4 == 0x13) {
          if (cVar1 == '\0') {
            FUN_08023790(0);
            return;
          }
          DAT_08023960[1] = '\x01';
          FUN_080073a4();
          pcVar2[2] = '\0';
          pcVar2[3] = '\0';
          FUN_08023964();
          FUN_0800beb4();
          return;
        }
        if (iVar4 == 0x15) {
          if (cVar1 == '\0') {
            FUN_08023754(0);
            return;
          }
          DAT_08023960[1] = '\0';
          FUN_080073a4(1);
          pcVar2[2] = '\0';
          pcVar2[3] = '\0';
          FUN_08023964();
          FUN_0800beb4();
          return;
        }
        if (iVar4 != 0x1c) {
          return;
        }
        if (cVar1 == '\0') {
          FUN_0800da50();
          FUN_0801b334();
          puVar3 = DAT_080239dc;
          *DAT_080239dc = 1;
          *(undefined2 *)(puVar3 + 2) = 4;
          puVar3[1] = 1;
          FUN_08023510(0x27,3);
          return;
        }
        FUN_080234f8(0x28,6);
        puVar3 = DAT_080239b0;
        *DAT_080239b0 = 0;
        *(undefined2 *)(puVar3 + 2) = 0;
        *(undefined1 *)(DAT_080239b4 + 0x14) = 0;
        return;
      }
LAB_08023954:
      FUN_0800eab8(1);
      return;
    }
    if (iVar4 == 2) {
      if (*(char *)(DAT_08014714 + 99) == '\0') {
        *(undefined1 *)(DAT_08014714 + 99) = 1;
        FUN_080234ac(0x25);
      }
      else {
        *(undefined1 *)(DAT_08014714 + 99) = 0;
        FUN_080234ac(0x26);
      }
      FUN_0800cf58(1);
      return;
    }
    if (iVar4 != 7) {
      if (iVar4 == 0xc) goto LAB_08023954;
      if (iVar4 != 0x10) {
        return;
      }
    }
  }
  FUN_080073a4(0);
  return;
}

