#include <stdio.h>

/**
*main - Writes the biggest prime factor of the number 612852475143.
*
*Return: Always 0.
*/
int main(void)
{
	long int i = 2, n = 612852475143;

	while (i != n)
	{
		if (n % i == 0)
		{
			n /= i;
			continue;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
