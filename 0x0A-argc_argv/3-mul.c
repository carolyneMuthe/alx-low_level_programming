#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 if the program received exactly two arguments,
 *         1 if the program did not receive exactly two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[2]);
	 result = num1 * num2;
	 printf("%d\n", result);
	return (0);
}
