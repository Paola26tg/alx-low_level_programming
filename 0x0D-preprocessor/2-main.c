#include <stdio.h>
/**
 * main - prints the name of the file it was compiled
 * Return: 0
 */
int main(void)
{
	puts(__BASE_FILE__);
	return (0);
}
