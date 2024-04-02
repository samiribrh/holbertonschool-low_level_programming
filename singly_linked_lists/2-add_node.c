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
	int i = 0, len = 0;
	list_t *new;

	while (*(str + len))
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = malloc(sizeof(char) * len);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (i < len)
	{
		new->str[i] = str[i];
		i++;
	}
	new->str[i] = '\0';
	new->len = i;
	*head = new;
	return (new);
}
