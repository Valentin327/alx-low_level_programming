#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char numbers = '0';
	char alpha16 = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (alpha16 <= 'f')
	{
		putchar(alpha16);
		alpha16++;
	}
	putchar('\n');
	return (0);
}
