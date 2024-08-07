#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted unsigned int, or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
