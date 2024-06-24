#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 *
 *
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Calculate the last digit of n*/
	 last_digit = abs(n % 10);

	printf("last digit of %d is %d and is ",n, last_digit);
	if(last_digit>5)
		printf("and is greater than 5");
	else if(last_digit=0)
		printf("and is 0");
	else 
		printf("and is less than 6 and not 0");

	return (0);
}
