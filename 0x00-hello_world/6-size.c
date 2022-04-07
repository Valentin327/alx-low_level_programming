#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int l;
        long long int L;
	float f;


	// sizeof evaluates the size of a variable
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a int:  %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	
	return (0);
}
