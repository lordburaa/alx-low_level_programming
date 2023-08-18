#include "3-calc.h"
#include <string.h>
/**
 * main - functoin 
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k, l;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%') || (strlen(argv[2]) > 1))
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	k = atoi(argv[1]);
	l = atoi(argv[3]);

	(*get_op_func(argv[2]))(k, l);
		return (0);
}
