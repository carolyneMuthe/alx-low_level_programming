#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations
 *              of single-digit numbers separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= 9; numbers++)
	{
		putchar(numbers + '0');
		if (numbers != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
