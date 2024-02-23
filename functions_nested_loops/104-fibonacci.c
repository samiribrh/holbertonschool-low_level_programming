#include <stdio.h>

/**
*main - Writes the first 98 Fibonacci numbers.
*
*Return: Always 0.
*/
int main(void)
{
	unsigned long int a1 = 1;
	unsigned long int a2 = 2;
	int i;
	int lnum = 1000000000;
	unsigned long int a3, part1, part2;

	printf("%lu, ", a1);
	printf("%lu", a2);
	for (i = 0; i < 96; i++)
	{
		if (a1 + a2 > lnum)
		{
			part1 = (a1 + a2) / lnum;
			part2 = (a1 + a2) % lnum;
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
			printf("%lu%010lu", part1, part2);
		}
		else
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
			printf(", %lu", a3);
		}
	}
	printf("\n");
	return (0);
}
