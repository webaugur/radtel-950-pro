/**
 * @brief fun_08026bac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026bac, Ghidra name FUN_08026bac, 194 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08026bac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = ram0x08026c70;
  uVar3 = 0;
  FUN_08013e5c(ram0x08026c70,0x80,0);
  FUN_0800ad22(10);
  cVar4 = '\a';
  do {
    FUN_08012ae2(uVar1,0x40);
    FUN_0800ad22(2);
    uVar3 = (uVar3 & 0x7f) << 1;
    iVar2 = FUN_08012ace(uVar1,0x80);
    if (iVar2 != 0) {
      uVar3 = uVar3 | 1;
    }
    FUN_0800ad22(2);
    FUN_08012ae6(uVar1,0x40);
    FUN_0800ad22(5);
    cVar4 = cVar4 + -1;
  } while (-1 < cVar4);
  FUN_08012ae2(uVar1,0x40);
  FUN_08013e5c(uVar1,0x80,1);
  FUN_0800ad22(10);
  if (param_1 == 0) {
    FUN_08012ae6(uVar1,0x80);
    FUN_0800ad22(5);
    FUN_08012ae6(uVar1,0x40);
    FUN_0800ad22(5);
    FUN_08012ae2(uVar1,0x40);
  }
  else {
    FUN_08012ae2(uVar1,0x80);
    FUN_0800ad22(5);
    FUN_08012ae6(uVar1,0x40);
    FUN_0800ad22(5);
    FUN_08012ae2(uVar1,0x40);
  }
  return uVar3;
}

