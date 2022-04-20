#include "main.h"
/**
 * _strlen - function that return the length
 * @s: parameter to check the length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
