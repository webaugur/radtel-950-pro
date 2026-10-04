/**
 * @brief fun_08000cbc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000cbc, Ghidra name FUN_08000cbc, 126 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08000cbc(undefined4 param_1,code *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint unaff_r4;
  uint uVar5;
  undefined4 *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined4 in_stack_00000004;
  
  while( true ) {
    unaff_r7 = unaff_r7 + 1;
    uVar5 = unaff_r4 | 0x200;
    uVar1 = (*param_2)(param_1);
    if ((unaff_r6 < 1) || (iVar2 = FUN_08001728(uVar1), iVar2 < 0)) break;
    param_2 = (code *)unaff_r5[6];
    unaff_r8 = unaff_r8 * unaff_r9 + iVar2;
    unaff_r6 = unaff_r6 + -1;
    param_1 = in_stack_00000004;
    unaff_r4 = uVar5;
  }
  (*(code *)unaff_r5[7])(in_stack_00000004);
  if ((int)(uVar5 << 0x16) < 0) {
    if ((unaff_r4 & 1) == 0) {
      if ((int)(unaff_r4 << 0x19) < 0) {
        if ((int)(uVar5 << 0x15) < 0) {
          unaff_r8 = -unaff_r8;
        }
        puVar3 = (undefined4 *)*unaff_r5;
        *unaff_r5 = puVar3 + 1;
        piVar4 = (int *)*puVar3;
        if ((int)(uVar5 << 0x14) < 0) {
          *(char *)piVar4 = (char)unaff_r8;
        }
        else if ((int)(unaff_r4 << 0x1c) < 0) {
          *(short *)piVar4 = (short)unaff_r8;
        }
        else {
          *piVar4 = unaff_r8;
        }
      }
      else {
        puVar3 = (undefined4 *)*unaff_r5;
        *unaff_r5 = puVar3 + 1;
        piVar4 = (int *)*puVar3;
        if ((int)(uVar5 << 0x14) < 0) {
          *(char *)piVar4 = (char)unaff_r8;
        }
        else if ((int)(unaff_r4 << 0x1c) < 0) {
          *(short *)piVar4 = (short)unaff_r8;
        }
        else {
          *piVar4 = unaff_r8;
        }
      }
    }
  }
  else {
    unaff_r7 = -2;
  }
  return unaff_r7;
}

