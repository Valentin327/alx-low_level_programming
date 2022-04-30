#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 * @s: string to calcultae the length
 * Return: 0 if string does not exist, the lenght otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
