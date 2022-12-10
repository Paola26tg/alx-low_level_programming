#include <stdio.h>

/**
 * main - Entry point prints the alphabets in lower case
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char mystr[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(mystr[i]);
	putchar('\n');
	return (0);
}
