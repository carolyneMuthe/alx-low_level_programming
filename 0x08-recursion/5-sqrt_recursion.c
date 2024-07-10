#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1
 * if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function to find the square root recursively
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n, or -1
 * if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);  /* No natural square root */
	}
	if (i * i == n)
	{
		return (i);  /* Found the natural square root */
	}
	return (sqrt_helper(n, i + 1));  /* Try the next guess */
}
