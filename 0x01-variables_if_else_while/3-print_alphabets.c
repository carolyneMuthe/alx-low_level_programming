#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * * Description: This program prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase,
 *              and ends with a newline character.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char upercase = 'A';

	while (lowercase <= 'z')

	{
		putchar(lowercase);
		lowercase++;
	}
	while (upercase <= 'Z')
	{
		putchar(upercase);
		upercase++;
	}
	putchar('\n');
	return (0);
}
