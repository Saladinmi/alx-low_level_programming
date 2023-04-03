#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int y = 0;

	while (*s)
	{
		while (accept[y] != '\0')
		{
			if (*s == accept[y])
				return (s);
			y++;
		}
		y = 0;
		s++;
	}
	return ('\0');
}
