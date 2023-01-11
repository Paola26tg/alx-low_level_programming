#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first char
 * @s2: second char
 * Return: pointer to s1 and s2 and NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		j++;
	s = malloc(sizeof(char) * j);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[k++] = s1[i];
	for (i = 0; s2[i]; i++)
		s[k++] = s2[i];
	return (s);
}
