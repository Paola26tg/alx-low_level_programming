#include "main.h"
/**
 * cap_string - capitalize all words in string
 * @a: string to capitalize
 * Return: char
 */
char *cap_string(char *a)
{
	int s = 0, i;
	int j = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (a[s])
	{
		i = 0;

		while (i < j)
		{
			if ((s == 0 || a[s - 1] == spc[i]) && (a[s] >= 97 && a[s] <= 122))
				a[s] = a[s] - 32;

			i++;
		}

		s++;
	}

	return (a);
}
