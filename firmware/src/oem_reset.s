.syntax unified
.cpu cortex-m4
.thumb

/* V0.29 bytes at 0x080032A0. The reset vector points here.
 * This is not a startup routine. Do not call it from C: the return is
 * pop {r4,r5,r6,pc}, so the caller must have pushed those registers.
 */
.section .rt950_oem, "ax"
.global rt950_oem_reset_bitfield
.type rt950_oem_reset_bitfield, %function
rt950_oem_reset_bitfield:
	add.w r2, r2, r2, lsl #2
	lsls r3, r2
	bics r4, r3
	lsls r1, r2
	orrs r4, r1
	str r4, [r0, #0x2c]
	pop {r4, r5, r6, pc}
.size rt950_oem_reset_bitfield, .-rt950_oem_reset_bitfield
