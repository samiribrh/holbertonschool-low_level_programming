#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Generates 50 digit random password.
*
*Return: void.
*/
int main(void)
{
	int pass[50];
	int digit;

	srand(time(NULL));

	for (digit = 0; digit < 50; digit++)
	{
		pass[digit] = rand() % 78;
		putchar(pass[digit] + '0');
	}
	putchar('\n');
	return (0);
}

