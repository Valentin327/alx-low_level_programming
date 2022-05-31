#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac: arguments counter
 * @av: array for arguments
 *
 * Return: 1 on success, -1 on failure
 * or if filename is NULL
 */
int mai(int ac,  char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2," Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
