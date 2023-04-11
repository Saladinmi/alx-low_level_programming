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
        int x, r = 0;
        if (str == NULL)
                return (NULL);
        x = 0;
        while (str[x] != '\0')
                x++;
        strx = malloc(sizeof(char) * (x + 1));
        if (strx == NULL)
                return (NULL);
        for (r = 0; str[r]; r++)
                strx[r] = str[r];
        return (strx);
}

