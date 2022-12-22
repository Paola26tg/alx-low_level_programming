#include "main.h"
/**
 * reverse_array - reverses a content of an array of integers
 * @n: number of element of array
 * @a: array to reverse
 */
void reverse_array(int *a, int n)
{
	int i, k;

	for (k = 0; k < n / 2; k++)
	{
		i = s[k];
		s[k] = s[n - k - 1];
		s[n - k - 1] = i;
	}
}
