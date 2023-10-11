#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the dog's name as a string
 * @age: The age of the dog as a floating-point number
 * @owner: Pointer to the dog's owner's name as a string
 *
 * Description: This function initializes the
 * members of a struct dog with the provided
 * values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
