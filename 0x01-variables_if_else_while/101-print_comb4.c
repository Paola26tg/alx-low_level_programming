#include <stdio.h>

/**
 * main - Entry point prints combination of three digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	int j = 0;

	int k = 1;

	int l = 0;

	int m = 1;

	for (i = 0; i < 8; i++)
	{
		j++;
		l++;
		for (; j <= 8; j++)
		{
			k++;
			m++;
			for (; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j +'0');
				putchar(k +'0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k = m;
		}
		j = l;
	}
	putchar('\n');
	return (0);
}
