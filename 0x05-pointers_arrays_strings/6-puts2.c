#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string
 * @str: parameter to print
 * Return: no return
 */
void puts2(char *str)
{
	int i, j, len;

	len = 0;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

