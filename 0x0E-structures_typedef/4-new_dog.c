#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = owner;
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}


	return (d);
}
