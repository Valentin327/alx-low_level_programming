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
	int i;
	int j;
	int z;

	for (i = '0'; i <= '9';  i++)
	{
		for (j = (i + 1); i <= '9'; j++)
		{
			for (z = (j + 1); z <= '9'; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);

				if (i != '7' || j != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
