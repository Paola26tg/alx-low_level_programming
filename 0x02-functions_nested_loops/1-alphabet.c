#include <stdio.h>
#include "main.h"
/**
 * main - Prints alphabets in lowcase followed by new line
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet()
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
}

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
