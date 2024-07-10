#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error: factorial of a negative number doesn't exist */
	}
	if (n == 0)
	{
		return (1);  /* Base case: factorial of 0 is 1 */
	}
	return (n * factorial(n - 1));  /* Recursive case */
}
