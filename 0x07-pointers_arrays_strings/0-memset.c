#include "main.h"
/**
 * _memset - function that fill memory with a constante byte
 * @s: array to fill
 * @b: byte for filling
 * @n: the number of byte
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
