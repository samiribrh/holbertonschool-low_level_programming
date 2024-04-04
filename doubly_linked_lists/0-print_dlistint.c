#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the list.
 * @h: Head of the list
 *
 * Return: Size of the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		count++;
	}
	return (count);
}
