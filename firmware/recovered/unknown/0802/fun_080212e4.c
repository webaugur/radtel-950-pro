/**
 * @brief fun_080212e4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080212e4, Ghidra name FUN_080212e4, 204 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080212e4(int param_1)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  
  puVar1 = DAT_080213b0;
  if (param_1 == 0) {
    *(undefined1 *)(DAT_080213b0 + 0x14) = 0;
  }
  if (*(char *)(puVar1 + 0x14) == '\x01') {
    iVar3 = FUN_080211dc();
    if (iVar3 == 1) {
      *(undefined1 *)(puVar1 + 0x14) = 0;
      FUN_0802156c();
      if ((ushort)puVar1[5] <= (ushort)puVar1[4]) {
        FUN_0801acce(1);
        FUN_080207ec(5);
        FUN_08015824(1);
        FUN_08014964();
        sVar2 = FUN_0801c8e0(*(undefined4 *)(puVar1 + 8),*puVar1);
        FUN_08020bbc((int)sVar2);
        FUN_08020ce8(*(undefined4 *)(puVar1 + 8));
        *(undefined1 *)(puVar1 + 0x14) = 2;
        return;
      }
      FUN_08021228();
      return;
    }
  }
  else {
    if (*(char *)(puVar1 + 0x14) == '\x02') {
      iVar3 = FUN_080211dc();
      if (iVar3 == 1) {
        FUN_0802156c();
        sVar2 = FUN_0801c8e0(*(undefined4 *)(puVar1 + 8),*puVar1);
        FUN_08020bbc((int)sVar2);
        if ((ushort)puVar1[4] < (ushort)puVar1[5]) {
          *(undefined1 *)(puVar1 + 0x14) = 0;
          FUN_0801acce(0);
          FUN_080207ec(6);
          FUN_08015824(0);
          FUN_08021228();
          return;
        }
      }
      return;
    }
    FUN_080213d8(*(undefined4 *)(puVar1 + 8));
    FUN_0801acce(0);
    FUN_080207ec(6);
    FUN_08015824(0);
    *(undefined1 *)(puVar1 + 0x14) = 1;
  }
  return;
}

