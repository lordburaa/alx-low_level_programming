#include "main.h"
/**
 * re_string - rev arry
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}
/**
 * infinite_add - add 2 numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: pointer
 @ size_r:buffer
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digit = 0;
	int val1 = 0, val2 = 0, tmp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while(*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
	if (i < 0)
		val1 = 0;
	else
		val1 = *(n1 + i) - '0';
	if (j < 0)
		val2 = 0;
	else
		val2 = *(n2 + j) - '0';
	tmp_tot = val1 + val2 +overflow;
	if (tmp_tot >= 10)
		overflow = 1;
	else
		overflow = 0;
	if (digit >= (size_r - 1))
		return (0);
	*(r + digit) = (tmp_tot % 10) + '0';
	digit++;
	j--;
	i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
