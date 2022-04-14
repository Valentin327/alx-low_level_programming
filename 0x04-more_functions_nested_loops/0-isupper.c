#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: the ascii code of character to check
 *
 * Return: return 0 or 1 if upper character
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
