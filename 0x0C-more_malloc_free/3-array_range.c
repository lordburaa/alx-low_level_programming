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
	int *ptr;

	if (min > max)
		return (NULL);
	ptr =  malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
