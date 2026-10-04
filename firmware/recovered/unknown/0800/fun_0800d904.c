/**
 * @brief fun_0800d904
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d904, Ghidra name FUN_0800d904, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d904(uint param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined1 unaff_r6;
  int unaff_r7;
  int unaff_r8;
  undefined1 unaff_r9;
  int unaff_r10;
  
code_r0x0800d904:
  if (param_1 != 0) {
    unaff_r4 = 1;
  }
LAB_0800d894:
  if (unaff_r4 != 0) {
    FUN_0801c150(4);
    FUN_0801c3b0(1);
    FUN_080207ec(9);
  }
  *(undefined1 *)(unaff_r5 + 0x11) = 2;
  do {
    if (*(char *)(unaff_r5 + 0x14) == '\0') {
      thunk_FUN_0801c4d0(*(undefined2 *)(DAT_0800d938 + 10 + (uint)*(byte *)(unaff_r5 + 0x13) * 4),
                         *(undefined2 *)
                          (DAT_0800d938 + 10 + (uint)*(byte *)(unaff_r5 + 0x13) * 4 + 2));
      if (4 < *(byte *)(unaff_r7 + 7)) {
        *(undefined1 *)(unaff_r7 + 7) = unaff_r9;
      }
      *(undefined2 *)(unaff_r5 + 0x16) =
           *(undefined2 *)(unaff_r10 + (uint)*(byte *)(unaff_r7 + 7) * 2);
      *(undefined1 *)(unaff_r5 + 0x14) = 1;
    }
    else {
      thunk_FUN_0801c4d0(0);
      if (4 < *(byte *)(unaff_r7 + 8)) {
        *(undefined1 *)(unaff_r7 + 8) = unaff_r9;
      }
      *(undefined2 *)(unaff_r5 + 0x16) =
           *(undefined2 *)(unaff_r10 + (uint)*(byte *)(unaff_r7 + 8) * 2);
      *(undefined1 *)(unaff_r5 + 0x14) = unaff_r6;
      bVar2 = *(char *)(unaff_r5 + 0x12) + 1;
      *(byte *)(unaff_r5 + 0x12) = bVar2;
      cVar1 = *(char *)(unaff_r5 + (uint)bVar2);
      *(char *)(unaff_r5 + 0x13) = cVar1;
      if ((cVar1 == -1) || (0xf < bVar2)) {
        *(undefined1 *)(unaff_r5 + 0x11) = 3;
        *(undefined1 *)(unaff_r5 + 0x12) = unaff_r6;
        *(undefined2 *)(unaff_r5 + 0x16) = 10;
        FUN_080207ec();
        FUN_0801c6fc();
        FUN_0801c3b0(0);
        FUN_0801aba4(0);
      }
    }
    while( true ) {
      do {
        cVar1 = *(char *)(unaff_r5 + 0x11);
        if (cVar1 == '\0') {
          return;
        }
      } while (*(short *)(unaff_r5 + 0x16) != 0);
      if (cVar1 == '\x01') {
        *(undefined1 *)(unaff_r5 + 0x14) = unaff_r6;
        *(undefined1 *)(unaff_r5 + 0x12) = unaff_r6;
        FUN_0801aba4(1);
        *(undefined1 *)(unaff_r5 + 0x13) =
             *(undefined1 *)(unaff_r5 + (uint)*(byte *)(unaff_r5 + 0x12));
        unaff_r4 = 0;
        iVar3 = FUN_08008aa8();
        if (iVar3 != 1) {
          if ((int)((uint)*(byte *)(unaff_r8 + 9) << 0x1e) < 0) {
            unaff_r4 = 1;
          }
          goto LAB_0800d894;
        }
        param_1 = (uint)*(byte *)(unaff_r8 + 0x12);
        goto code_r0x0800d904;
      }
      if (cVar1 == '\x02') break;
      *(undefined1 *)(unaff_r5 + 0x11) = unaff_r6;
      *(undefined1 *)(unaff_r5 + 0x14) = unaff_r6;
    }
  } while( true );
}

