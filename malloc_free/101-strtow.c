#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int words, i, j, k = 0, wordlen;

	if (str == NULL || str == "")
		return (NULL);
	words = counter(str);
	if (!words)
		return (NULL);
	
	matrix = malloc(sizeof(char) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		for (wordlen = 0; str[i + wordlen] = ' '; wordlen++)
			;
		temp = malloc(sizeof(char) * wordlen);
		for (j = 0; j < wordlen; j++)
		{
			temp[j] = str[i];
			i++;
		}
		temp[j] = '\0';
		matrix[k]  = temp;
		k++;
	}
	matrix[k] = NULL;
	return (matrix);
}
