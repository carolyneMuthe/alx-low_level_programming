#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: Always 0
 */

int main(void)
{
	/* Variables */
	int i;

	/* Initial message */
	printf("Infinite loop incoming :(\n");

	/* Loop initialization */
	i = 0;

	/* While loop to demonstrate infinite loop */
	while (i < 10)
	{
		putchar(i); /* Print current value of i */
		i++; /* Increment i */
	}

	/* Loop termination message */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
