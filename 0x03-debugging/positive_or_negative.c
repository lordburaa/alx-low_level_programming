#include "main.h"

void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d isnegative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
