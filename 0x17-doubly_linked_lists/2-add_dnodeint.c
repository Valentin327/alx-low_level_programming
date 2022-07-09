#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - function to add a
 * node at the beginning of a list
 * @head: pointer to the address of
 * the new element
 * @n: new element to add
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	if (!head)
	{
		return (NULL);
	}
	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;
	*head = new_element;
	if (new_element->next != NULL)
	{
		(new_element->next)->prev = new_element;
	}
	return (new_element);

}
