#include "main.c"
#include <stdio.h>
/**
 * main - Prints 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long j = 0, k = 1, m;

	while (i <= 50)
	{
		m = j + k;
		printf("%lu", m);
		j = k;
		k = m;
		if( i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}
	return (0);
}
