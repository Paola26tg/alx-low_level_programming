#include "main.h"
/**
 * jack_bauer - Prints every minutes of the days of Jack bauer
 *
 *
 */
void jack_bauer(void)
{
	int i , j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i + '0');
			_putchar(' ');
			_putchar(':');
			_putchar(' ');
			_putchar(j + '0');
		}
	}
}
