#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end.
 * @head: Head of the list
 * @n: Added value
 *
 * Return: Address of the new element,
 *	NULL if fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	(*node).n = n;
	(*node).next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	while ((*head).next)
		head = (*head).next;
	(*node).prev = head;
	(*head).next = node;
	return (node);
}
