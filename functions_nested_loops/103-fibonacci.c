#include <stdio.h>

/**
*main - Writes the sum of even Fibonacci numbers before 4,000,000.
*
*Return: Always 0.
*/
int main(void)
{
	long int a1 = 1;
	long int a2 = 2;
	int i;
	long int sum = 2;
	long int a3;

	for (i = 0; a3 < 4000000; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
		if (a3 % 2 == 0)
			sum += a3;
	}
	printf("%ld\n", sum);
	return (0);
}
