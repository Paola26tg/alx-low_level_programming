#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
