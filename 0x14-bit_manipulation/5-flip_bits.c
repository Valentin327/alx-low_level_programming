#include "main.h"
/**
 * flip_bits - function that return the number of a bits you
 * would need to get from one numbert to another
 * @n: First number
 * @m: Second number
 * Return: the value of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int number = 0;
	int i = 0;

	for (; i <= 63; i++)
	{
		if (((n ^ m) >> i) & 1)
			number++;
	}
	
	return (number);
}
