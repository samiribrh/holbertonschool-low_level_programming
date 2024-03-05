#include "main.h"

/**
*checker - Checks the number for prime or not.
*@n: The number to be checked
*@divisor: Divisor
*
*Return:  1 if the number is prime
*	0 if the number is not prime.
*/
int checker(int n, int divisor)
{
	if (divisor == n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (checker(n, divisor + 1));
}

/**
*is_prime_number - Checks if the number is prime.
*@n: Number to be checked
*
*Return: 1 if the number is prime
*	0 if the number is not prime.
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (checker(n, 2));
}
