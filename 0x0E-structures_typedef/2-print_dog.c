#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the
 * name, age, and owner of a dog struct.
 * If any element of d is NULL, it
 * prints "(nil)" for that element.
 * If d is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
