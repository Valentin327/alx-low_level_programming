#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: a string to compare with another
 * @s2: another string to compare with the first string
 * Return: return an integer
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

