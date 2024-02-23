#include <stdio.h>

/**
*main - Writes the first 98 Fibonacci numbers.
*
*Return: Always 0.
*/
int main(void)
{
	unsigned long int a1 = 1, a2 = 2, lnum = 10000000000, a3, part1a1, part1a2, part2a1, part2a2, part1a3, part2a3, i, boolean = 1;

	printf("%lu, %lu", a1, a2);
	for (i = 0; i < 96; i++)
	{
		if (i > 89)
		{
			if ( boolean == 1)
			{
				part1a1 = a1 / lnum;
				part2a1 = a1 % lnum;
				part1a2 = a2 / lnum;
				part2a2 = a2 % lnum;
				boolean = 0;
			}
			part1a3 = part1a1 + part1a2;
			part2a3 = part2a1 + part2a2;
			if (part2a1 + part2a2 > 9999999999)
			{
				part1a3 += 1;
				part2a3 %= lnum;
			}
			part1a1 = part1a2;
			part2a1 = part2a2;
			part1a2 = part1a3;
			part2a2 = part2a3;
			printf(", %lu%lu", part1a3, part2a3);
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
