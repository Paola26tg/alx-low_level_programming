#include "main.h"
/**
 * puts2 - prints every character of the string starting by the first
 *
 * @str: string to be prints
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	_putchar(str[j]);
	for (; j < i; j++)
	{
		_putchar(str[j + 2]);
		j++;
	}
	_putchar('\n');
}
