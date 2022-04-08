#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int alphMin = 97;
	int alphMaj = 65;

	while (alphMaj <= 90)
	{
		while (alphMin <= 122)
		{
			putchar(alphMin);
			alphMin++;
		}

		putchar(alphMaj);
		alphMaj++;
	}
	putchar('\n');
	return (0);
}


