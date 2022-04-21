#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: parameter to print
 * Return: no return
 */
void puts2(char *str)
{
	int i, j, len;

	len = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = 0; j <= len; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
}

