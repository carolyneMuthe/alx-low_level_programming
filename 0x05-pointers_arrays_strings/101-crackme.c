#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Checks the password against the target.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if the password is correct, 1 otherwise.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s password\n", argv[0]);
        return (1);
    }

    if (strcmp(argv[1], "2pJg57V") == 0)  /* Password to be replaced with the expected output */
    {
        printf("Tada! Congrats\n");
        return (0);
    }
    else
    {
        printf("Wrong password\n");
        return (1);
    }
}
