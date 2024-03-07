#include <stdio.h>
#include <stdlib.h>

/**
*main - Multiplies two integers.
*@argc: Count of the arguments
*@argv: Array of the pointers to the arguments.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
