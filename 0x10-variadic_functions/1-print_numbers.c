#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be print between the numbers
 * @n: is the number of integers passed to the function
 *
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(ap, int));
		}
		else
		{
			printf("%d", va_arg(ap, int));
			if (i < n - 1)
			{
				printf("%c ", *separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
