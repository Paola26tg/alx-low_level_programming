#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: char
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int pi = 0;
	int mi = 1;
	int j = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			mi *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			pi = (pi * 10) + (s[i] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}

		i++;
	}

	pi *= mi;
	return (pi);
}
