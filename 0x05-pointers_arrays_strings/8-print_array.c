#include  "main.h"
/**
 * print_array - function that prints n elements of an array of integers,
 * @n: the number of elements of the array to be printed
 * @a: the arra
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
