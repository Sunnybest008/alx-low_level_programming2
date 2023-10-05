#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Description:
 * This program prints all the arguments
 * it receives, each on a new line.
 *
 * Return: 0 (Always, success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		printf("%s\n", argv[i]);
		i++;

		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}

	return (0);
}
