#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated space in memory
 * containing the concatenated string,
 *         or NULL if the function fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, length1, length2;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of both strings */
	length1 = 0;
	while (s1[length1] != '\0')
		length1++;
	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	/* Allocate memory for the concatenated string */
	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	/* Copy s2 into concat */
	for (j = 0; j < length2; j++)
		concat[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i + j] = '\0';

	return (concat);
}
