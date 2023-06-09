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
	unsigned int x;
	char *strx;

	strx = malloc(sizeof(char) * size);
	if (size == 0 || strx == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		strx[x] = c;
	return (strx);

}
