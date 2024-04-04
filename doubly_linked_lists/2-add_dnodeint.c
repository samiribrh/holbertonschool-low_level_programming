#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a node to the start of the list.
 * @head: Head of the list
 * @n: Added value
 *
 * Return: Address of new element,
 *	NULL if fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		free(node);
		return (NULL);
	}

	(*node).n = n;
	(*node).prev = NULL;
	(*node).next = *head;
	if (*head)
		(**head).prev = node;
	*head = node;
	return (node);
}
