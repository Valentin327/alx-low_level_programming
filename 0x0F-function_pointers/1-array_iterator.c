#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array
 * @size: the size of the array
 * @array: the to use elements
 * @action: is a pointer to the function to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
