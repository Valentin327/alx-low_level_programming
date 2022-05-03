#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * @argc: parameter that coount the number of command linr arguments
 * @argv: parameter that contain the value of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
