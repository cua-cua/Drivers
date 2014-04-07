/* td.c – Template for a Driver*/
#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
 
static int __init td_init(void) /* Constructor */
{
    printk(KERN_INFO "td registered");
    return 0;
}
 
static void __exit td_exit(void) /* Destructor */
{
    printk(KERN_INFO "td unregistered");
}
 
module_init(td_init);
module_exit(td_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("template");
MODULE_DESCRIPTION("Our First Driver");
