#include "main.h"
/**
 * rot13 - encodes string with rot13
 * @a: string to encode
 * Return: char
 */
char *rot13(char *a)
{
	int i = 0;

	while (a[i])
	{
		while ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			if ((a[i] > 'm' && a[i] <= 'z') || (a[i] > 'M' && a[i] <= 'Z'))
			{
				a[i] = a[i] - 13;
				break;
			}

			a[i] = a[i] + 13;
			break;
		}

		i++;
	}

	return (a);
}
