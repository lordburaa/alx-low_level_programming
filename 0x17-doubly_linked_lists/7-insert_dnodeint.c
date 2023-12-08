#include "lists.h"
/**
 * insert_dnodeint_at_index -  insert new node at given positon
 * @h: head
 * @idx: index
 * @n: number
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *loop = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	unsigned int k = 0;

	new = malloc(sizeof(dlistint_t));
	if (*h == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new->n = n;
	while (loop)
	{
		k = k + 1;
		loop = loop->next;
	}
	if (idx > k - 1)
	{
		free(new);
		return (NULL);
	}
	while (temp)
	{
		if (i == idx - 1 && temp->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == i)
		{
			new->next = temp->next;
			new->prev = temp;
			
			temp->next = new;
			temp->next->prev = new;
			return (new);

		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
