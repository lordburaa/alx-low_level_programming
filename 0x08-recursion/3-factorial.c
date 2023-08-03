#include "main.h"
/**
 * factorial - return the factorial of a numbeer
 * @n: return to the factorial
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
