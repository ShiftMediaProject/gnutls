%ifidn __OUTPUT_FORMAT__,obj
section	code	use32 class=code align=64
%elifidn __OUTPUT_FORMAT__,win32
%ifndef __YASM_VER__
$@feat.00 equ 1
%endif
section	.text	code align=64
%else
section	.text	code
%endif
global	_gnutls_cpuid
align	16
_gnutls_cpuid:
L$_gnutls_cpuid_begin:
	push	ebp
	mov	ebp,esp
	sub	esp,12
	mov	DWORD [esp],ebx
	mov	eax,DWORD [8+ebp]
	mov	DWORD [4+esp],esi
	mov	DWORD [8+esp],edi
	push	ebx
	cpuid
	mov	edi,ebx
	pop	ebx
	mov	esi,edx
	mov	edx,DWORD [12+ebp]
	mov	DWORD [edx],eax
	mov	eax,DWORD [16+ebp]
	mov	DWORD [eax],edi
	mov	eax,DWORD [20+ebp]
	mov	DWORD [eax],ecx
	mov	eax,DWORD [24+ebp]
	mov	DWORD [eax],esi
	mov	ebx,DWORD [esp]
	mov	esi,DWORD [4+esp]
	mov	edi,DWORD [8+esp]
	mov	esp,ebp
	pop	ebp
	ret
global	_gnutls_have_cpuid
align	16
_gnutls_have_cpuid:
L$_gnutls_have_cpuid_begin:
	pushfd
	pop	eax
	or	eax,2097152
	push	eax
	popfd
	pushfd
	pop	eax
	and	eax,2097152
	ret
db	67,80,85,73,68,32,102,111,114,32,120,56,54,0
