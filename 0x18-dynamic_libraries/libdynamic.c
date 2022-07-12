#include "main.h"
#include <stdio.h>

/**
 * _strcpy - see description
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to
 * by pointer src to the buffer pointed 
 * to by dest
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - return the length of
 * the string
 * @s: char type pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
int _putchar(char c)
{
}
int _islower(int c)
{
}
int _isalpha(int c)
{
}
int _abs(int n)
{
}
int _isupper(int c)
{
}
int _isdigit(int c)
{
}
void _puts(char *s)
{
}
int _atoi(char *s)
{
}
char *_strcat(char *dest, char *src)
{
}
char *_strncat(char *dest, char *src, int n)
{
}
char *_strncpy(char *dest, char *src, int n)
{
}
int _strcmp(char *s1, char *s2)
{
}
char *_memset(char *s, char b, unsigned int n)
{
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
}
char *_strchr(char *s, char c)
{
}
unsigned int _strspn(char *s, char *accept)
{
}
char *_strpbrk(char *s, char *accept)
{
}
char *_strstr(char *haystack, char *needle)
{
}
