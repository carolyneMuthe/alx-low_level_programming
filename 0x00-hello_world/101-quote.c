#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - "				 		"Dora Korpar, 2015-10-19\n";
	int length = 0;

	while (message[length] != '\0')
		length++;

	if (write(STDERR_FILENO, message, length) != length)
	{
		return (EXIT_FAILURE);
	}

	return (1);
}
