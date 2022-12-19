#include "main.h"
/**
 * swap_int - swaps a value of two integer
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
