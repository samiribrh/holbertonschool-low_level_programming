#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Calculates the length of the list.
 * @h: Head of the list
 *
 * Return: Size of the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
