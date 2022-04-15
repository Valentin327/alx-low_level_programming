#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character \
 * Return: no return
*/

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		_putchar('\n');

		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
