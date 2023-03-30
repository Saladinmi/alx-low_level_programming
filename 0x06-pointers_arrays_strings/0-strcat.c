#include "main.h"

/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@destin: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *destin, char *src)
{
	int x, y;

	for (x = 0; destin[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		destin[x] = src[y];
		x++;
	}
	return (destin);
}
