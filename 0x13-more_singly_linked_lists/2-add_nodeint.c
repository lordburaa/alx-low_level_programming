#include "lists.h"
/**
 * add_nodeint - add new node to head of llist
 * @head: head list
 * @n: data in node
 * Return: pointer to new head of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
