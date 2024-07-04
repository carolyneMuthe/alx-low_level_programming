#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: Maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Find the end of dest string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Append src to dest using at most n bytes */
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
