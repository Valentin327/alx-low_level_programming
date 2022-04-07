#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
        long long int longLongIntType;
	float floatType;


	// sizeof evaluates the size of a variable
	printf("Size of a char: %c byte(s)\n", sizeof(charType));
	printf("size of a int:  %d byte(s)\n", sizeof(intType));
	printf("size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("size of a long long int: %lld byte(s)\n", sizeof(longLongIntType));
	printf("size of a float: %f byte(s)\n", sizeof(floatType));
	
	return (0);
}
