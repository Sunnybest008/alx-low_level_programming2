#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * using malloc and free.
 * @ptr: A pointer to the previously allocated memory.
 * @old_size: The old size, in bytes, of
 * the allocated space for ptr.
 * @new_size: The new size, in bytes, of the
 * new memory block.
 *
 * Return: A pointer to the newly allocated memory
 * block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	while (i < new_size)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);

	return (new_ptr);
}
