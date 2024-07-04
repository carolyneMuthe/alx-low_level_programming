#include "main.h"

/**
 * str_len - calculates the length of a string.
 * @s: the string.
 *
 * Return: the length of the string.
 */
int str_len(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * add_digits - adds two digits and returns the sum and carry.
 * @digit1: the first digit.
 * @digit2: the second digit.
 * @carry: the carry from the previous addition.
 * @sum: pointer to store the sum.
 *
 * Return: the new carry.
 */
int add_digits(int digit1, int digit2, int carry, int *sum)
{
	*sum = digit1 + digit2 + carry;
	carry = *sum / 10;
	*sum %= 10;
	return (carry);
}

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = str_len(n1) - 1, len2 = str_len(n2) - 1, len_r = size_r - 2;
	int carry = 0, sum = 0;

	r[size_r - 1] = '\0';

	/* Add the numbers from the end to the beginning */
	while (len1 >= 0 || len2 >= 0 || carry)
	{
		int digit1 = (len1 >= 0) ? n1[len1] - '0' : 0;
		int digit2 = (len2 >= 0) ? n2[len2] - '0' : 0;

		carry = add_digits(digit1, digit2, carry, &sum);

		if (len_r < 0)
			return (0);

		r[len_r] = sum + '0';
		len_r--;
		len1--;
		len2--;
	}

	return (r + len_r + 1);
}
