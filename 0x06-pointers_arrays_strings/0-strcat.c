#include "main.h"
/**
 * _strcat - function that concatenate two string
 * @dest: string to concatenate
 * @src: string that will add to dest string
 * Return: return a char
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

