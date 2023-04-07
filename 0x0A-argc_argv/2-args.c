#include <stdio.h>

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
