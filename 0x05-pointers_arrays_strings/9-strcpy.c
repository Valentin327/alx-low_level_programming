#include "main.h"
/**
 * _strcpy - unction that copies the string pointed to by src
 * @dest:string to copied
 * @src: source of string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
