#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - Write a function that frees a list_t list.
 * @head: node of linked list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *free_swap;

	while (head)
	{
		free_swap = head;
		head = head->next;
		free(free_swap->str);
		free(free_swap);
	}
}
