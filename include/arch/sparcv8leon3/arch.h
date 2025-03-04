/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * Architecture dependent part (arch/sparcv8leon3)
 *
 * Copyright 2022 Phoenix Systems
 * Author: Lukasz Leczkowski
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _LIBPHOENIX_ARCH_SPARCV8LEON3_ARCH_H_
#define _LIBPHOENIX_ARCH_SPARCV8LEON3_ARCH_H_

#define __BYTE_ORDER __BIG_ENDIAN

#define __ARCH_STDINT    <arch/sparcv8leon3/stdint.h>
#define __ARCH_LIMITS    <arch/sparcv8leon3/limits.h>
#define __ARCH_SYS_TYPES <arch/sparcv8leon3/types.h>

#define __MEMCPY
#define __MEMCMP
#define __MEMSET
#define __STRLEN
#define __STRCMP
#define __STRNCMP
#define __STRCPY
#define __STRNCPY

#define _PAGE_SIZE 0x200
#define SIZE_PAGE  _Pragma("GCC warning \"'SIZE_PAGE' is deprecated. Use _PAGE_SIZE from arch.h or PAGE_SIZE from limits.h (POSIX only)\"") _PAGE_SIZE

#define __LIBPHOENIX_ARCH_TLS_SUPPORTED

#endif
