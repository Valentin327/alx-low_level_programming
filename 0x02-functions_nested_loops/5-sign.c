#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 * @n: the number to check
 * Return: 1 if is greater than 0, 0 if is zero and -1 otherwise
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
