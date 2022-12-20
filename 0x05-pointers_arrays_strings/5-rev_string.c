#include "main.h"
/**
 * rev_string - that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, k;
	char j;

	while (s[i] != '\0')
		i++;
	for (k = 0; k < i / 2; k++)
	{
		j = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = j;
	}
}
