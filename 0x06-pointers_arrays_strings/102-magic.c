#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program demonstrates pointer arithmetic to change
 *              the value of an array element without directly accessing it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
