#include "main.h"

/**
 * largest_number - return the largest number of three integer
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a < b && b < c)
	{
		largest = c;
	} else if (b < c && c < a)
	{
		largest = a;
	} else if (c < a && a < b)
	{
		largest = b;
	} else
		largest = a = b = c;
	return (largest);
}
