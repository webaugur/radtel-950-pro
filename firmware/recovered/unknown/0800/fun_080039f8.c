/**
 * @brief fun_080039f8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080039f8, Ghidra name FUN_080039f8, 220 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080039f8(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_0800da50();
  puVar2 = DAT_08003adc;
  iVar1 = DAT_08003ad8;
  iVar3 = DAT_08003ad4;
  if (param_1 != 1) {
    *(undefined2 *)(DAT_08003adc + 4) = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
    *(undefined2 *)(puVar2 + 8) = 0;
    FUN_08015824(0);
    FUN_08015868(0);
    FUN_080158ae(*(undefined1 *)(iVar3 + 0x20));
    FUN_08003aec(0);
    if (*(char *)(iVar1 + 0x11) != '\0') {
      FUN_08022954();
      FUN_0800d2a8(0);
    }
    *puVar2 = 0;
    return;
  }
  if (((uint)(**(int **)(DAT_08003ae0 + 0x1c) + DAT_08003ae4) < DAT_08003ae8) &&
     (*(char *)(DAT_08003ad8 + 0x11) != '\0')) {
    FUN_080073f8(7);
    return;
  }
  FUN_0800e828(1);
  *(undefined2 *)(iVar3 + 5) = 500;
  *(undefined2 *)(puVar2 + 6) = 100;
  *(undefined2 *)(puVar2 + 8) = 3000;
  puVar2[0xb] = 0;
  FUN_0801acc0(0);
  *puVar2 = 1;
  if ((*(char *)(iVar1 + 0x11) == '\0') || (iVar3 = FUN_08009ba4(), iVar3 != 0)) {
    *(undefined2 *)(puVar2 + 4) = 0xc;
    FUN_08003aec(1);
  }
  else {
    *(undefined2 *)(puVar2 + 4) = 0x3c;
    if (*(char *)(iVar1 + 0x12) == '\0') {
      FUN_080207ec(8);
    }
    FUN_0801a134();
    thunk_FUN_0801c150(0);
  }
  if (*(char *)(iVar1 + 0x11) != '\x02') {
    FUN_08015824(1);
  }
  FUN_08015868(0);
  FUN_080158ae(1);
  return;
}

