#include "main.h"
#include <stdio.h>
/**
 * check_func - checks the  input from n to the base
 * @n: number
 * @base: base
 * Return: natural square root
 */
int check_func(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (check_func(n + 1, base));
}

/**
 * _sqrt_recursion - return te natural square root of
 * a given number
 * @n: number to check for square ropts
 * Return: the natural square root of numbern
 */
int _sqrt_recursion(int n)
{
	return (check_func(1, n));
}
