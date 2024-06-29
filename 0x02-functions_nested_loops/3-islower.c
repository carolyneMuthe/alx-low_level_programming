#include "main."
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Description: This function checks if the input character c is a lowercase
 * letter. It returns 1 if the character is lowercase, and 0 otherwise.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
