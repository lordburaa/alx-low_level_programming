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
	dlistint_t *fi = *h;
	dlistint_t *loop = *h;
	dlistint_t *new;
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int lp = idx - 1;

	new = malloc(sizeof(dlistint_t));
	if (*h == NULL || new == NULL)
	{
		return (NULL);
	}
	while (loop)
	{
		k = k + 1;
		loop = loop->next;
	}
	if (idx > k - 1)
		return (NULL);
	while (i < lp && temp)
	{
		i++;
		temp = temp->next;
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = fi;
		new->n = n;
		*h = new;
		return (new);
	}
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
