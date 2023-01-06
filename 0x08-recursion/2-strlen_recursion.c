#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string to get length
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
	}
	return (_strlen_recursion(s) + 1);
}
