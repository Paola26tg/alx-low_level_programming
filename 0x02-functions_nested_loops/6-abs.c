#include "main.h"
/**
 * _abs - prints absolue value of integer
 *
 * @i: number to compute absolue value
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
		_putchar(i);
	}
	else
	{
		_putchar(i);
	}
	return (0);
}	
