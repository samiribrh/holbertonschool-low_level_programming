#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Generate random password to crack 101-crackme file.
*
*Return: 0.
*/

int main(void)
{
	int pass[100], digit;
	int sum = 0, n;

	srand(time(NULL));

	for (digit = 0; digit < 100; digit++)
	{
		pass[digit] = rand() % 78;
		sum+= pass[digit] + '0';
		putchar(pass[digit] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
