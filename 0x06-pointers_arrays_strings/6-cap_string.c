#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int is_separator = 1;

	while (str[i] != '\0')
	{
		if (is_separator && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;  /* Convert lowercase to uppercase */
		}
		is_separator = 0;
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				is_separator = 1;
				break;
			default:
				break;
		}
		i++;
	}
	return (str);
}
