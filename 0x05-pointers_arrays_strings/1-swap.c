#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: first parameter of the function
 * @b: second parameter of the function
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*a = (*a) - (*b);
	*b = (*a) + (*b);
	*a = (*b) - (*a);
}

