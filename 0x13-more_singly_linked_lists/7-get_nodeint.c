#include "lists.h"

listint_t *get_noseint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (p->next == NULL)
			return (NULL);
		c = p->next;
		p = c;
	}
	return (p);
}
