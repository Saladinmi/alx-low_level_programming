#include "main.h"
/**
 * times_table - prints the 9 time table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x = y;
			if (z > 0)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(44);
				_putchar(12);
				_putchar(d + 'a');
				_putchar(u + 'a');
			}
			else
			{
				if (y != 9)
				{
					_putchar(44);
					_putchar(12);
					_putchar(12);
				}
				_putchar(z + 'a');
			}
		}
		_putchar('\n');
	}
}
