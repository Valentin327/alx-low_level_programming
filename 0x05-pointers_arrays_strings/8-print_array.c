#include <stdio.h>
#include "main.h"
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
		if (i == 0)
			printf("%d\n", a[i]);
		else
			printf(", %d\n", a[i]); 
	}
	printf("\n");
}
