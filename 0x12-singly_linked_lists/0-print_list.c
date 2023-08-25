#include "main.h"
/**
 * print_list - prints all elments
 * @h: singly linkedd list
 * Reeturn: number of elemts in the list
 */
size_t print_list(const list_t *h)
{
	size_t lem;

	lem = 0;
	while(h != NULL)
	{
		if (h != NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf ("[%d] %s\n", h->len, h->str);
		h = h->next;
		lem++;
	}
	return (lem);
}
