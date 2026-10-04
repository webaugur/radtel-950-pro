/**
 * @brief fun_0801c548
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c548, Ghidra name FUN_0801c548, 174 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c548(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0801c5f8;
  uVar2 = (**(code **)(DAT_0801c5f8 + 4))(0x31);
  if ((((*DAT_0801c5fc != '\x06') || (*pcVar1 != '\0')) &&
      ((DAT_0801c5fc[1] != '\x06' || (*pcVar1 != '\x01')))) &&
     (DAT_0801c604 <= (uint)(*(int *)(DAT_0801c5f8 + 0xc) + DAT_0801c600))) {
    if (param_1 != 0) {
      if (9 < param_1) {
        param_1 = 9;
      }
      (**(code **)(pcVar1 + 8))(0x31,uVar2 | 2);
      (**(code **)(pcVar1 + 8))(0x71,*(undefined2 *)(DAT_0801c608 + (param_1 - 1) * 2));
      uVar2 = (**(code **)(pcVar1 + 4))(0x40);
                    /* WARNING: Could not recover jumptable at 0x0801c5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pcVar1 + 8))(0x40,uVar2 & 0xf000 | 0x50a);
      return;
    }
    (**(code **)(pcVar1 + 8))(0x31,uVar2 & 0xfffffffd);
    uVar2 = (**(code **)(pcVar1 + 4))(0x40);
                    /* WARNING: Could not recover jumptable at 0x0801c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pcVar1 + 8))(0x40,uVar2 & 0xf000 | 0x50a);
    return;
  }
  (**(code **)(pcVar1 + 8))(0x31,uVar2 & 0xfffffffd);
  uVar2 = (**(code **)(pcVar1 + 4))(0x40);
                    /* WARNING: Could not recover jumptable at 0x0801c59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pcVar1 + 8))(0x40,uVar2 & 0xf000 | 0x50a);
  return;
}

