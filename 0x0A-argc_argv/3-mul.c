#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: input
 * @argv: input
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int x;
	 int res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			res *= atoi(argv[x]);
		}
		printf("%d\n", res);
	}
	return (0);
}
