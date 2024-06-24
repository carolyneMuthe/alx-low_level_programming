#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && != 'q')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return (0);
}
