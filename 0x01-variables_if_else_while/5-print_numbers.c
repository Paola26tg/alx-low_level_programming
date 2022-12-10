#include <stdio.h>
/**
 * main - Entry point prints all single digits numbers
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}

