#include "main.h"

/**
*rev_string - Reverses the string.
*@s: the string that should be reversed.
*
*Return: void.
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char scopy[1000];

	while (s[i] != '\0')
	{
		scopy[i] = s[i];
		i++;
	}
	scopy[i] = '\0';
	while (i != 0)
	{
		i--;
		s[j] = scopy[i];
		j++;
	}
}

/**
**_strcopy -  Copies two strings.
*@dest: Destination string
*@src: String to be copied
*@n: Size of the part of src which should be copied
*
*Return: Copied string.
*/
void *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

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
	int i = 0, j = 0, k = 0, sum, carry = 0;
	char result[150];

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		sum %= 10;
		result[k] = sum + '0';
		k++;
	}
	result[k] = '\0';
	rev_string(result);
	if (k < size_r)
	{
		_strcopy(r, result);
		return (r);
	}
	else
		return (0);
}
