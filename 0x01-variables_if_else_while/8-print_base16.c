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
	int numbers;
	char alpha16 = 'a';

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers);
	}
	while (alpha16 <= 'f')
	{
		putchar(alpha16);
	}
	putchar('\n');
	return (0);
}
