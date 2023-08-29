#include "lists.h"

/**
 * add_nodeint_end - add list to end of node
 * @head: head list
 * @n: new node
 * Return: head list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *lastN = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (0);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		lastN = *head;
		while (lastN->next != NULL)
			lastN = lastN->next;
		lastN->next = ptr;
	}
	return (*head);
}
