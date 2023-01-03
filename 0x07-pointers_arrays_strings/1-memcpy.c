#include "main.h"
/**
 * _memcpy - copies memories area
 * @dest: char of destination
 * @src: char of source
 * @n: bytes from memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
