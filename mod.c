//#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");

static int dummy_init(void)
{
       // pr_debug("Hi\n");
    printk(KERN_ALERT "Hello World!\n");   
    return 0;
}

static void dummy_exit(void)
{

    //pr_debug("Bye\n");
    printk(KERN_ALERT "Bye everyone!\n");
}

module_init(dummy_init);
module_exit(dummy_exit);

