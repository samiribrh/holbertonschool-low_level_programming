#include <stdio.h>

/**
*main - Writess all possible combinations of two digits.
*
*Return: Always 0.
*/
int main(void)
{
	int f = 48;
	int s;

	while (f < 57)
	{
		s = f + 1;
		while (s < 58)
		{
			putchar(f);
			putchar(s);
			if (f != 56)
			{
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
