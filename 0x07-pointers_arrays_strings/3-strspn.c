#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0;
	unsigned int dis = 0;

	while (s[y] != ' ' && s[y] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[y] == accept[x])
				dis++;
			x++;
		}
		y++;
		x = 0;
	}
	return (dis);
}
