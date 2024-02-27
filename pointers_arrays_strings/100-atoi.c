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

	while(*s && ((*s >= '0' && *s <= '9') || (*s == '-')))
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
