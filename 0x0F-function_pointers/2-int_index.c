#include "function_pointers.h"
/**
 * int_index - searches for an integer in array
 * @array: array of integers
 * @size : size of srrau
 * @cmp: pooointer function to be compared
 * Return: 0 if no elements match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;
	if (array == NULL || cmp == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
	}
	return (-1);
}
