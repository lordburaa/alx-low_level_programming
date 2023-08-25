#include "main.h"
/**
 * print_list - prints all elments
 * @h: singly linkedd list
 * Return: number of elemts in the list
 */
size_t print_list(const list_t *h)
{
	size_t lem;

	lem = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->leg, h->str);
		h = h->next;
		lem++;
	}
	return (lem);
}
