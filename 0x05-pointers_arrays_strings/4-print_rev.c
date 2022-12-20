#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
