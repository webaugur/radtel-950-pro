/**
 * @brief fun_0801a9a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a9a4, Ghidra name FUN_0801a9a4, 372 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a9a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0801ab28;
  uVar1 = DAT_0801ab24;
  if (param_2 == 1) {
    if ((*(char *)(DAT_0801ab20 + 0x4a) == -0x5b) && (*(char *)(DAT_0801ab20 + 1) != '\x02')) {
      FUN_0801b70c(0);
    }
    if (param_1 != 0) {
      if ((param_1 == 1) || (param_1 == 3)) {
        FUN_08012ae2(uVar1,0x2000);
        FUN_08012ae2(uVar2,1);
        FUN_08012ae6(uVar1,0x1000);
        return;
      }
      if (param_1 == 4) {
        FUN_08012ae2(uVar1,0x1000);
        FUN_08012ae2(uVar2,1);
        FUN_08012ae6(uVar1,0x2000);
        return;
      }
    }
    FUN_08012ae2(uVar1,0x2000);
    FUN_08012ae2(uVar1,0x1000);
    FUN_08012ae6(uVar2,1);
    return;
  }
  if (param_2 == 2) {
    if (*(char *)(DAT_0801ab20 + 0x4a) == -0x5b) {
      FUN_0801b70c(0);
    }
    switch(param_1) {
    case 0:
    case 2:
      FUN_08012ae2(uVar1,0x80);
      FUN_08012ae6(uVar2,2);
      FUN_08012ae2(uVar1,0x4000);
      return;
    case 1:
    case 3:
      FUN_08012ae2(uVar2,2);
      FUN_08012ae6(uVar1,0x80);
      FUN_08012ae2(uVar1,0x4000);
      return;
    case 4:
      FUN_08012ae2(uVar1,0x80);
      FUN_08012ae2(uVar2,2);
      FUN_08012ae6(uVar1,0x4000);
      return;
    default:
      FUN_08012ae2(uVar1,0x80);
      FUN_08012ae2(uVar2,2);
      FUN_08012ae2(uVar1,0x4000);
      return;
    }
  }
  if (param_2 == 3) {
    FUN_08012ae2(DAT_0801ab24,0x2000);
    FUN_08012ae2(uVar1,0x1000);
    FUN_08012ae2(uVar2,1);
    return;
  }
  FUN_08012ae2(DAT_0801ab24,0x2000);
  FUN_08012ae2(uVar1,0x80);
  FUN_08012ae2(uVar2,2);
  FUN_08012ae2(uVar1,0x1000);
  FUN_08012ae2(uVar2,1);
  FUN_08012ae2(uVar1,0x4000);
  return;
}

