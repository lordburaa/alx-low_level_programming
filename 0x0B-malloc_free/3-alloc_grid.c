#include "main.h"
/**
 * alloc_grid - allocate memory
 * @width: width of ith 1D array
 * @height: height of an 2D array
 * Return: allocated 2d array on success else return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, y;
	int **me;

	if (width <= 0 || height <= 0)
		return (NULL);
	me = malloc(sizeof(int *) * height);
	if (me == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		me[i] = malloc(sizeof(int) * width);

		if (me[i] == NULL)
		{
			for (; i >= 0; i--)
				free(me[i]);
			free(me);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			me[i][y] = 0;
	}
	return (me);
}
