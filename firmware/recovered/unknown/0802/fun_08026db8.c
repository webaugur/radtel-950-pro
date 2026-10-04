/**
 * @brief fun_08026db8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026db8, Ghidra name FUN_08026db8, 156 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026db8(uint param_1)

{
  dword dVar1;
  char cVar2;
  
  dVar1 = DWORD_08026e54;
  cVar2 = '\a';
  do {
    FUN_08012ae2(dVar1,0x40);
    FUN_0800ad22(2);
    if ((int)(param_1 << 0x18) < 0) {
      FUN_08012ae6(dVar1,0x80);
    }
    else {
      FUN_08012ae2(dVar1,0x80);
    }
    param_1 = (param_1 & 0x7f) << 1;
    FUN_0800ad22(2);
    FUN_08012ae6(dVar1,0x40);
    FUN_0800ad22(5);
    cVar2 = cVar2 + -1;
  } while (-1 < cVar2);
  FUN_08012ae2(dVar1,0x40);
  FUN_08012ae6(dVar1,0x80);
  FUN_0800ad22(5);
  FUN_08013e5c(dVar1,0x80,0);
  FUN_0800ad22(10);
  FUN_08012ae6(dVar1,0x40);
  FUN_0800ad22(5);
  FUN_08012ae2(dVar1,0x40);
  FUN_08013e5c(dVar1,0x80,1);
  FUN_0800ad22(10);
  return;
}

