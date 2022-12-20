#include "main.h"
/**
 * rev_string - that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;
	j = i--;
	for(i--; i >= 0; i--)
	{
		*(s + (j - i)) = s[i];
	}
}
