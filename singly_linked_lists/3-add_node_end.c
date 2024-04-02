#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end - Adds a new node to the end of a list.
*@head: Head of the list
*@str: Value to be added
*
*Return: The address of new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *member;
	unsigned int len = 0;
	
	if(!str)
		return (NULL);
	while (*(str + len))
		len++;
	member = *head;
	while (member->next != NULL)
		member = member->next;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	member->next = new;
	return (new);
}
