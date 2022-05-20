#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that add a node at the beginning of a list
 * @head: Single linked list
 * @str: data contained in the structures
 * 
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	while (str[len])
	{
		len++;
	}
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	if (!new)
	{
		return (NULL);
	}
	return (*head);
}

