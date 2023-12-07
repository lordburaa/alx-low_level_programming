#include "lists.h"
/**
 * add_dnodeint - at the begginging
 * @head: head
 * @n: number
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->prev = NULL;
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
