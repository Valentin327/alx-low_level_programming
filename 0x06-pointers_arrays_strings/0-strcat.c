#include "main.h"
/**
 * _strcat - function that concatenate two string
 * @dest: string to concatenate
 * @src: string that will add to dest string
 * Return: return a char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

