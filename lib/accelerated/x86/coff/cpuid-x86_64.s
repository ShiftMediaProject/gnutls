#
# Copyright (C) 2011-2013 Free Software Foundation, Inc.
# Copyright (C) 2013 Nikos Mavrogiannopoulos
#
# Author: Nikos Mavrogiannopoulos
#
# This file is part of GnuTLS.
#
# The GnuTLS is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public License
# as published by the Free Software Foundation; either version 2.1 of
# the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
#
# *** This file is auto-generated ***
#
.text	
.globl	gnutls_cpuid
.def	gnutls_cpuid;	.scl 2;	.type 32;	.endef
.p2align	4
gnutls_cpuid:
	movq	%rdi,8(%rsp)
	movq	%rsi,16(%rsp)
	movq	%rsp,%rax
.LSEH_begin_gnutls_cpuid:
	movq	%rcx,%rdi
	movq	%rdx,%rsi
	movq	%r8,%rdx
	movq	%r9,%rcx
	movq	40(%rsp),%r8
	movq	48(%rsp),%r9

	pushq	%rbp
	movq	%rsp,%rbp
	pushq	%rbx
	movl	%edi,-12(%rbp)
	movq	%rsi,-24(%rbp)
	movq	%rdx,-32(%rbp)
	movq	%rcx,-40(%rbp)
	movq	%r8,-48(%rbp)
	movl	-12(%rbp),%eax
	movl	%eax,-60(%rbp)
	movl	-60(%rbp),%eax
	cpuid
	movl	%edx,-56(%rbp)
	movl	%ecx,%esi
	movl	%eax,-52(%rbp)
	movq	-24(%rbp),%rax
	movl	-52(%rbp),%edx
	movl	%edx,(%rax)
	movq	-32(%rbp),%rax
	movl	%ebx,(%rax)
	movq	-40(%rbp),%rax
	movl	%esi,(%rax)
	movq	-48(%rbp),%rax
	movl	-56(%rbp),%ecx
	movl	%ecx,(%rax)
	popq	%rbx
	leave
	movq	8(%rsp),%rdi
	movq	16(%rsp),%rsi
	.byte	0xf3,0xc3
.LSEH_end_gnutls_cpuid:

