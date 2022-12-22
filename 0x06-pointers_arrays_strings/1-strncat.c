#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination string
 * @src: source string
 * @n: bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
	{
		dest[i] = scr[j];
		j++;
		i++;
	}
	dest[n + i + 1] = '\0';
	return (dest);
}	
