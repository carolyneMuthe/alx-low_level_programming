#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: Prints the 9 times table from 0 to 81 in a tabular format.
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
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
