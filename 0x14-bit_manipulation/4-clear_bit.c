#include "main.h"

/**
 * clear_bit - sts the value of a bit to o
 * at a given index
 * @n: number to set
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
