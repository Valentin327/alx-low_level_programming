#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: null
*/

void more_numbers(void)
{
	char i;
	char j;

	for (i = '0'; i <= '10'; i++)
	{
		for (j = '0'; i <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

