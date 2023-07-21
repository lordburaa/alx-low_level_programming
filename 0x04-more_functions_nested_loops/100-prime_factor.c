#include <stdio.h>
#include <math.h>
/**
 * main - prime factor of the numberr
 * Return: Always 0
 */
int main(void)
{
	long x, maxF;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <=  square; x++)
	{
		if (number % x == 0)
		{
			maxF = number / x;
		}
	}
	printf("%ld\n", maxF);
	return (0);
}
