#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include <stddef.h>

/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: Pointer to the dog's name as a string
 * @age: The age of the dog as a floating-point number
 * @owner: Pointer to the dog's owner's name as a string
 *
 * Return: Pointer to the new dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new dog_t structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Duplicate and store the name and owner strings */
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
