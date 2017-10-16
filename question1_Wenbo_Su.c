/*
 *File: question1_Wenbo_Su.c
 *Purpose: To demostrate a simple kernel module.
 */

#include <linux/kernel.h>  /* for KERN_INFO */
#include <linux/module.h> /* for all kernel modules */


int init_module( void ) 
{
 printk( KERN_INFO "Hello from Wenbo Su!\n" );
 return 0;
}

void cleanup_module( void )
{
 printk( KERN_INFO "Goodbye from Wenbo Su!\n" );
 return;
}
