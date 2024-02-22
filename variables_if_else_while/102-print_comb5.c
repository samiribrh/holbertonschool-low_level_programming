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
	int isHere = 0;
	while (f < 58)
	{	
		s = 48;
		while (s < 57)
		{
			if (s != 57)
			{
				t = f;
				fr = s + 1;
				isHere = 1;
			}
			else
			{
				t = f + 1;
				fr = 48;
				isHere = 1;
			}
			while (t < 58)
			{
				if (isHere != 1)
				{
					fr = 48;
				}
				else
				{
					isHere = 0;
				}
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
