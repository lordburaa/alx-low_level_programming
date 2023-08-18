#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Return the sum of all its paramters
 * @n: number of paramter passed
 * @...: A variable number
 * Return: if n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sumR = 0;

	va_start(ap, n);
	for (j = 0; j < n; j++)
		sunR += var_arg(ap, int);
	va_end(ap);

	return (sumR);
}
