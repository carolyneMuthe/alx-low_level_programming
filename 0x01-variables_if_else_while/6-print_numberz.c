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
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}

