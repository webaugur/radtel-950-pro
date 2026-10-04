/**
 * @brief fun_0801f274
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801f274, Ghidra name FUN_0801f274, 126 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_0801f274(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar2 = FUN_0801362c(&uStack_10);
  iVar1 = DAT_0801f2f4;
  if (iVar2 != 0) {
    *(undefined2 *)(DAT_0801f2f4 + 9) = 4;
    FUN_08014718(&uStack_10,&local_18);
    if (((((local_14 == 0x50) || (local_14 == 0x52)) || (local_14 == 0x51)) ||
        ((local_14 == 0x53 || (local_14 == 0x54)))) || (local_14 == 0x33)) {
      FUN_0800a624(&local_18,&local_18);
    }
    if ((*(char *)(iVar1 + 99) != '\0') && (local_14 - 0x10U < 0x90)) {
      FUN_080073a4(0);
      local_18 = 0;
      local_14 = 0xff;
    }
    if (local_14 != 0xff) {
      FUN_08023aa0(&local_18);
      FUN_0801b320();
    }
    FUN_08014964();
    FUN_0801b3fc();
  }
  return CONCAT44(local_14,local_18);
}

