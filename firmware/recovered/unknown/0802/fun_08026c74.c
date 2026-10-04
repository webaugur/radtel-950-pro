/**
 * @brief fun_08026c74
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026c74, Ghidra name FUN_08026c74, 218 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026c74(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  
  uVar1 = ram0x08026d50;
  FUN_08012ae6(ram0x08026d50,0x80);
  FUN_08012ae6(uVar1,0x40);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x80);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x40);
  FUN_0800ad22(5);
  uVar2 = param_1 & 0xfe | param_2 & 1;
  cVar3 = '\a';
  do {
    FUN_08012ae2(uVar1,0x40);
    FUN_0800ad22(2);
    if ((int)(uVar2 << 0x18) < 0) {
      FUN_08012ae6(uVar1,0x80);
    }
    else {
      FUN_08012ae2(uVar1,0x80);
    }
    uVar2 = (uVar2 & 0x7f) << 1;
    FUN_0800ad22(2);
    FUN_08012ae6(uVar1,0x40);
    FUN_0800ad22(5);
    cVar3 = cVar3 + -1;
  } while (-1 < cVar3);
  FUN_08012ae2(uVar1,0x40);
  FUN_08012ae6(uVar1,0x80);
  FUN_0800ad22(5);
  FUN_08013e5c(uVar1,0x80,0);
  FUN_0800ad22(10);
  FUN_08012ae6(uVar1,0x40);
  FUN_0800ad22(5);
  FUN_08012ae2(uVar1,0x40);
  FUN_08013e5c(uVar1,0x80,1);
  FUN_0800ad22(10);
  return;
}

