/**
 * @brief fun_08006ff0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006ff0, Ghidra name FUN_08006ff0, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006ff0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_08007034;
  *DAT_08007034 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_08021824(0xf200,(int)puVar1 + 5,7);
  iVar2 = DAT_08007038;
  if ((*(char *)((int)puVar1 + 5) == '\0') || (*(char *)((int)puVar1 + 5) == -1)) {
    *(undefined4 *)((int)puVar1 + 5) = *(undefined4 *)(DAT_08007038 + 8);
    *(undefined2 *)((int)puVar1 + 9) = *(undefined2 *)(iVar2 + 0xc);
    *(undefined1 *)((int)puVar1 + 0xb) = *(undefined1 *)(iVar2 + 0xe);
  }
  *(undefined1 *)((int)puVar1 + 0xb) = 0xbb;
  *(undefined1 *)((int)puVar1 + 2) = 6;
  FUN_08006f84();
  return;
}

