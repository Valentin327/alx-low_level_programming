#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function to print all the elements of a list_t list.
 * @h: list to print elements
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d]", h->len);
			printf("%s", h->str);
		}
		h = h->next;
		count++;
		printf("\n");
	}
	return (count);
}
