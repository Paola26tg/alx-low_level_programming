#include <stdio.h>
/**
 * main - Entry point print _putchar
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char Mystr[] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		putchar(Mystr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
