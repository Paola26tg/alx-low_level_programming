#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @s: string to search character
 * @c: character to search
 *
 * Return: pointer to a first ocurrence of character and null if it is not foun
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
			return (s[i]);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
