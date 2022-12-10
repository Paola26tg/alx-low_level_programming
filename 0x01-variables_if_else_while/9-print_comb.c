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
		if (i == 9)
		{
			putchar(i + '0');
			putchar('\n');
		} else
		{
			putchar(i + '0');
			putchar(',');
		}
	}
	return (0);
}
