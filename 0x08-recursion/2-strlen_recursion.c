#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string to get length
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
	}
	return (_strlen_recursion(s) + 1);
}
