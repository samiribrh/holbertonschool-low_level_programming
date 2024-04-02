#include <stdio.h>
#include <stdlib.h>
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
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	while (*str)
	{
		new->str[i] = str[i];
		i++;
	}
	new->len = i;
	*head = new;
	return (new);
}
