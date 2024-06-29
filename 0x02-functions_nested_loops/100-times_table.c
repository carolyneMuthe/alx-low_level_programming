#include "main.h"

/**
 * print_number - prints a number with correct formatting
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n);

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number for which the times table is printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_number(i * j);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_number - prints a number with correct formatting
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 10)
	{
		if (n > 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}
