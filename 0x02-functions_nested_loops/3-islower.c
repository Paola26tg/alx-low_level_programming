#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 (success)
 * Return: 0 (fail)
 */
int _islower(int c)
{
	if (c <= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
