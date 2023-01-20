#include "main.h"
/**
 * _abs - prints absolue value of integer
 *
 * Return: integer if is positive and -integer if it is negative
 * @i: number to compute absolue value
 */
int _abs(int i)
{
	if (i <=  0)
		return (-i);
	else
		return (i);
}
