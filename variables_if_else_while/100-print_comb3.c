#include <stdio.h>

/**
*main - Writess all possible combinations of two digits.
*
*Return: Always 0.
*/
int main(void)
{
	char f = '0';
	char s;

	while (f < '9')
	{
		s = f + 1;
		while (s < ':')
			putchar(f);
			putchar(s);
			s++;
		f++;
	}
	putchar('\n');
	return (0);
}
