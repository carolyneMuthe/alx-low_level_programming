#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers
 *              of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 0;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers + '0');
	}
	putchar('\n');
	return (0);
}
