#include "lists.h"
/**
 * insert_nodeint_at_index - new node list
 * @head: first nodde list
 * @idx: index newnode 
 * @n: data to insert in the new
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nw;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = nw;
		return (nw);
	}
	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = nw;
			return (nw);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
