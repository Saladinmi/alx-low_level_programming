#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-A program that prints the last digit of a number
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;
	int sd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sd = n % 10;
	if (sd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, sd);
	}
	else if (sd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, sd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, sd);
	}
	return (0);
}
