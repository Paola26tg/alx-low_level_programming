#include "main.h"
/**
 * times_table - Prints 9 times table
 *
 */
void times_table(void)
{
	int i = 0, j, k;

	while (i <= 9)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k <= 9)
				_putchar(' ');
			else
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		i++;
		_putchar('\n');
	}
}
