#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: string that to be concatenate
 * @src: string that to add to dest string
 * @n: bytes from src
 * Return: return a char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}



