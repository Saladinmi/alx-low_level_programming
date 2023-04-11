#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *concx;
	int x, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = i = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[i] != '\0')
		i++;
	concx = malloc(sizeof(char) * (x + i + 1));
	if (concx == NULL)
		return (NULL);
	x = i = 0;
	while (s1[x] != '\0')
	{
		concx[x] = s1[x];
		x++;
	}
	while (s2[i] != '\0')
	{
		concx[x] = s2[i];
		x++, i++;
	}
	concx[i] = '\0';
	return (concx);
}

