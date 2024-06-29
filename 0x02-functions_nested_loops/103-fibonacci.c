#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 * * in the Fibonacci sequence
 *        whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	unsigned long sum = 0;
	{
		if (first % 2 == 0)
		{
			sum += first;
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);
	return (0);
}
