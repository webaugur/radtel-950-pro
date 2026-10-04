/**
 * @brief fun_0801c6a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c6a8, Ghidra name FUN_0801c6a8, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c6a8(void)

{
  int iVar1;
  
  iVar1 = DAT_0801c6f8;
  (**(code **)(DAT_0801c6f8 + 8))(0x37,0x9d1f);
  FUN_0801c150(0);
  (**(code **)(iVar1 + 8))(0x47,0x6142);
  FUN_0801b910(*(undefined4 *)(iVar1 + 0x18));
  FUN_0801c03c();
  FUN_08007c50();
  FUN_0801b8d0();
  FUN_0801c548(*(undefined1 *)(iVar1 + 0x26));
  FUN_0801c150(2);
  FUN_0801be60();
  FUN_0801b6c4();
                    /* WARNING: Could not recover jumptable at 0x0801c53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0801c544 + -4))
            (0x36,*(undefined2 *)(&stack0xfffffff8 + ((uint)*(byte *)(DAT_0801c544 + 0x17) % 3) * 2)
            );
  return;
}

