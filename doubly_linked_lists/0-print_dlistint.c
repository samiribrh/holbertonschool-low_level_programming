#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t member;
	size_t count = 0;

	if (*h == NULL)
		return (NULL);
	member = h;
	while (member != NULL)
	{
		printf("%d", member->n);
		count++;
		if (member->next == NULL)
			return (count);
		member = member->next;
	}
}
