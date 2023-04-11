#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *strx;
	unsigned int x = 0;

	if (str == 0)
		return (0);
	while (str[x] != 0)
		x++;
	x++;
	strx = malloc(sizeof(char) * x);
	for (x = 0; str[x] != 0; x++)
		strx[x] = str[x];
	strx[x] = 0;
	return (strx);
}
