#include "main.h"
/**
 * find_num - function that find the num
 * @i: in an int value
 * @n: an int value
 * Return: int
 */
int find_num(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (find_num(n, ++i));
}

/**
 * is_prime_number - function that check prime numbers
 * @num: number to be check
 * Return: 0 or 1
 */
int is_prime_number(int num)
{
	int i;

	i = 2;

	if (num == 1)
		return (0);

	return (find_num(num, i));
}
