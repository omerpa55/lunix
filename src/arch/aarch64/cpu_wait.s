.section .text
.global cpu_wait

cpu_wait:
  wfi
  ret
