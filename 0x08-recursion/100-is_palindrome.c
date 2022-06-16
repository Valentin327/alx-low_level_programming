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
 * palind_helper - function for help palindrome
 * @str: the string
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not
 */
int palind_helper(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (palind_helper(str, len - 1, count + 1));
	return (0);
}

/**
 * is_palindrome - function to check palindrome string
 *@s: string to check if it is a palindrome
 * Return: 1 if it is palindrome or 0
 * if it is not palindrome
 */

int is_palindrome(char *s)
{
	int size = _strlen(s);
	int e = 0;

	return (palind_helper(s, size - 1, e));
}
