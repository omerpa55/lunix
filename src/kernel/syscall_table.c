/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (c) 2026 Omer PALA
 *
 * Lunix - a unix-like kernel
 *
 * Syscall table for lunix kernel
 */

#include <syscall.h>
#include <types.h>

extern SYSCALL_DEFINE(sys_dummy);

syscall_func_t syscall_table[SYS_MAX] = {
  [SYS_DUMMY] = sys_dummy
};
