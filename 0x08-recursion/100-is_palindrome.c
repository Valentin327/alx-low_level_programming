#include "main.h"
/**
 * _strlen - function to get the length of a string
 *@str: string to check the length
 * Return: the length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

/**
 * is_palindrome - function to check palindrome string
 *@s: string to check if it is a palindrome
 * Return: 1 if it is palindrome or 0
 * if it is not palindrome
 */

int is_palindrome(char *s)
{
	char *head = s;
	int size = _strlen(s);
	char *tail = &s[size - 1];

	while (head < tail)
	{
		if (*head != *tail)
		{
			return (0);
		}
		head++;
		tail--;
	}
	return (1);
}
