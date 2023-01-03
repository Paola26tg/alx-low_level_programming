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
	while (*s)
	{
		if (s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
