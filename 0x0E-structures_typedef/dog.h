#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 * @name: Pointer to the dog's name as a string
 * @age: The age of the dog as a floating-point number
 * @owner: Pointer to the dog's owner's name as a string
 *
 * Description: This structure defines the
 * attributes of a dog, including its name, age,
 * and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
