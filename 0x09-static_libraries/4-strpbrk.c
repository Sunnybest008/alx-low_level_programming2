#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for
 * any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string
 * containing characters to search for.
 *
 * Return: Pointer to the first occurrence in 's'
 * of any character from 'accept',
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}

		s++;
	}

	return (NULL);
}
