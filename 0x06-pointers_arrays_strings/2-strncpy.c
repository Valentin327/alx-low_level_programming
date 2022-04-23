#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: variable that copy other string
 * @src: string to copy
 * @n: n bytes of src to copy
 * Return: return a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
