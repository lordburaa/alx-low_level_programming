#include "main.h"
#include <unistd.h>
/**
 * _isupper - Check if a letter is upper
 * @a: The number to be checked
 * Return: 1 for upper and 0 for lower
 */
int _isupper(int a)
{
	if (a <= 90 && a >= 65)
	{
		return (1);
	}
	return (0);
}
