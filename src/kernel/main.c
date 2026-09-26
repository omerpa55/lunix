/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (c) 2026 Omer PALA
 */

#include <uefi.h>

int main(void) {
  printf("Hello world\n");

  while (1) {
    asm volatile("wfi");
  }

  return EFI_SUCCESS;
}
