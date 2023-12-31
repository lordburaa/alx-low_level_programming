#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodee at index of linked list
 * @head: head list
 * @index: node deleted
 * Return: 1 if succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *t;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	p = *head;

	if (index == 0)
	{
		*head = p->next;
		free(p);
	}

	if (index > 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			if (p->next == NULL)
				return (-1);
			p = p->next;
		}
		t = p;
		p = p->next;
		t->next = p->next;
		free(p);
	}
	return (1);
}
