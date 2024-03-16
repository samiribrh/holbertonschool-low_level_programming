#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*argstostr - Concatenates all the arguments of the program.
*@ac: Number of the arguments
*@av: Pointer to array of arguments
*
*Return: Pointer to the concatenated memory location.
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			k++;
			j++;
		}
		i++;
	}

	str = malloc(sizeof(char) * (k + ac + 1));
	if (str == NULL)
		return (NULL);

	i = 0, j = 0, k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = 0;

	return (str);
}
