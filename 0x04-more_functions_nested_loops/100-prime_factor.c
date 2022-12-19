#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 * Return: Always 0
 *
 */
int main(void)
{
	long i, max;
	long num = 612852475143;

	for (i = 1; i <= sqrt(num); i++)
	{
		if(num % i == 0)
		{
			max = num / i;
		}
	}
	printf("%d\n", max);
	return (0);
}
