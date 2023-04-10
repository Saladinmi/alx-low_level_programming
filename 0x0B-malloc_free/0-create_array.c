#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it w/ a char
 * @size: input size of array
 * @c: initializing char
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *strx;
	unsigned int x;

	strx = malloc(sizeof(char) * size);
	for (x = 0; x < size; x++)
	{
		strx[x] = c;
	strx[x] = 0;
	return (size < 1 ? 0 : strx);
	}
}
