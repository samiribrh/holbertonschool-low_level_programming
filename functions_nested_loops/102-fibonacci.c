#include <stdio.h>

/**
*main - Writes the first 50 Fibonacci numbers.
*
*Return: Always 0.
*/
int main(void)
{
	int a1 = 1;
	int a2 = 2;
	int i;
	long int a3;

	printf("%d, ", a1);
	printf("%d", a2);
	for (i = 0; i < 48; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
		printf(", %ld", a3);
	}
	return (0);
}
