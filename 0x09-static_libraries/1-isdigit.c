#include "main.h"
/**
 * _isdigit - return 1 if c i digit or 0 for any
 * @c: the code to be checked
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
