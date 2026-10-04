/**
 * @brief fun_0801b4c0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b4c0, Ghidra name FUN_0801b4c0, 130 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b4c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  uVar3 = DAT_0801b554;
  uVar2 = DAT_0801b550;
  iVar1 = DAT_0801b548;
  if ((*(char *)(DAT_0801b544 + 0x19) == '\0') && (*(char *)(DAT_0801b548 + 0x14) != '\x04')) {
    if (*(char *)(DAT_0801b54c + 0x43) == '\0') {
      FUN_08012ae2(DAT_0801b550,0x80);
      FUN_08012ae2(uVar3,0x20);
    }
    else {
      FUN_08012ae6(DAT_0801b554,0x20);
      FUN_08012ae6(uVar2,0x80);
    }
    FUN_0800da50();
    *(undefined2 *)(DAT_0801b558 + 0x4e) = 0;
    puVar4 = DAT_0801b55c;
    *DAT_0801b55c = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    FUN_0801b334();
    *(undefined1 *)(iVar1 + 1) = 2;
    puVar5 = DAT_0801b560;
    *DAT_0801b560 = 2;
    FUN_0801b70c(1);
    FUN_0800efa0(*(undefined2 *)(puVar5 + 2));
    FUN_08010fa0();
    FUN_0800ff84();
    return;
  }
  FUN_080073a4(7);
  return;
}

