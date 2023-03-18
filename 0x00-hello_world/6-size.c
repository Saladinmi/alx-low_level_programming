#include <stdio.h>
/**
 * main-A program that prints the size of different computer types
 * Return:Always 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int x;
	long long int y;
	float z;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
