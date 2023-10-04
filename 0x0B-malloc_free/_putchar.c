#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error, -1 is return, and errno is set appropriately
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
