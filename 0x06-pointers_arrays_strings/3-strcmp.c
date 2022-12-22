#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string
 * Return: r
 */
int _strcmp(char *s1, char  *s2)
{
	int i = 0, j = 0, k, r = 0, l = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i <= j)
		k = i;
	else
		k = j;
	while (l <= k)
	{
		if (s1[l] == s2[l])
		{
			l++;
			continue;
		}
		else
		{
			r = s1[l] - s2[l];
			break;
		}
		l++;
	}
	return (r);
}
