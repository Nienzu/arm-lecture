	.syntax unified
	.arch armv7-a
	.text
	.align 2
	.thumb
	.thumb_func

	.global fibonacci
	.type fibonacci, function

fibonacci:
	mov r1, #0
	mov r2, #1
.L3:
	subs r0, r0, #1
	add r3, r1, r2
	mov r1, r2
	mov r2, r3
	bgt .L3

	mov r0, r1
	bx lr

	@ END CODE MODIFICATION

	.size fibonacci, .-fibonacci
	.end
