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
	dlistint_t *temp = *head;
	dlistint_t *tm = malloc(sizeof(dlistint_t));

	if (tm == NULL)
		return (NULL);

	tm->prev = NULL;
	tm->next = NULL;
	tm->n = n;
	if (*head == NULL)
	{
		tm->next = NULL;
		*head = tm;
		return (*head);
	}
	tm->next = temp;
	temp->prev = tm;
	(*head) = tm;
	return (tm);
}
