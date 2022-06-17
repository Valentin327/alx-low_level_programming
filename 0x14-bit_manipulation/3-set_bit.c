#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: pointer to an integer
 * @index: index of a bit ti set
 * Return: 1 if it worked or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
