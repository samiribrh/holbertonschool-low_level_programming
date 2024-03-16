#include <stdio.h>
#include <stdlib.h>

/**
*counter - Counts the number of words in a string.
*@str: String to count
*
*Return: Number of words in string. 
*/
int counter(char *str)
{
	int isspace, c, words = 0;

	isspace = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			isspace = 0;
		else if (isspace == 0)
		{
			isspace = 1;
			words++;
		}
	}

	return (words);
}
/**
***strtow - Splits the given string into words.
*@str: String to be splitted
*
*Return: Pointer to array of strings,
*	NULL if fails.
*/
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = counter(str);
	if (words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || !str[i])
		{
			if (c)
			{
				end = i;
				temp = malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c == 0)
		{
			c++;
			start = i;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
