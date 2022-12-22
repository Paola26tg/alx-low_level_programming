#include "main.h"
/**
 * string_toupper - change lowercase in a string to a uppercase
 * @a: string to change
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' && a[i] == 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}
