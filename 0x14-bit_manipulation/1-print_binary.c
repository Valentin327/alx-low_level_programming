#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that print binary
 * representation of a number
 * @n: number to check
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i)? printf("1"): printf("0");
	}
}
