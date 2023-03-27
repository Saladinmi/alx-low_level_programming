#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int mei = 0;
	int o;

	while (*s != '\0')
	{
		mei++;
		s++;
	}
	s--;
	for (o = mei; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
