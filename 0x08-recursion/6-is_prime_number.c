#include "main.h"
/**
 * prime_x - Main Entry
 * @a: input
 * @b: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime_x(int a, int b)
{
	if  (a != b && a % b == 0)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_x(a, b + 1));
}

/**
 * is_prime_number - Main Entry
 * @n: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_x(n, 2));
}

