#include "lists.h"
/**
 * pop_listint - function that deletes the node
 * @head: first node
 * Return: nodes data if head != null else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *c;
	int n;

	if (*head == NULL)
		return (0);
	n = ptr->n;
	c = ptr->next;
	*head = c;
	free(ptr);

	return (n);
}
