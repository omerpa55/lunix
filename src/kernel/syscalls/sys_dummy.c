#include <compiler.h>
#include <syscall.h>
#include <types.h>
#include <errno.h>

SYSCALL_DEFINE(sys_dummy) {
  UNUSED(arg1); UNUSED(arg2); UNUSED(arg3);
  UNUSED(arg4); UNUSED(arg5); UNUSED(arg6);

  return -ENOSYS;
}
