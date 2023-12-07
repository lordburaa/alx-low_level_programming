#include "lists.h"
/**
 * dlistint_len - double linked list
 * @h: h
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t number = 0;

	while (temp)
	{
		temp = temp->next;
		number++;
	}
	return (number);
}
