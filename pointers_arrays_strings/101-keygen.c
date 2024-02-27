#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Generates  random password for 101-creckme program.
*
*Return: void.
*/
int main(void)
{
	int pass[100];
	int digit, sum = 0;

	srand(time(NULL));

	for (digit = 0; digit < 100; digit++)
	{
		pass[digit] = rand() % 78;
		putchar(pass[digit] + '0');
		sum += pass[digit];
		if (2772 - sum - '0' < 78 )
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

