#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 (success)
 * @c: character to check
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
