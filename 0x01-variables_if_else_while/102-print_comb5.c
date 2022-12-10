#include <stdio.h>
/**
 * main - Entry point prints combination of two two-digits numbers
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i, j = 0, k = 0;

	int l = 1, m = 0, n = 1, o = 2, p = 0, r =0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (; k <= 9; k++)
			{
				for (; l <=9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (j < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = m;
				m++;
			}
			k = p;
			l = o;
			p++;
			o++;
		}
		j = r;
		r++;
	}
	putchar('\n');	
	return (0);
}
