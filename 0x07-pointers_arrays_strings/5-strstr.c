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
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i])
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}

