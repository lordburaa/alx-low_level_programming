#include "main.h"

void reverse_array(int *a, int n)
{
	int i;
	
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d",(a[i]));
		if (!a[0])
		{
			printf(", ");
		}
	}
	printf("\n");
}
