/**
 * @brief fun_0803add2
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803add2, Ghidra name FUN_0803add2, 164 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0803add2(void)

{
  int *unaff_r4;
  int unaff_r5;
  char unaff_r6;
  
  do {
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *(char *)(unaff_r5 + 0xe) = unaff_r6;
    *unaff_r4 = (int)unaff_r4 * 0x2000000 - unaff_r5;
    *(undefined4 *)((int)(unaff_r4 + 1) >> 8) = 0;
    ((undefined4 *)((int)(unaff_r4 + 1) >> 8))[1] = unaff_r5;
    unaff_r4 = (int *)&Reserved3;
    unaff_r6 = unaff_r6 + -0x18;
  } while( true );
}

