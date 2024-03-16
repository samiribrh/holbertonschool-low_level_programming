#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - Concatenates two strings.
*@s1: First string.
*@s2: Second string.
*@n: Part of second string to be concatenated
*
*Return: Pointer to the allocated area,
*	NULL if fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; *(s1 + l1) != 0; l1++)
		;
	for (l2 = 0; *(s2 + l2) != 0; l2++)
		;
	if (n >= l2)
		n = l2;

	str = malloc(sizeof(char) * (l1 + n + 1));
	if (str == NULL)
		return (NULL);

	while (*s1)
	{
		*(str + i) = *s1;
		i++;
		s1++;
	}
	while (*s2 && i - l1 < n)
	{
		*(str + i) = *s2;
		i++;
		s2++;
	}
	*(str + i) = '\0';
	return (str);
}
