#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_LENGTH 6
/**
 * main - Generates a valid password for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASS_LENGTH + 1] = {0};
	int i, random_value;

	srand(time(NULL));

	for (i = 0; i < PASS_LENGTH; i++)
	{
		random_value = rand() % 62;
		if (random_value < 10)
		{
			password[i] = '0' + random_value;
		}
		else if (random_value < 36)
		{
			password[i] = 'A' + (random_value - 10);
		}
		else
		{
			password[i] = 'a' + (random_value - 36);
		}
	}
	printf("%s\n", password);
	return (0);
}
