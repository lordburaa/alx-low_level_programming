#include "main.h"
/**
 * swap_int - swap number
 * @a: int to be checked
 * @b: int to be checked
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
