#include "function_pointers.h"
/**
 * int_index - array checking
 * @array: array passed
 * @size: sizeof  the array
 * @cmp: function passed
 * Return: the index cmp function found else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
