#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter to reverse
 * Return: no return
 */
void print_rev(char *s)
{
	int len, i, j;
	int i = 0;

	while (s[i] != '\0')
	{

		i++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

