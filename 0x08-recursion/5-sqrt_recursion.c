#include "main.h"
/**
 * _root - Returns the square root of a number
 * @base: First input.
 * @root: Second input.
 *
 * Description: Returns the square root.
 * Return: Square root
 */
int _root(int base, int root)
{
	if (base == root * root)
	{
		return (root);
	}
	else if (base < root * root)
	{
		return (-1);
	}
		return (_root(base, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	return (_root(n, 1));
}
