#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int c;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
