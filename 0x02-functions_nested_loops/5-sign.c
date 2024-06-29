#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Description: This function checks the value of the integer n and prints
 * a '+' if n is greater than zero, a '0' if n is zero, and a '-' if n
 * is less than zero. It also returns 1, 0, or -1 based on the sign of n.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero,
 ** -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
