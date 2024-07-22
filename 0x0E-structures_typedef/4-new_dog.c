#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	size_t name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	name_len = strlen(name);
	owner_len = strlen(owner);

	 d->name = malloc(name_len + 1);
	 d->owner = malloc(owner_len + 1);
	 strcpy(d->name, name);
	 strcpy(d->owner, owner);

	  d->age = age;
	return (d);
}
