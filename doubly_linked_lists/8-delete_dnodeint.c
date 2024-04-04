#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * delete_dnodeint_at_index - Deletes node at specified index.
 * @head: Head of the list
 * @index: Specified index
 *
 * Return: 1 if success,
 *	-1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	return (1);
}