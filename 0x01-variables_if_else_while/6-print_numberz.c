#include <stdio.h>
/**
 * main-A program that prints number of base 10 using putchar
 * Return:0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 46);
	}
	putchar('\n');
	return (0);
}
