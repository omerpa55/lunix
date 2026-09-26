/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (c) 2026 Omer PALA
 */

#include <uefi.h>

extern void qemu_uart_puts(const char *s);

int main(int argc, char *argv[]) {
  qemu_uart_puts("Test");

  while (1) {
    asm volatile("wfi");
  }
}
