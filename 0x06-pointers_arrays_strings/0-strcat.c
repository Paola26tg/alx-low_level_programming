#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;
	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
