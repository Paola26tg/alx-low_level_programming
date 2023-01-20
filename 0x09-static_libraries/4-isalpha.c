#include "main.h"
/**
 * _isalpha - checks alphabetic characters
 *
 * Return: 1 if characcter is aplhabetic, 0 otherwise
 *
 * @c: character to be check
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
