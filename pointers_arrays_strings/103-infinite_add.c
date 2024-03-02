#include "main.h"

/**
**infinite_add - Adds two numbers.
*@n1: First number
*@n2: Second number
*@r: The buffer to store the result
*@size_r: Size of the result buffer
*
*Return: Result buffer.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = -1, j = -1, k, carry = 0, sum;
	int result_len;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	result_len = (i > j) ? i : j;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - 48;
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - 48;
			j--;
		}
		if (size_r - 1 >= 0)
		{
			r[size_r - 2] = sum % 10 + 48;
			size_r--;
		}
		else
			return (0);
		carry = sum / 10;
	}

	for (k = 0; k < result_len; ++k)
	{
		r[k] = r[size_r - result_len  + k];
	}
	r[result_len] = '\0';
	return (r);
}
