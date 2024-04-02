#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_list - Frees the allocated memory for list.
*@head: Head of the given list
*
*Return: void.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = (*head).next;
		free((*temp).str);
		free(temp);
	}
}
