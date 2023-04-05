#include "main.h"
/**
 * sqrt_a-Makes possible to evaluate from 1 to n
 * @a: input
 * @b: input
 * Return: 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b < a)
	{
		return (sqrt_a(a, b + 1));
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
	return (sqrt_a(n, 0));
}

