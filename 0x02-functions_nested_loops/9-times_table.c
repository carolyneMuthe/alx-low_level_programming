#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: This function prints the 9 times table in a grid format. Each
 * number in the table is separated by a comma, 
 * with proper spacing for alignment.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (j != 0)
			{
				 _putchar(',');
				 _putchar(' ');
			}
			if (product < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				 _putchar(product / 10 + '0');
				 _putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
