#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
*main - Calculates given operation.
*@argc: Number of arguments
*@argv: Pointer to the array of arguments
*
*Return: 0,
*	98 if fails.
*/
int main(int argc, char **argv)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*op != '*' && *op != '/' && *op != '+' && *op != '-' && *op != '%')
			|| strlen(op) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(m, n));
	return (0);
}