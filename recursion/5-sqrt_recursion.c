#include "main.h"

/**
 * helper - recursive helper to find square root
 * @guess: current guess value
 * @n: target number
 *
 * Return: natural square root or -1
 */
int helper(int guess, int n)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (helper(guess + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: square root or -1 if not natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(0, n));
}
