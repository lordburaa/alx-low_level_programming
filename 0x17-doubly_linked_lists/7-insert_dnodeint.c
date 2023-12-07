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
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	while (temp->next != NULL)
	{
		if (i == idx - 1)
			break;
		i++;
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	new->n = n;
	return (new);
}