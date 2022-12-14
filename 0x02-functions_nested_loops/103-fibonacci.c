#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i = 0, j = 1, k;
	float m;

	while (1)
	{
		k = i + j;
		if (k > 4000000)
			break;

		if ((k % 2) == 0)
			m = m + k;
		i = j;
		j = k;
	}
	printf("%.0f\n", m);

	return (0);
}
