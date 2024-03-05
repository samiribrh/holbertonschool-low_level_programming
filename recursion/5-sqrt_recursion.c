#include "main.h"

/**
*guess - Guessing the square root of a function.
*@n: The number
*@guess: The guess
*
*Return: The guessed number
*/
int guess(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (guess(n, guess + 1));
}

/**
*_sqrt_recursion - Calculates the square root.
*@n: Value to be rooted
*
*Return: Result of the square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (guess(n, 1))
}
