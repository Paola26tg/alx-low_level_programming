#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times of alphabets in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;

	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}

