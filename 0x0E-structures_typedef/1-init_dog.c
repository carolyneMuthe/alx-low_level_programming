#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer to the struct dog to initialize
 * @name: The name to initialize
 * @age: The age to initialize
 * @owner: The owner to initialize
 *
 * Description: This function sets the fields of the struct dog
 * to the values provided in the arguments.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
