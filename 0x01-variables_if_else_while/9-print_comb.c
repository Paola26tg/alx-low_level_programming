#include <stdio.h>

/**
 * main - Entry point prints combination of single digit
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
