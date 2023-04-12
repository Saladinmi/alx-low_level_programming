#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of
 * words in a string
 * @s: string to evaluat
 *
 * Return: number of word
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
		if (s[c] == ' ')
	{
		flag = 0;
	}
	else if (flag == 0)
	{
	flag = 1;
	w++;
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matric, *tmpo;
	int i, k = 0, len = 0, words, c = 0, star, endf;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matric = (char **) malloc(sizeof(char *) * (words + 1));
	if (matric == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				endf = i;
				tmpo = (char *) malloc(sizeof(char) * (c + 1));
				if (tmpo == NULL)
					return (NULL);
				while (star < endf)
					*tmpo++ = str[star++];
				*tmpo = '\0';
				matric[k] = tmpo - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			star = i;
	}
	matric[k] = NULL;
	return (matric);
}
