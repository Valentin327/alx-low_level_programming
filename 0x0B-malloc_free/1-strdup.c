#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: a pointer, NULL if str = NULL or if insufficient memory was availabl
 */
char *_strdup(char *str)
{
	char *pointer;
	int i;
	int count = 0;

	/* In case if the given string is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* finding the lenght of the given string */
	while (*(str + count))
	{
		count++;
	}

	/* allocation the needed dynamic memory */
	pointer = malloc(sizeof(char) * (count + 1));
	/*To verity if the pointer, pointed on the allocated memory*/
	/*area is not NULL*/
	if (pointer == NULL)
	{
		return (NULL);
	}

	/*Initialization of i to avoid segment fault error*/
	i = 0;

	/* filling the area with the bytes from the given stringith*/
	while (i <= count)
	{
		*(pointer + i) = *(str + i);
		i++;
	}

	/* return a pointer to the string */
	return (pointer);

}
