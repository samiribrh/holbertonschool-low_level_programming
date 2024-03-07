#include <stdio.h>

/**
*main - Prints the program's name.
*@argc: Count of the arguments
*@argv: Array of the pointers to the arguments.
*
*Return: Always 0.
*/
int main(__attribute((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
