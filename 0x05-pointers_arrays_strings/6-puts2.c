#include "main.h"
/**
 * puts2- function should print only one character out of
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int mei = 0;
	int z = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		mei++;
	}
	z = mei - 1;
	for (o = 0; o <= z; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o];
		}
		}
		_putchar('\n');
}

