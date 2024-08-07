#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise 0
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);  /* 0 and 1 are not prime numbers */
	}
	return (prime_helper(n, 2));  /* Start checking from 2 */
}

/**
 * prime_helper - helper function to check for prime numbers recursively
 * @n: the number to check
 * @i: the current divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);  /* n is a prime number */
	}
	if (n % i == 0)
	{
		return (0);  /* n is not a prime number */
	}
	return (prime_helper(n, i + 1));  /* Try the next divisor */
}
