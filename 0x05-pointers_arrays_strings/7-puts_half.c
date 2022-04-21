#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 *@str: parameter to check 
 * Return: no return 
 */
void puts_half(char *str)
{
	int i, j, len, half;

	i = 0;
	len = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	half = len / 2;

	for (j = half + 1; j <= len; j++)
	{
		_putchar(str[j]);
	}
}

