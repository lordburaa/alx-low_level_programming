#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(consr char * const format, ...)
{
	int j = 0;
	char *str, *sp = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
				break;
				case 'i':
				printf("%s%ld", sp, va_arg(list, int));
				break;
				case 'f':
					printf("%s%c", sp, va_arg(list, double));
				break;
				case 's':
				str = vs_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sp, str);
				break;
				default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
