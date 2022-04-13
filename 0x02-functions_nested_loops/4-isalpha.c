#include "main.h"
/**
 * _isalpha - A function that check is alphabetic character
 * @c: the character to check
 * Return: 1 if is alphabetic and 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
