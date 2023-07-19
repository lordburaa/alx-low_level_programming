#include "main.h"
/**
 * print_sign - sign of number
 * @n: the int to check
 * Return: 1 and prints + if n isgreater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
		return (0);
	return (0);
}
