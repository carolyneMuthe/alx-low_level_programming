#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime_factor = 1;
	long i;

    /* Check for number of 2s in the factorization*/

	while (number % 2 == 0)
	{
		largest_prime_factor = 2;
		number /= 2;
	}

    /*  Check for odd factors from 3 onwards*/
	for (i = 3; i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largest_prime_factor = i;
			number /= i;
		}
	}

    /*  If the largest factor is greater than 2 */
    /*  *  it's the prime factor we're looking for*/
	if (number > 2)
		largest_prime_factor = number;

	printf("%ld\n", largest_prime_factor);

	return (0);
}

