#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position in hexadecimal */
		printf("%08x: ", i);

		/* Print the hex content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}

		/* Print the ASCII content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
