#include "main.h"
/**
 *
 * print_last_digit - print the last digit of the number
 *
 * Return: the value of the last digit
 * @i: number to print last digit
 */
int print_last_digit(int i)
{
	_putchar(i % 10);
	return (i % 10);
}
