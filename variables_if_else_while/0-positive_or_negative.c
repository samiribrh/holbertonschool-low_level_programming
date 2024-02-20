#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Finds the number is positive, negative, or zero.
*
*Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0)
		printf("%ld is negative", n)
	else if(n>0)
		printf("%ld is positive", n)
	else
		printf("0 is zero")
	return (0);
}
