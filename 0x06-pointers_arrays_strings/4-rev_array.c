#include "main.h"
/**
 * reverse_array - function that reverse a string
 * @n: the number of elements of the array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int j, tmp;
	int i;

	j = n - 1;


	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
