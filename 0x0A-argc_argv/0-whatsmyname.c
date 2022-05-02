#include <stdio.h>
#include "main.h"
/** More headers goes there */

/**
 * main - check the code
 * @argc: the number of program arguments
 * @argv: an array that contain the value of arguments
 * Return: Always 0
 */
int main(argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
