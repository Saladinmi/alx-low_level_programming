#include "main.h"
/**
 * sqrt_a - Main Entry
 * @a: input
 * @b: input
 * Return: 0
 */
int sqrtOa(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b < a)
	{
		return (sqrtOa(a, b + 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - Main Entry
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrtOa(n, 0));
}

