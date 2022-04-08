#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int alphMin = 97;

	while (alphMin <= 122)
	{
		if ((alphMin != 101) AND (alphMin != 113))
		{
			putchar(alphMin);
		}
		alphMin++;
	}
	putchar('\n');
	return (0);
}

