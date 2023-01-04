#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string of any of a set of byte
 * @s: string of search
 * @accept: char to search
 *
 * Return: pointer of byte in s that matches NULL if it is not find
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
