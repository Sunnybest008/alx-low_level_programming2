#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search within.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the first
 * occurrence of 'needle' in 'haystack',
 *         or NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *sub_needle;

	while (*haystack != '\0')
	{
		start_haystack = haystack;
		sub_needle = needle;

		while (*haystack != '\0' && *sub_needle
				!= '\0' && *haystack == *sub_needle)
		{
			haystack++;
			sub_needle++;
		}

		if (*sub_needle == '\0')
		{
			return (start_haystack);
		}

		haystack = start_haystack + 1;
	}

	return (NULL);
}
