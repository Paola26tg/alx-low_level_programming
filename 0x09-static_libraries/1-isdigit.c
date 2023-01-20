#include "main.h"
/**
 * _isdigit - checks for digit (0 through 9)
 *
 * @c: character to be check
 * Return: 1 if c is a digit and 0 to otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
