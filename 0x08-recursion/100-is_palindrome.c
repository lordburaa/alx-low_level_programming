#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks to revwi
 * @s: to be checked
 * Return: 1 if it is , 0 it's n
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to chck
 * Return: 1 if pain, 0 if not
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - char reverse for plaindrome
 * @s: string to check
 * @i: iterator
 * @len: lenght
 * Return: 1 if palindrome, otherwise 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
