/**
 * @brief fun_0800e528
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800e528, Ghidra name FUN_0800e528, 150 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800e528(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_0800e5c0;
  if (*(char *)(DAT_0800e5c0 + 1) == '\0') {
    *(undefined1 *)(DAT_0800e5c0 + 1) = 1;
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(DAT_0800e5c0 + 5) * 0xc + 8 + *(int *)(DAT_0800e5c0 + 10));
    if (*(char *)(DAT_0800e5c0 + 1) == '\x01') {
      if (*(uint *)(DAT_0800e5c4 + 8) - 1 <= *(uint *)(DAT_0800e5c4 + 4)) {
        FUN_080073a4(7);
        return;
      }
      FUN_0801469c(*(undefined1 *)(*piVar2 + (uint)*(byte *)(DAT_0800e5c0 + 3)));
      FUN_0801469c(*(undefined1 *)
                    (*(int *)((uint)*(byte *)(iVar1 + 5) * 0xc + 8 + *(int *)(iVar1 + 10)) +
                     (uint)*(byte *)(iVar1 + 3) + 1));
    }
    else {
      if (*(uint *)(DAT_0800e5c4 + 8) <= *(uint *)(DAT_0800e5c4 + 4)) {
        FUN_080073a4(7);
        return;
      }
      FUN_0801469c(*(undefined1 *)(*piVar2 + (uint)*(byte *)(DAT_0800e5c0 + 3)));
    }
    FUN_0800a178();
    FUN_08020324(2);
  }
  FUN_0800c35c(0);
  FUN_0801750c();
  return;
}

