#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **lee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	lee = malloc(sizeof(int *) * height);
	if (lee == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		lee[x] = malloc(sizeof(int) * width);
		if (lee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(lee[x]);
			free(lee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			lee[x][y] = 0;
	}
	return (lee);
}
