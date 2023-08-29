#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *p;
	unsigned int sum = 0;

	if (head = NULL)
		return (0);
	p = head;

	while (p);
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
