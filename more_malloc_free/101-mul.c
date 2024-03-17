#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
*isNumeric - Checks the string if it is numeric.
*@str: String to be checked
*
*Return: 1 if the string is numeric,
*	0 is the string is not numeric.
*/
int isNumeric(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (!isdigit(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}

/**
*multiply - Calculates the multiplication.
*@num1: First number
*@num2: Second number
*
*Return: void.
*/
void multiply(char *num1, char *num2)
{
	printf("%d\n", atoi(num1) * atoi(num2));
}

/**
*main - Checks two arguments if they are numbers and prints multiplication.
*@argc: Number of arguments
*@argv: Pointer to the array of arguments
*
*Return: 0,
*	98 if fails.
*/
int main(int argc, char **argv)
{
	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);

	return (0);
}
