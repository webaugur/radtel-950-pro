/**
 * @brief fun_0801c08c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c08c, Ghidra name FUN_0801c08c, 192 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801c08c(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = DAT_0801c14c;
  uVar3 = 0;
  FUN_08012ae2(DAT_0801c14c,0x8000);
  FUN_0800ad22(5);
  FUN_0801b9a0(param_1 | 0x80);
  FUN_08012ae2(uVar1,0x400);
  FUN_0800ad22(5);
  FUN_08013e5c(uVar1,0x800,0);
  FUN_08012ae6(uVar1,0x800);
  FUN_0800ad22(5);
  for (uVar4 = 0x8000; uVar4 != 0; uVar4 = uVar4 >> 1) {
    uVar3 = (uVar3 & 0x7fff) << 1;
    FUN_08012ae6(uVar1,0x400);
    iVar2 = FUN_08012ace(uVar1,0x800);
    if (iVar2 != 0) {
      uVar3 = uVar3 | 1;
    }
    FUN_0800ad22(5);
    FUN_08012ae2(uVar1,0x400);
    FUN_0800ad22(5);
  }
  FUN_08013e5c(uVar1,0x800,1);
  FUN_08012ae6(uVar1,0x8000);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x800);
  FUN_08012ae2(uVar1,0x400);
  return uVar3;
}

