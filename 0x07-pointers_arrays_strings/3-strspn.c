#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to get length
 * @accept: character to accept
 *
 * Return: number of bytes of the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					k++;
				j++;
			}
		}
		else
			return (k);
	}
	return (k);
}
