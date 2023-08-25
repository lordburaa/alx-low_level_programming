#include "lists.h"
/**
 * list_len - number of elemts list
 * @h:pointer to structure
 * Return: length
 */
size_t list_len(const list_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next
	}
	return (j);
}
