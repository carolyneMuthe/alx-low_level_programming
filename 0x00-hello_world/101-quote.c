#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints a specific string to the standard error.
 * Return: Always 1 (indicating an error for the purpose of the task)
 */
int main(void)
{
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg) - 1; /* Calculate the length of the message */

    /* Use write system call to output to stderr (file descriptor 2) */
    write(2, msg, len);

    return 1; /* Return 1 to indicate an error */
}
