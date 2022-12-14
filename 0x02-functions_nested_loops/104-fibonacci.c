#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long j = 0, k = 1, m;
	unsigned long j1, j2, k1, k2;
	unsigned long n, o;

	while (i < 92)
	{
		m = j + k;
		printf("%lu, ", m);

		j = k;
		k = m;
		i++;
	}
	j1 = j / 10000000000;
	k1 = k / 10000000000;
	j2 = j % 10000000000;
	k2 = k % 10000000000;

	for (i = 93; i < 99; i++)
	{
		n = j1 + k1;
		o = j2 + k2;
		if (j2 + k2 > 9999999999)
		{
			n += 1;
			o %= 10000000000;
		}

		printf("%lu%lu", n, o);
		if (i != 98)
			printf(", ");
		j1 = k1;
		j2 = k2;
		k1 = n;
		k2 = o;
	}
	printf("\n");
	return (0);
}
