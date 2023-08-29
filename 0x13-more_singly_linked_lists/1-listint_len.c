#include "lists.h"
/**
 * listint_len - number of elets
 * @h: pointer to head
 * Return: elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
