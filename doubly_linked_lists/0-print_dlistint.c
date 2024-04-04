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

	if (h == NULL)
		return (count);
	member = h;
	while (1)
	{
		printf("%d", member->n);
		count++;
		if (member->next == NULL)
			return (count);
		member = member->next;
	}
}
