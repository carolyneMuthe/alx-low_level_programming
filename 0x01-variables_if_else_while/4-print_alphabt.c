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
        if (lowercase != 'e' && lowercase != 'q')
        {
            putchar(lowercase);
        }
        lowercase++;
    }

    putchar('\n');  /* Print newline character*/

    return 0;
}
