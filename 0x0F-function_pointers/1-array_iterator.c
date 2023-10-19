#include "function_pointers.h"
/**
 * array_iterator - array itertron
 * @array: array passed
 * @size: size of the array
 * @action: functoin pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
