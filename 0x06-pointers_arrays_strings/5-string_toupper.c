#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int x = 0;
	int d = 'a' - 'A';

	for (x = 0; hi[x] != '\0'; ++x)
	{
		if (hi[x] >= 'a' && hi[x] <= 'z')
		{
			hi[x] = hi[x] - d;
		}
	}
	return (hi);
}
