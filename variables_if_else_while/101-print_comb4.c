#include <stdio.h>

/**
*main - Writess all possible combinations of three digits.
*
*Return: Always 0.
*/
int main(void)
{
	int f = 48;
	int s, t;

	while (f < 56)
	{
		s = f + 1;
		t= s + 1;
		while (s < 57)
		{
			while (t < 58)
			{
				putchar(f);
				putchar(s);
				putchar(t);
				if (f != 56)
				{
					putchar(',');
					putchar(' ');
				}
				t++;
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
