#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns pointer to appropriate calculation function
 *
 * @s: string containing operation symbol
 *
 * Return: pointer to function if sucessful, or NULL if fails
 */

int (*get_op_func(char *s))(int, int)
{
	op_t key[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};


	int i = 0;

	while (i < 5)
	{
		if (*key[i].op == *s)
			return (key[i].f);
		i++;
	}
	return (NULL);
}
