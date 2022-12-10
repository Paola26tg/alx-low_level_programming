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

	int k = 0;

	for (i = 0; i < 9; i++)
	{
		k++;
		j++;
		for (; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		j = k;

	}
	putchar('\n');
	return (0);
}
