#include <stdio.h>

/**
*main - Prints all arguments passed into the program.
*@argc: Count of the arguments
*@argv: Array of the pointers to the arguments.
*
*Return: Always 0.
*/
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
