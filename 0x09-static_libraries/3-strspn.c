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
	int i = 0, j, k = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					k++;
			}
		}
		else
			return (k);
		i++;
	}
	return (k);
}
