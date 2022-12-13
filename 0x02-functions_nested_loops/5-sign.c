#include "main.h"
/**
 * print_sign - prints a sign of a number
 *
 * Return: 1 if number is positive, 0 if is zero , -1 otherwise
 * @n: number to prints sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
