#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the int to rise to power y
 * @y: the power
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int pw = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (!y)
	{
		return (1);
	}
	else
		pw = _pow_recursion(x, y - 1);

	return (pw * x);
}
