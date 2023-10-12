#include "main.h"
/**
 * array_range - create an array of integers
 * @min: min number
 * @max: max number
 *
 * Return: pointer to an array of integers
 */
int *array_range(int min, int max)
{
	int i = 0;
	int j = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ptr =  malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		if (i == j)
		{
			ptr[i] = max;
			break;
		}
		ptr[i] = min + i;
	}
	return (ptr);
}
