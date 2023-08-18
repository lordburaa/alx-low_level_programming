#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sp = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
				j++;
				continue;
			}
			sp = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(list);
}
