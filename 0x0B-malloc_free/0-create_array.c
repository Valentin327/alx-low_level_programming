#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize array
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	pointer = malloc(sizeof(char) * size);

	if (pointer == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			pointer[i] = c;
			return (pointer);
	}
}
