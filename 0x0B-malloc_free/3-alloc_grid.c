#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: width
 * @height: height
 * Return: to 2
 */
int **alloc_grid(int width, int height)
{
	int **me;
	int i, y;

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
