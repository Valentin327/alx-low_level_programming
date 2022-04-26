#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: parameter that contain a string
 * @c: a character in the string
 * Return: return a pointer, c or Null
 */
char *_strchr(char *s, char c)
{
	int a;


	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
