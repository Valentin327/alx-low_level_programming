#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that add a node
 * at the beginning of a list
 * @head: linked list
 * @n: data for the node
 *
 * Return: the address of the new elemen
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeToAdd;

	nodeToAdd = malloc(sizeof(listint_t));

	if (!nodeToAdd)
	{
		return (NULL);
	}
	nodeToAdd->n = n;
	nodeToAdd->next  = *head;
	*head = nodeToAdd;
	return (nodeToAdd);
}
