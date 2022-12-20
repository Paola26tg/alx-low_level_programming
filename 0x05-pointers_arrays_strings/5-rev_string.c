#include "main.h"
/**
 * rev_string - that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
		i++;
	for (i--; i >= 0; i--)
	{
		*(s + j) = s[i];
		j++;
	}
}
