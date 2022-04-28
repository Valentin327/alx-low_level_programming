#include "main.h"
/**
 * _puts_recursion - function that print a string
 * @s : string to print
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		printf("%c\n", *s);
	}
	_puts_recursion(*s);
}
