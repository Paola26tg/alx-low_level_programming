#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 * @size: size of array
 * @c: char
 * Return: Null if size equal 0 and the pointer if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (Null);
	}
	array = malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (Null);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
