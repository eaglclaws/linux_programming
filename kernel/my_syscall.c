#include <linux/syscalls.h>

SYSCALL_DEFINE0(mycall)
{
	printk("Hello Linux kernel!\n");
	return 0;
}
