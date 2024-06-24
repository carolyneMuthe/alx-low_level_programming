#include <stdio.h>
/*
 * main - Entry point of the program
 *
 * Description: This program printsall single digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 0;

	for(numbers = 0; numbers <= 10; numbers++)
	{
		printf(numbers);
	}
	printf('\n');
	return (0);
}
