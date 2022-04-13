#include "main.h"
/**
 * _islower - A function that checks for lowercase charactére
 *@c: the character to check
 * Return: Here 1 if lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
