#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <stddef.h>

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
