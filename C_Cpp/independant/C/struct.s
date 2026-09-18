	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.intel_syntax noprefix
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 80
	mov	eax, 6
	mov	edi, eax
	mov	dword ptr [rbp - 4], 0
	mov	dword ptr [rbp - 24], 32
	call	_malloc
	mov	rdx, -1
	mov	qword ptr [rbp - 16], rax
	mov	rdi, qword ptr [rbp - 16]
	lea	rsi, [rip + L_.str]
	call	___strcpy_chk
	mov	rsi, qword ptr [rbp - 16]
	lea	rdi, [rip + L_.str.1]
	mov	qword ptr [rbp - 40], rax ## 8-byte Spill
	mov	al, 0
	call	_printf
	mov	esi, dword ptr [rbp - 24]
	lea	rdi, [rip + L_.str.2]
	mov	dword ptr [rbp - 44], eax ## 4-byte Spill
	mov	al, 0
	call	_printf
	mov	esi, 7
                                        ## kill: def $rsi killed $esi
	lea	rdx, [rbp - 24]
	mov	qword ptr [rbp - 32], rdx
	mov	rdx, qword ptr [rbp - 32]
	mov	dword ptr [rdx], 33
	mov	rdx, qword ptr [rbp - 32]
	mov	rdi, qword ptr [rdx + 8]
	mov	dword ptr [rbp - 48], eax ## 4-byte Spill
	call	_realloc
	mov	rdx, -1
	mov	rsi, qword ptr [rbp - 32]
	mov	qword ptr [rsi + 8], rax
	mov	rax, qword ptr [rbp - 32]
	mov	rdi, qword ptr [rax + 8]
	lea	rsi, [rip + L_.str.3]
	call	___strcpy_chk
	mov	rsi, qword ptr [rbp - 16]
	lea	rdi, [rip + L_.str.4]
	mov	qword ptr [rbp - 56], rax ## 8-byte Spill
	mov	al, 0
	call	_printf
	mov	esi, dword ptr [rbp - 24]
	lea	rdi, [rip + L_.str.5]
	mov	dword ptr [rbp - 60], eax ## 4-byte Spill
	mov	al, 0
	call	_printf
	mov	esi, 8
                                        ## kill: def $rsi killed $esi
	mov	rdx, qword ptr [rbp - 32]
	mov	dword ptr [rdx], 34
	mov	rdx, qword ptr [rbp - 32]
	mov	rdi, qword ptr [rdx + 8]
	mov	dword ptr [rbp - 64], eax ## 4-byte Spill
	call	_realloc
	mov	rdx, -1
	mov	rsi, qword ptr [rbp - 32]
	mov	qword ptr [rsi + 8], rax
	mov	rax, qword ptr [rbp - 32]
	mov	rdi, qword ptr [rax + 8]
	lea	rsi, [rip + L_.str.6]
	call	___strcpy_chk
	mov	rsi, qword ptr [rbp - 16]
	lea	rdi, [rip + L_.str.7]
	mov	qword ptr [rbp - 72], rax ## 8-byte Spill
	mov	al, 0
	call	_printf
	mov	esi, dword ptr [rbp - 24]
	lea	rdi, [rip + L_.str.8]
	mov	dword ptr [rbp - 76], eax ## 4-byte Spill
	mov	al, 0
	call	_printf
	xor	esi, esi
	mov	dword ptr [rbp - 80], eax ## 4-byte Spill
	mov	eax, esi
	add	rsp, 80
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Brian"

L_.str.1:                               ## @.str.1
	.asciz	"\nhere is the regular persons name: %s\n"

L_.str.2:                               ## @.str.2
	.asciz	"here is the regular persons age: %i\n\n"

L_.str.3:                               ## @.str.3
	.asciz	"Brian!"

L_.str.4:                               ## @.str.4
	.asciz	"here is the pointer persons name: %s\n"

L_.str.5:                               ## @.str.5
	.asciz	"here is the pointer persons age: %i\n\n"

L_.str.6:                               ## @.str.6
	.asciz	"Brian!!"

L_.str.7:                               ## @.str.7
	.asciz	"here is the better pointer persons name: %s\n"

L_.str.8:                               ## @.str.8
	.asciz	"here is the better pointer persons age: %i\n\n"


.subsections_via_symbols
