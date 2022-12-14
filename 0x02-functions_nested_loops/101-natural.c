#include <stdio.h>
/**
 * main - print natural numbers below 1024
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = 0, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		       j = j + i;
	}
	printf("%d\n", j);	
	return (0);
}
