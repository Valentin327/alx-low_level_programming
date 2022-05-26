#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function that the length
 * of a string
 * @b: string to check the length
 *
 * Return: the length of string
 */
unsigned int _strlen(const char *b)
{
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
		;
	return (i);
}

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int
 * @b: string to check
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int i = 0;
	unsigned int length;
	int c;

	length = _strlen(b);

	for (c = length - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}

		if (b[c] == '1')
		{
			i += j;
		}

		j *= 2;
	}
	return (i);
}
