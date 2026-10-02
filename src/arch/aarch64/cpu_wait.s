/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (c) 2026 Omer PALA
 *
 * Lunix - A unix-like kernel
 */

.section .text
.global cpu_wait

cpu_wait:
  wfi
  ret
