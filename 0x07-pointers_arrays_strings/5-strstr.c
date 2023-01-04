#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string of searching
 * @needle: string to find
 *
 * Return: pointer to beginning ofthe locates substring or null not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}

