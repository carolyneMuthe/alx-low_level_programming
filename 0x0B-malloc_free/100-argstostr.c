#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j,  total_len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length needed */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++;  /* For the newline character */
	}
	total_len++;  /* For the null terminator */

	/* Allocate memory for the concatenated string */
	result = malloc(total_len * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Concatenate the arguments into the result string */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[total_len++] = av[i][j];
		result[total_len++] = '\n';  /* Add newline character */
	}
	result[total_len] = '\0';  /* Null terminator */

	return (result);
}
