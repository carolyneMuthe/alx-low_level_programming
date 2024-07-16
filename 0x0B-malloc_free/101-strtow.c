#include <stdlib.h>
#include "main.h"

int word_count(char *str);
char **split_to_words(char *str, int word_count);

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "" or if the function fails.
 */
char **strtow(char *str)
{
	int words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	return (split_to_words(str, words));
}

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to be parsed.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * split_to_words - Splits a string into words.
 * @str: The string to be split.
 * @word_count: The number of words in the string.
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if the function fails.
 */
char **split_to_words(char *str, int word_count)
{
	char **words;
	char *word_start = NULL;
	int i = 0, len = 0, word_len;
	int j;

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == ' ' || *str == '\0')
		{
			if (word_start)
			{
				word_len = str - word_start;
				words[i] = malloc((word_len + 1) * sizeof(char));
				if (words[i] == NULL)
				{
					for (j = 0; j < i; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				for (len = 0; len < word_len; len++)
					words[i][len] = word_start[len];
				words[i][len] = '\0';
				i++;
				word_start = NULL;
			}
		}
		else if (word_start == NULL)
		{
			word_start = str;
		}
		str++;
	}
	words[i] = NULL;
	return (words);
}
