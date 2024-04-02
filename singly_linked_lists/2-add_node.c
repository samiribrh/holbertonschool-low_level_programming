#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node - Adds element to the start of the list.
*@head: Head of the list
*@str: The element that should be added
*
*Return: The address of the new element,
*	NULL if fails.
*/
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (*(str + len))
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
