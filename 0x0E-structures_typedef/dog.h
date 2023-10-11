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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
