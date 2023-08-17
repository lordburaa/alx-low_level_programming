#include "3-calc.h"

int op_div(int a, int b);
int op_mul(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);
/**
 * op_mod - return remainder of numbers
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);

/**
 * op_add - return the sum of numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_div - divsion of numebr
 * @a: first number
 * @b: second number
 * Return: int of div
 */
int op_div(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the substraction of numbers
 * @a: first number
 * @b: second number
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
/**
 * op_mul - return the multiplcation of numbers
 * @a: first number
 * @b: second number
 * Return: mult
 */
int op_mult(int a, int b)
{
	return (a * b);
}
