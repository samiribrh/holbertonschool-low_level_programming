#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*list_len - Calculates number of elements in the given list.
*@h: Given list
*
*Return: The number of elements.
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (count);
}
