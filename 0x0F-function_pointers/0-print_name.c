#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function that print a name
 * @name: pointer on the name
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
