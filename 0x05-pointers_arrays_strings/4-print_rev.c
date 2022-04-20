#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter to reverse
 * Return: no return
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

