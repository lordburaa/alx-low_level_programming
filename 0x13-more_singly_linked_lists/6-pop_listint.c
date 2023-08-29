#include "lists.h"
/**
 * pop_listint - function that deletes the node
 * @head: first node
 * Return: nodes data if head != null else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *p
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;

	return (n);
}
