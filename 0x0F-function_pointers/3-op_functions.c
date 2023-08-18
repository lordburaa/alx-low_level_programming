#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return remainder of numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);
}
/**
 * op_sub - return the sum of numbers
 * @a: first number
 * @b: second number
 * Return: sub
 */
int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (0);
}
/**
 * op_mul - divsion of numebr
 * @a: first number
 * @b: second number
 * Return: mul
 */
int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (0);
}
/**
 * op_div - return the substraction of numbers
 * @a: first number
 * @b: second number
 * Return: div
 */
int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (0);
}
/**
 * op_mod - return the multiplcation of numbers
 * @a: first number
 * @b: second number
 * Return: mod
 */
int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (0);
}
