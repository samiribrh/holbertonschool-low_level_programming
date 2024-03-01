#include "main.h"

/**
*reverse_array - Reverses content of an array.
*@a: Given array
*@n: Length of the given array
*
*Return: void.
*/
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}
