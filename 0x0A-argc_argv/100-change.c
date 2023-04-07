#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 *  to make change for an amount of money
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
**/
int main(int argc, char *argv[])
{
	int cent, coin = 0;
	
	if (argc == 2)
	{
		cent = atoi(*(argv + 1));
		while (cent > 0)
		{
			if (cent % 25 < cent)
			{
				cent -= 25;
				coin++;
			}
			else if (cent % 10 < cent)
			{
				cent -= 10;
				coin++;
			}
			else if (cent % 5 < cent)
			{
				cent -= 5;
				coin++;
			}
			else if (cent % 2 < cent)
			{
				cent -=2;
				coin++;
			}
			else if (cent % 1 < cent)
			{
				cent -= 1;
				coin++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coin);
	return (0);
}
