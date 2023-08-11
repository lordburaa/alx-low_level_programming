#include <stdio.h>
#include "main.h"
#include <stdlib.h>

#define ERR_MSG "Error"
/**
 * is_digit - checkd if astrung contain a non digit char
 * @s: string to be checked
 * Return: 0
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}
/**
 * _strlen - return the elngth of the string
 * @s: string to evalutae
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
/**
 * errors - error
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multple two postive number
 * @argc: numbr of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, j, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ln = ln1 + ln2 + 1;
	result = malloc(sizeof(int) * ln);
	if (!result)
		return (1);
	for (j = 0; j <= ln1 + ln2; j++)
		result[j] = 0;
	for (ln1 = ln1 - 1 ; ln1 >= 0; ln1--)
	{
		digit1 = s1[ln1] - '0';
		carry = 0;
		for (ln2 = _strlen(s2) - 1; ln2 >= 0; ln2--)
		{
			digit2 = s2[ln2] - '0';
			carry += result[ln1 + ln2 + 1] + (digit1 * digit2);
			result[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 + 1] += carry;
	}
	for (j = 0; j < ln - 1; j++)
	{
		if (result[j])
			a = 1;
		if (a)
			_putchar(result[j] + '0');
	}
	if (!a)
		_putchar('\0');
	putchar('\n');
	free(result);
	return (0);
}
