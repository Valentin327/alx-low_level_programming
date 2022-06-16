#include "main.h"
/**
 * get_bit - function that returns value of a bit at
 * given index
 * @n: input long integer
 * @index: index
 * Return: value of a it at index or -1 if
 * an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
