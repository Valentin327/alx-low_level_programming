#include "main.h"
/**
 * _isdigit - Function that checks for a digit
 * @c: integer to check
 * Return: 1 if is digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

