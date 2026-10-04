/**
 * @brief fun_0801621c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801621c, Ghidra name FUN_0801621c, 92 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801621c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_08016278;
  *(undefined2 *)(PTR_DAT_08016278 + 1) = 3;
  *puVar2 = 1;
  if ((int)((uint)(byte)PTR_DAT_0801627c[(uint)(byte)PTR_DAT_0801627c[0xfa] * 0x24 + 0x2de] << 0x1b)
      < 0) {
    *(undefined2 *)(puVar2 + 7) = 1;
  }
  else if ((int)((uint)(byte)PTR_DAT_0801627c[(uint)(byte)PTR_DAT_0801627c[0xfa] * 0x24 + 0x2de] <<
                0x1a) < 0) {
    *(undefined2 *)(puVar2 + 7) = 2;
  }
  else {
    *(undefined2 *)(puVar2 + 7) = 0;
  }
  puVar4 = PTR_DAT_08016284;
  if (PTR_DAT_08016280[8] == '\x01') {
    puVar4 = PTR_DAT_08016284 + -0xc;
  }
  *(undefined **)(puVar2 + 0x13) = puVar4;
  iVar3 = DAT_08016d14;
  uVar1 = *(ushort *)(DAT_08016d14 + 7);
  *(uint *)(DAT_08016d14 + 3) = (uint)uVar1;
  if (2 < uVar1) {
    *(undefined2 *)(iVar3 + 9) = 3;
    *(ushort *)(iVar3 + -4) = uVar1 - 3;
    return;
  }
  *(ushort *)(iVar3 + 9) = uVar1;
  *(undefined2 *)(iVar3 + -4) = 0;
  return;
}

