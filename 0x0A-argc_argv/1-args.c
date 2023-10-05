#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Description:
 * This program prints the number
 * of arguments passed to it through
 * the command line, followed by a new line.
 *
 * Return: 0 (Always, success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
