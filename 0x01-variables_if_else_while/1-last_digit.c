#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n each
 * time it is executed. It then calculates the last digit of the number and
 * prints it along with a message indicating whether the last digit is
 * greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
        int  last_digit; 
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Calculate the last digit of n*/
	last_digit = abs(n % 10);
	printf("last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5");
	else if (last_digit == 0)
		printf("0");
	else 	printf("less  than 6 and not 0");

	return (0);
}
