#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_list - Writes the given list.
*@h: Given list
*
*Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	
	do
	{
		if (h->str != NULL)
			printf("[%u] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		count++;
		h = h->next;
	} while (h->next != NULL);
	return (count);
}
