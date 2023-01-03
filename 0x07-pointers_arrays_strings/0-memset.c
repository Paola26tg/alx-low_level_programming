#include "main.h"
/**
 *_memset - fills memory with a constant bytes
 *@s: char pointer
 *@b: char
 *@n: insigned int
 *Return: pointer to a memory area s
 */
char *_memset(char *s, char b, insigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
