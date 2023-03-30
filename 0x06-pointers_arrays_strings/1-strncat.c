#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	if (y < n)
	{
	dest[x] = '\0';
	}
	return dest;
}
