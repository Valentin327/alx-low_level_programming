#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: linked list
 *
 * Return: the number of linked list elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;

	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
