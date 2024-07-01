#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the 101-crackme program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char password[7];
	int i;
	int sum = 0;

	srand(time(NULL));  /* Seed the random number generator */

	for (i = 0; i < 6; i++)
	{
		int r = rand() % 62;

		if (r < 10)
			password[i] = '0' + r;  /* Digits 0-9 */
		else if (r < 36)
			password[i] = 'A' + (r - 10);  /* Uppercase letters A-Z */
		else
			password[i] = 'a' + (r - 36);  /* Lowercase letters a-z */

		sum += password[i];
	}

	/* Add the final character to make the password valid */
	password[6] = 2772 - sum;

	if (password[6] < '0')
		password[6] += 58;  /* Convert to a printable character (0-9, A-Z, a-z) */
	else if (password[6] > 'z')
		password[6] -= 62;

	password[7] = '\0';  /* Null-terminate the string */

	printf("%s\n", password);  /* Print the generated password */

	return (0);
}
