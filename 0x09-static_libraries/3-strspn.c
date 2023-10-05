#include "main.h"

/**
 * _strspn - Gets the length of a
 * prefix substring that consists of only
 * characters contained in another string.
 * @s: Pointer to the string to be checked.
 * @accept: Pointer to the string
 * containing characters to match.
 *
 * Return: Number of bytes in the
 * initial segment of 's' that consist only of
 * characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *temp = accept;
		int matched = 0;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				matched = 1;
				break;
			}
			temp++;
		}

		if (matched == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
