#include "main.h"
/**
 * _atoi - converts astring to an integer
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
	int i, d, n, lg, f, dgt;

	i = 0;
	d = 0;
	n = 0;
	lg = 0;
	f = 0;
	dgt = 0;

	while (s[lg] != '\0')
		lg++;
	while (i < lg && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (d % 2)
			{
				dgt = -dgt;
			}
			n = n * 10 + dgt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
