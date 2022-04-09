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
	int numbers = '0';
	char alpha16 = 'a';

	while (alpha16 <= '0')
	{
		while (numbers <= '9')
		{
			putchar(numbers);
			numbers++;
		}
	putchar(alpha16);
	alpha16++;
	}
	putchar('\n');
	return (0);
}
