#include "main.h"
/**
 * cap_string - captalize all words of a
 * @x: the string
 * Return: capitalized
 */
char *cap_string(char *x)
{
	char src[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
	int len = 13;
	int a, i;

	x = "bura, is; in learning c";
	a = 0;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == src[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);
}
