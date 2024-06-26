#include <stdio.h>
/**
 * print_alphabet - prints the lowercase followed by a new line
 */
/* Declare _putchar function*/
void _putchar(char c);
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <='z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
