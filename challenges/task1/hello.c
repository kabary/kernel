#include <linux/module.h>
 
 
 
/* Defines the license for this LKM */
 
MODULE_LICENSE("GPL");
 
 
 
/* Init function called on module entry */
 
int my_module_init( void )
 
{
 
  printk(KERN_DEBUG "Hello World\n");
 
 
 
  return 0;
 
}
 
 
 
/* Cleanup function called on module exit */
 
void my_module_cleanup( void )
 
{
 
  printk(KERN_DEBUG "Bye World\n");
 
 
 
  return;
 
}
 
 
 
/* Declare entry and exit functions */
 
module_init( my_module_init );
 
module_exit( my_module_cleanup );
