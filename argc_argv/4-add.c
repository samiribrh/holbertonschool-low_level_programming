#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - Adds positive numbers.
*@argc: Number of arguments
*@argv: The array of pointers to the arguments
*
*Return: 0 if success
*	1 if Error.
*/
int main(int argc, char **argv)
{
	int i = 1, sum = 0;
	unsigned int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (j < strlen(argv[i]))
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
