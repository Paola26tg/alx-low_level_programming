#include "main.h"
/**
 * print_array - prints n elements of array of integer
 * @a: integer
 * @n: integer
 */
void print_array(int *a; int n)
{
	int i = 0, j;

	while (a[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		if ( j < n - 1)
			printf("%d" + "," + " ", a[j]);
		else
			printf("%d\n");
	}
}
