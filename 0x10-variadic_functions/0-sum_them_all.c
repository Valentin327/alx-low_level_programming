#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic funtion that returns the sum of all its parameters
 * @n: the count of remaining arguments
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

