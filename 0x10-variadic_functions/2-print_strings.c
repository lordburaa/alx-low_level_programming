#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prins strigs
 * @separator: string to be printed
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int idx;

	va_start(string, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
