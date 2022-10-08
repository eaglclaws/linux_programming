#include <linux/syscalls.h>

SYSCALL_DEFINE0(evergreen)
{
	int i;
	printk("   *\n" \
	       " *****\n" \
	       "  * *\n");
	printk("   *\n");
	for (i = 0; i < 4; i++) {
		printk("  ***\n");
		printk(" *****\n");
		printk("*******\n");
	}
	printk("  ***\n  ***\n");
	return 0;
}
