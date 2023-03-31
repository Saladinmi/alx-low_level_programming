#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *entry)
{
	int y, cap, cou;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	y = 32;

	for (cap = 0; entry[cap] != '\0'; cap++)
	{
		if (entry[cap] >= 'a' && entry[cap] <= 'z')
		{
			entry[cap] =  entry[cap] - y;
		}
		y = 0;
		for (cou = 0; chars[cou] != '\0'; cou++)
		{
			if (chars[cou] == entry[cap])
			{
				y = 32;
				break;
			}
		}
	}
	return (entry);
}
