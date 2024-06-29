#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Description: This function checks if the input character c is an alphabetic
 * letter. It returns 1 if the character is a letter
 * (either lowercase or uppercase),
 * and 0 otherwise.
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

