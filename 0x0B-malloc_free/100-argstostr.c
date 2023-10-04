#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0;
	}

	str = malloc(total_len + 1); /* Add 1 for the null terminator */

	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[len++] = av[i][j];
		str[len++] = '\n';
	}
	str[len] = '\0';

	return (str);
}
