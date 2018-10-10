default	rel
%define XMMWORD
section	.text code align=64

global	gnutls_cpuid

ALIGN	16
gnutls_cpuid:
	mov	QWORD[8+rsp],rdi	;WIN64 prologue
	mov	QWORD[16+rsp],rsi
	mov	rax,rsp
$L$SEH_begin_gnutls_cpuid:
	mov	rdi,rcx
	mov	rsi,rdx
	mov	rdx,r8
	mov	rcx,r9
	mov	r8,QWORD[40+rsp]
	mov	r9,QWORD[48+rsp]


	push	rbp
	mov	rbp,rsp
	push	rbx
	mov	DWORD[((-12))+rbp],edi
	mov	QWORD[((-24))+rbp],rsi
	mov	QWORD[((-32))+rbp],rdx
	mov	QWORD[((-40))+rbp],rcx
	mov	QWORD[((-48))+rbp],r8
	mov	eax,DWORD[((-12))+rbp]
	mov	DWORD[((-60))+rbp],eax
	mov	eax,DWORD[((-60))+rbp]
	cpuid
	mov	DWORD[((-56))+rbp],edx
	mov	esi,ecx
	mov	DWORD[((-52))+rbp],eax
	mov	rax,QWORD[((-24))+rbp]
	mov	edx,DWORD[((-52))+rbp]
	mov	DWORD[rax],edx
	mov	rax,QWORD[((-32))+rbp]
	mov	DWORD[rax],ebx
	mov	rax,QWORD[((-40))+rbp]
	mov	DWORD[rax],esi
	mov	rax,QWORD[((-48))+rbp]
	mov	ecx,DWORD[((-56))+rbp]
	mov	DWORD[rax],ecx
	pop	rbx
	leave
	mov	rdi,QWORD[8+rsp]	;WIN64 epilogue
	mov	rsi,QWORD[16+rsp]
	DB	0F3h,0C3h		;repret
$L$SEH_end_gnutls_cpuid:
