#include "lists.h"
/**
 * print_listint - printd elements
 * @h: pointer"
 * Return: number of lists
 */
size_t print_listint(const listint_t *h)
{
	int m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
