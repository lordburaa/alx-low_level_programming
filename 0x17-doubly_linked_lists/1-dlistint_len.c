#include "lists.h"
/**
 * print_dlistint - double linked list
 * @h: h
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t number = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number++;
	}
	return (number);
}
