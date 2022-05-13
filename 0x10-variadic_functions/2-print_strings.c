#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that print string
 * @separator: string to be printed between the strings
 * @n: numbers of arguments
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (!str)
		{
			str = "nil";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(ap);
}
