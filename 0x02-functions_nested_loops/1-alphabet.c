#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - Prints alphabets in lowcase followed by new line
 *
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
