#include "main.h"
/**
 * _abs - prints absolue value of integer
 *
 */
int _abs(int)
{
	int i;

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
