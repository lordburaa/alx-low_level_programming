#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct funt
 * @s:operator passed
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t test;

	test.op = s;
	test.f = NULL;
	while (*test.op == '+' || *test.op == '-' ||
			*test.op == '*' || *test.op == '/' || *test.op == '%')
	{
		test.f = (*test.op == '+') ? &op_add :
			(*test.op == '-') ? &op_sub :
			(*test.op == '*') ? &op_mul :
			(*test.op == '/') ? &op_div :
			(*test.op == '%') ? &op_mod :
			NULL;
		test.op++;

	}
	return (test.f);
}
