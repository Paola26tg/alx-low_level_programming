#include <stdio.h>

/**
 * main - Entry point prints the numbers of base 16
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char ch;

	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
