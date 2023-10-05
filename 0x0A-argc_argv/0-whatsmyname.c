#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description:
 * This program prints the name of
 * the program itself when executed
 * from the command line. It also returns
 * a status code to indicate
 * success or failure.
 *
 * Return: 0 if successful (program name printed),
 * 1 if there are
 * no command-line arguments (argc <= 0).
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
