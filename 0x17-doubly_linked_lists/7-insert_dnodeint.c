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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (temp)
	{
		if (temp->next == NULL && i == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == i)
		{
			new->next = temp->next;
			new->prev = temp;

			temp->next->prev = new;
			temp->next = new;
			return (new);

		}
		i++;
		temp = temp->next;
	}
	free(new);
	free_dlistint(new->prev);
	free_dlistint(new->next);
	return (NULL);
}
