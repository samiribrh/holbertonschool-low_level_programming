#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at index.
 * @head: Head of the list
 * @index: Index of the searched node
 *
 * Return: The element,
 *	NULL if fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	if (i == index - 1)
		return (head);
	return (NULL);
}
