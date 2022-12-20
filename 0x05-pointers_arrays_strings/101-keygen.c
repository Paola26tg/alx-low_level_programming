#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generate random valid password for the program
 * Return: 0
 *
 */
int main(void)
{
	int i;
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$^&*?QWERTYUIOPASDFGHJKLZXCVBNM";

	srand(time(NULL));
	for(i = 0; i < 10; i++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}
	return (0);
}
