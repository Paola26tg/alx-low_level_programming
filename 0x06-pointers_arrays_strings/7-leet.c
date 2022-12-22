#include "main.h"
/**
 * leet - encodes string
 * @a: string to encode
 * Return: char
 */
char *leet(char *a)
{
	int i = 0, j = 0, k = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (a[i])
	{
		j = 0;

		while (j < k)
		{
			if (a[i] == r[j] || a[i] - 32 == r[j])
			{
				a[i] = n[j];
			}

			j++;
		}

		i++;
	}

	return (a);
}
