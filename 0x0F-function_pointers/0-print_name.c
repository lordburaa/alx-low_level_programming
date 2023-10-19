#include "function_pointers.h"
/**
 * print_name - function pointer
 * @name: string to be passed
 * @f: functin
 */

void print_name(char *name, void(*f)(char*))
{
	f(name);
}
