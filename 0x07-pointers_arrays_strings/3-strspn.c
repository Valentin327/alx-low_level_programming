#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string calculate
 * @accept:string containing the list of characters to match in s
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, k;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				k = 1;
			}
		}
		if (k == 0)
		{
			return (f);
		}
	}
	return (0);
}
