#include "main.h"
/**
 * rev_string(char *s)
 * @s: the string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	int l, idx;
	char tmp;

	l = 0;
	idx = 0;
	while (s[idx++])
		l++;
	for (idx = l - 1; idx >= l / 2; idx--)
	{
		tmp = s[idx];
		s[idx] = s[l - idx - 1];
		s[l - idx - 1] = tmp;
	
	}
}
