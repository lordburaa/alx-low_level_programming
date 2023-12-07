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

	new->prev = NULL;
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
