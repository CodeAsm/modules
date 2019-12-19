//#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("CodeAsm");
MODULE_LICENSE("GPL");

static char *whom = "world";
static int howmany = 1;
module_param(howmany, int, S_IRUGO);
module_param(whom, charp, S_IRUGO);

static int dummy_init(void)
{
       // pr_debug("Hi\n");
    for( int i = howmany; i>=0;i--)
    printk(KERN_ALERT "Hello %s!\n", whom);   
    
    return 0;
}

static void dummy_exit(void)
{

    //pr_debug("Bye\n");
    for( int i = howmany; i>=0;i--)
    printk(KERN_ALERT "Bye %s!\n", whom);
}

module_init(dummy_init);
module_exit(dummy_exit);

