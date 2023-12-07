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

	if (end == NULL)
		return (*end);
	end->n = n;
	end->prev = NULL;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	end->prev = tmp;
	end->next = NULL;
	temp->next = end;


	return (end);
}
