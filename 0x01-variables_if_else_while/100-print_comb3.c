#include <stdio.h>

/**
 * main - Entry point prints possible combination of two digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	int j = 0;

	for (i = 0; i < 10; i++)
	{
		j++;
		for (; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
