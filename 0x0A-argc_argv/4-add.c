#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string
 * @str: array
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int i;
	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - print name
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count, int_count;
	int sum = 0;
	
	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			int_count = atoi(argv[count]);
			sum += int_count;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
