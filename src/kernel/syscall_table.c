#include <syscall.h>
#include <types.h>

extern SYSCALL_DEFINE(sys_dummy);

syscall_func_t syscall_table[SYS_MAX] = {
  [SYS_DUMMY] = sys_dummy
};
