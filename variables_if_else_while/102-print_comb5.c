#include <stdio.h>

/**
*main - Writess all possible combinations of two two-digit numbers.
*
*Return: Always 0.
*/
int main(void)
{
	int f = 48;
	int s = 48, t = 48, fr = 49;

	while (f < 58)
	{
		while (s < 57)
		{
			while (t < 58)
			{
				fr = 48;
				while (fr < 58)
				{
					putchar(f);
					putchar(s);
					putchar(' ');
					putchar(t);
					putchar(fr);
					fr++;
					if(f != 57 && s != 56)
					{
						putchar(',');
						putchar(' ');
					}
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
