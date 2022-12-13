#include "main.h"
/**
 * print_last_digit - Print the last digit of the number
 *
 * Return: the value of the last digit
 * @i: number to print last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (j < 0)
		j = -(j);
	_putchar(j + '0');
	return (j);
}
