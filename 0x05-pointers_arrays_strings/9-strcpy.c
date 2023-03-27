#include "main.h"
/**
 * char *_strcpy - function copies the string pointer by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int x = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for ( ; x < p; x++)
	{
		dest[x] = src[x];
	}
	dest[p] = '\0';
	return (dest);
}
