#include <stdio.h>

/**
 * main - Entry point print alphabet in reverse
 *
 * Return: Always 0 (success)
 *
 */
int mmain(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
