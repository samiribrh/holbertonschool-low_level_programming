#include <stdio.h>
#include <stdlib.h>

/**
*main - Finds number of minimum coins required as change.
*@argc: Count of the arguments
*@argv: Array of the pointers to the arguments.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i = 0, money, cents = 0;
	int currency[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		money = atoi(argv[1]);

		while (i < 5)
		{
			cents += money / currency[i];
			money %= currency[i];
			i++;
		}
		printf("%d\n", cents);
	}

	return (0);
}
