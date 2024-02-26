#include <stdio.h>

/**
*print_numbers - Writes numbers from 1 to 100,
*	but Fizz instead of multiples of 3,
*	and Buzz instead of multiples of 5.
*
*Return: Always 0;
*/
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if(n != 100)
			printf(" ");
		n++;

	}
	printf("\n");
	return (0);
}
