#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest:memory area destination
 * @src:memory area source
 * @n:number of bytes to copy
 * Return: return a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (cdest);
}
