#include "lists.h"
/**
 * add_dnodeint_end - add  node at the end of the head
 * @head: head
 * @n: number
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *end = malloc(sizeof(dlistint_t));

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	end->n = n;
	end->next = NULL;
	end->prev = temp->next;
	temp->next = end;

	return (end);
}
