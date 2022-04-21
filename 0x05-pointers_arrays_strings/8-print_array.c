#include  "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 * @n: the number of elements of the array to be printed
 * @a: the array
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("a[%d]\n", i);
	}
	return (0);
}
