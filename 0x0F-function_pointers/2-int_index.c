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

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
