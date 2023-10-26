#include "main.h"
/**
 * binary_to_uint - change the binary to decimal
 * @b: char containg bianry
 *
 * Return: if Success return converted binary else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int result = 1;
	unsigned int sum = 0;
	int check;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (((b[i] != '0') ^ (b[i] != '1')) == 0)
			return (0);
		i++;
	}
	i--;
	check = i;
	while (i >= 0)
	{

		if (b[i] == '1')
		{
			sum = result + sum;
		}
		result = 2 * result;
		i--;
	}
	return (sum);

}
