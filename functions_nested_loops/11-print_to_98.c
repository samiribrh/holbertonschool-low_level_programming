#include <stdio.h>
#include "main.h"

/**
*print_to_98 - Writes numbers from n to 98.
*@n: the number the function is going to start
*
*Return: void.
*/
void print_to_98(int n)
{
	int step = 1;

	if (n > 98)
		step = -1;
	while (n != 98)
	{
		printf("%d", n);
		printf(", ");
		n += step;
	}
	printf("98\n");
}
