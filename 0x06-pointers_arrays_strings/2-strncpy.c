#include "main.h"
/**
 * _strncpy - copies strings
 *
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
