#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: the number to calculate the factorial
 * Return: -1 if n is lower than 0, 1 if n is 0, and other
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		fact = -1;
	}
	else if (n == 0)
	{
		fact = 1;
	}
	else
		fact = n * factorial(n - 1);
	return (fact);
}
