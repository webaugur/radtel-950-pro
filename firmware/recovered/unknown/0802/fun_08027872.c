/**
 * @brief fun_08027872
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08027872, Ghidra name FUN_08027872, 110 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08027872(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_08028ff0();
  if (((int)(0x7ff00000 - ((uint)((int)uVar1 != 0) | (uint)((ulonglong)uVar1 >> 0x20) & 0x7fffffff))
       < 0) && (-1 < (int)(0x7ff00000 - (param_2 & 0x7fffffff | (uint)(param_1 != 0))))) {
    FUN_080011c4(1);
  }
  return uVar1;
}

