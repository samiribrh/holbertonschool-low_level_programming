#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of the list.
 * @head: Head of the list
 *
 * Return: Sum of the list.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = (*head).next;
	}
	return (sum);
}
