#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long first = 1, second = 2, next;

	printf("%lu, %lu", first, second);

	for (count = 3; count <= 50; count++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
