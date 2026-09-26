.section .text
.globl cpu_wait

cpu_wait:
  hlt
  ret
