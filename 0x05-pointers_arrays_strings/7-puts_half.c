#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: parameter to check
 * Return: no return
 */
void puts_half(char *str)
{
	int i, j, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = (len / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (j = ((len - 1) / 2); j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}

