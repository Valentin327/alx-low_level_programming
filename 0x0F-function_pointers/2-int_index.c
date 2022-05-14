#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches an integer
 * @array: array in which to search integer
 * @size: the number of elements in the array
 * @cmp:a pointer to the function to be used to compare values
 * Return: the index of integer element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}
		}
	}
	return (-1);
}

