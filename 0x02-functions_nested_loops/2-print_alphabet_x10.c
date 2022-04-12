#include "main.h"
/**
 * 10xalphabet-prints 10 times the alphabet,in lowercase,followed by a new line
 *
*/
void print_alphabet_x10(void)
{
	int i;
	char j = 'a';

	for (i = 1; i <= 10; i++)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
