#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: parameter to print with _puts
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] = '\0'; i++)
	{
		_puts(str[i]);
	}
}
