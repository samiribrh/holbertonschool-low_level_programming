#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*_strdup - pointer to a newly allocated space in memory,
*	which contains a copy of the string given as a parameter.
*@str: given string
*
*Return: pointer to the memory.
*/
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;

	s = malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = *(str + j);
		j++;
	}

	s[i] = 0;
	return (s);
}
