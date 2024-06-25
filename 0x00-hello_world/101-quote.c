#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
    /* Message to be printed */
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Calculate the length of the message */
    int length = 0;
    while (message[length] != '\0')
        length++;

    /* Write the message to standard error using write system call */
    if (write(STDERR_FILENO, message, length) != length)
        return (EXIT_FAILURE); /* Return failure if write fails */

    return 1; /* Return 1 as specified */
}

