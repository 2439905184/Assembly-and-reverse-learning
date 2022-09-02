	.file	"origin.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "title\0"
.LC1:
	.ascii "cracked!\0"
.LC2:
	.ascii "crack failed!\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$64, -4(%rbp)
	cmpl	$128, -4(%rbp)
	jne	.L2
	movl	$0, %r9d
	leaq	.LC0(%rip), %r8
	leaq	.LC1(%rip), %rdx
	movl	$0, %ecx
	movq	__imp_MessageBoxA(%rip), %rax
	call	*%rax
	jmp	.L3
.L2:
	movl	$0, %r9d
	leaq	.LC0(%rip), %r8
	leaq	.LC2(%rip), %rdx
	movl	$0, %ecx
	movq	__imp_MessageBoxA(%rip), %rax
	call	*%rax
.L3:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 4.9.2"
