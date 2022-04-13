#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number to find the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n = -n;
	}

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	_putchar(a + '0');

	return (lastDigit);
}

