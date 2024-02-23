#include <stdio.h>

/**
*main - Writes the first 50 Fibonacci numbers.
*
*Return: Always 0.
*/
int main(void)
{
	long int a1 = 1;
	long int a2 = 2;
	int i;
	long int a3;

	printf("%ld, ", a1);
	printf("%ld", a2);
	for (i = 0; i < 96; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
		printf(", %ld", a3);
	}
	printf("\n");
	return (0);
}
