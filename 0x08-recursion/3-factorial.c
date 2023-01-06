#include "main.h"
/**
 * factorial - returns the factorial of giving number
 * @n: number to get factorial
 * Return: factorail of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
