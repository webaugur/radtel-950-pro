/**
 * @brief fun_0800d830
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800d830, Ghidra name FUN_0800d830, 212 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800d830(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar4 = DAT_0800d940;
  iVar3 = DAT_0800d93c;
  local_30 = *(undefined4 *)(DAT_0800d938 + 0x68);
  uStack_2c = *(undefined4 *)(DAT_0800d938 + 0x6c);
  local_28 = *(undefined4 *)(DAT_0800d938 + 0x70);
  iVar7 = DAT_0800d940 + 10;
LAB_0800d866:
  do {
    do {
      cVar1 = *(char *)(iVar4 + 0x1b);
      if (cVar1 == '\0') {
        return;
      }
    } while (*(short *)(iVar4 + 0x20) != 0);
    if (cVar1 == '\x01') {
      *(undefined1 *)(iVar4 + 0x1e) = 0;
      *(undefined1 *)(iVar4 + 0x1c) = 0;
      FUN_0801aba4(1);
      *(undefined1 *)(iVar4 + 0x1d) = *(undefined1 *)(iVar7 + (uint)*(byte *)(iVar4 + 0x1c));
      bVar2 = false;
      iVar6 = FUN_08008aa8();
      if (iVar6 == 1) {
        if (*(char *)(iVar3 + 0x12) != '\0') {
          bVar2 = true;
        }
      }
      else if ((int)((uint)*(byte *)(iVar3 + 9) << 0x1e) < 0) {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_0801c150(4);
        FUN_0801c3b0(1);
        FUN_080207ec(9);
      }
      *(undefined1 *)(iVar4 + 0x1b) = 2;
    }
    else if (cVar1 != '\x02') {
      *(undefined1 *)(iVar4 + 0x1b) = 0;
      *(undefined1 *)(iVar4 + 0x1e) = 0;
      goto LAB_0800d866;
    }
    if (*(char *)(iVar4 + 0x1e) == '\0') {
      thunk_FUN_0801c4d0(*(undefined2 *)(DAT_0800d938 + 10 + (uint)*(byte *)(iVar4 + 0x1d) * 4),
                         *(undefined2 *)(DAT_0800d938 + 10 + (uint)*(byte *)(iVar4 + 0x1d) * 4 + 2))
      ;
      if (4 < *(byte *)(iVar4 + 7)) {
        *(undefined1 *)(iVar4 + 7) = 4;
      }
      *(undefined2 *)(iVar4 + 0x20) =
           *(undefined2 *)((int)&local_30 + (uint)*(byte *)(iVar4 + 7) * 2);
      *(undefined1 *)(iVar4 + 0x1e) = 1;
    }
    else {
      thunk_FUN_0801c4d0(0);
      if (4 < *(byte *)(iVar4 + 8)) {
        *(undefined1 *)(iVar4 + 8) = 4;
      }
      *(undefined2 *)(iVar4 + 0x20) =
           *(undefined2 *)((int)&local_30 + (uint)*(byte *)(iVar4 + 8) * 2);
      *(undefined1 *)(iVar4 + 0x1e) = 0;
      bVar5 = *(char *)(iVar4 + 0x1c) + 1;
      *(byte *)(iVar4 + 0x1c) = bVar5;
      cVar1 = *(char *)(iVar7 + (uint)bVar5);
      *(char *)(iVar4 + 0x1d) = cVar1;
      if ((cVar1 == -1) || (0xf < bVar5)) {
        *(undefined1 *)(iVar4 + 0x1b) = 3;
        *(undefined1 *)(iVar4 + 0x1c) = 0;
        *(undefined2 *)(iVar4 + 0x20) = 10;
        FUN_080207ec();
        FUN_0801c6fc();
        FUN_0801c3b0(0);
        FUN_0801aba4(0);
      }
    }
  } while( true );
}

