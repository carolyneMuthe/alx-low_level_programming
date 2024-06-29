#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", a, b);

	/* Loop to calculate and print the next 96 Fibonacci numbers */
	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
