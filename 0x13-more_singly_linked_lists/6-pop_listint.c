#include "lists.h"
/**
 * pop_listint - function that deletes the node
 * @head: first node
 * Return: nodes data if head != null else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!head || *head)
		return (0);
	n = (*head)->n;
	ptr = (*head)->next;
	free(ptr);
	*head = ptr;

	return (n);
}
