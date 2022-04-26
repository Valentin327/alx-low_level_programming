#include "main.h"
/**
 * string_toupper - function toupper
 * @a: a pointer
 * Return: a pointer in return
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}

		i++;
	}
	return (a);
}
