#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry Point
 * @separator: space
 * @n: elements to be printed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));

		if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
