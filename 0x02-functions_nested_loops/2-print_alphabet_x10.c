#include "main.h"
/**
 * 10xalphabet-prints 10 times the alphabet,in lowercase,followed by a new line
 *
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
