#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode of itsef
 * @argc: nnumber of arg
 * @argv: array of pointer 
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int byt, idx;
	int (address)(int, char **) = main;
	unsigned char opcode;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (idx = 0; idx < byt; idx++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (idx == byt - 1)
			cotinue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}