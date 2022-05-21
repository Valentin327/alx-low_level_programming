#include<stdio.h>
/**
 * myStartupFun - function that execute
 * before the main
 * Reteturn: no return
 */
void myStartupFun(void) __attribute__ ((constructor));

void myCleanupFun(void) __attribute__ ((destructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
