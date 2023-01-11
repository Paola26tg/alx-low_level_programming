#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string copied
 * Return: returns a pointer to a string
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	cpy = malloc(sizeof(char) * (j + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cpy[i] = str[i];

	cpy[j] = '\0';

	return (cpy);
}
