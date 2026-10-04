/**
 * @brief fun_0801e038
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e038, Ghidra name FUN_0801e038, 72 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e038(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_0801e088;
  puVar2 = PTR_DAT_0801e080;
  iVar4 = *(int *)(PTR_DAT_0801e084 + 3);
  uVar1 = *(undefined2 *)(PTR_DAT_0801e088 + 2);
  if (PTR_DAT_0801e080[0x43] == 1) {
    *(undefined2 *)(PTR_DAT_0801e080 + iVar4 * 2 + 0x24) = uVar1;
  }
  else if ((byte)PTR_DAT_0801e080[0x43] < 2) {
    *(undefined2 *)(PTR_DAT_0801e080 + iVar4 * 2 + 2) = uVar1;
  }
  else {
    *(undefined2 *)(PTR_DAT_0801e080 + iVar4 * 5 + 0x4a) = uVar1;
    puVar2[iVar4 * 5 + 0x4c] = puVar3[0x16];
    *(undefined2 *)(puVar2 + iVar4 * 5 + 0x4d) = *(undefined2 *)(puVar3 + 0x18);
  }
  FUN_080109b0();
  FUN_08018038();
  return 1;
}

