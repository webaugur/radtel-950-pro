/**
 * @brief fun_0800c0d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c0d8, Ghidra name FUN_0800c0d8, 100 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800c0d8(uint param_1)

{
  undefined1 auStack_18 [20];
  
  if (param_1 < 0xd3) {
    if (param_1 < 0x6a) {
      FUN_08000850(auStack_18,s_D_03oN_0800c14c,*(undefined2 *)(DAT_0800c13c + (param_1 - 1) * 2));
    }
    else {
      FUN_08000850(auStack_18,s_D_03oI_0800c140,*(undefined2 *)(DAT_0800c13c + (param_1 - 0x6a) * 2)
                  );
    }
  }
  else {
    FUN_08000850(auStack_18,s__d__dHz_0800c158,param_1 / 10,param_1 % 10);
  }
  FUN_080203e4(0x14,0);
  FUN_08000838(s_____s_0800c164,0x10,0x10,auStack_18);
  FUN_080203e4(0x20,0);
  return;
}

