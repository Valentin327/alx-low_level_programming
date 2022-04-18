#include <stdio.h>
/** more headers goes there */

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int t1 = 1, t2 = 2, next = t1 + t2;
	int i;

	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("\n");
	return (0);
}
