#include "main.h"

/**
*_atoi - Converts the string to an integer.
*@s: the string that should be converted
*
*Return: Integer after convertion.
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while(*s)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			n = n * 10 + (*(s + i) - 48);

			if (*(s + i + 1) < 48 || *(s + i + 1) > 57)
			{
				break;
			}
		}
		s++;
	}
	return (result * sign);
}
